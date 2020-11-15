using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml.Linq;

namespace wxSharp
{
    /// <summary>
    /// The purpose of this tool is to generate the needed Premake files groups
    /// for each platform that we need to compile wxWidgets. These are in the
    /// Bakefile XML format in a file called "files.bkl" in "build\bakefiles".
    /// </summary>
    class BakefileParser
    {
        public readonly Dictionary<string, List<string>> FileGroups;

        public BakefileParser()
        {
            FileGroups = new Dictionary<string, List<string>>();
        }

        public void Parse(string fileName)
        {
            var doc = XDocument.Load(fileName);

            if (doc == null | doc.Root == null)
                throw new ApplicationException("invalid data");

            foreach (var set in doc.Root.Descendants("set"))
            {
                var @var = set.Attribute("var");

                if (var == null)
                    throw new ApplicationException("no variable in <set>");

                var hints = set.Attribute("hints");

                if (hints != null && hints.Value != "files")
                {
                    Console.WriteLine("Ignoring group '{0}'", @var.Value);
                    continue;
                }

                var filesText = set.Value;
                var files = filesText.Split()
                    .Where(s => !string.IsNullOrWhiteSpace(s)).ToList();

                FileGroups[@var.Value] = files;
            }
        }
    }

    interface BuildGenerator
    {
        void GenerateFileGroup(string groupName);
        void GenerateConfigBlockStart(string configName);
        void GenerateConfigBlockEnd();
    }

    class PremakeFileListGen : TextGenerator, BuildGenerator
    {
        internal BakefileParser parser;

        public PremakeFileListGen(BakefileParser parser)
        {
            this.parser = parser;
        }

        public void GenerateFileGroup(string groupName)
        {
            if (!parser.FileGroups.ContainsKey(groupName))
                return;

            var groupFiles = parser.FileGroups[groupName];

            WriteLine($"{groupName} = ");
            WriteStartBraceIndent();
            foreach (var path in groupFiles)
            {
                WriteLine("WX_BASE_DIR .. \"{0}\",", path);
            }
            WriteCloseBraceIndent();
            NewLine();
        }

        public void GenerateConfigBlockStart(string configName)
        {
        }

        public void GenerateConfigBlockEnd()
        {
        }
    }

    class PremakeGroupGen : TextGenerator, BuildGenerator
    {
        internal BakefileParser parser;
        internal bool insideFilter = false;

        public PremakeGroupGen(BakefileParser parser)
        {
            this.parser = parser;
        }

        public void GenerateFileGroup(string groupName)
        {
            if (!parser.FileGroups.ContainsKey(groupName))
                return;

            WriteLine($"files {{ {groupName} }}");

            if (!insideFilter)
                NewLine();
        }

        public void GenerateConfigBlockStart(string configName)
        {
            insideFilter = true;

            WriteLine("cfg = filter {{ \"{0}\" }}", configName);
            PushIndent();
        }

        public void GenerateConfigBlockEnd()
        {
            PopIndent();
            WriteLine("filter (cfg)");
            NewLine();

            insideFilter = false;
        }
    }

    class Program
    {
        static string GetSourceDirectory(string dir)
        {
            var directory = new DirectoryInfo(Directory.GetCurrentDirectory());

            while (directory != null)
            {
                var path = Path.Combine(directory.FullName, dir);

                if (Directory.Exists(path))
                    return path;

                directory = directory.Parent;
            }

            throw new Exception("Could not find build directory: " + dir);
        }

        static void Main(string[] args)
        {
            /*
            if (args.Length < 2)
            {
                Console.WriteLine("Invalid arguments.");
                Console.WriteLine("Usage:");
                Console.WriteLine("  {0} files.bkl output.lua",
                    Path.GetFileName(Environment.GetCommandLineArgs()[0]));
                return;
            }*/

            var baseDir = GetSourceDirectory(Path.Combine("examples", "wxSharp"));
            var filename = Path.Combine(baseDir, "wxWidgets", "build", "bakefiles", "files.bkl");

            if (args.Length > 1)
                filename = args[0];

            var parser = new BakefileParser();
            parser.Parse(filename);

            var fileGen = new PremakeFileListGen(parser);
            Generate(fileGen);

            var generated = fileGen.ToString();

            var generateGroups = false;
            if (generateGroups)
            {
                var groupGen = new PremakeGroupGen(parser);
                Generate(groupGen);

                generated += groupGen.ToString();
            }

            var outFile = Path.Combine(baseDir, "wx-files.lua");
            File.WriteAllText(outFile, generated);

            Console.WriteLine($"Generated {outFile}...");
        }

        private static void Generate(BuildGenerator gen)
        {
            var options = new
            {
                UseAUI = false,
                UseAdvanced = true,
                UsePropgrid = false
            };

            // Common files
            gen.GenerateFileGroup("BASE_CMN_SRC");
            gen.GenerateFileGroup("BASE_CMN_HDR");
            gen.GenerateFileGroup("BASE_AND_GUI_CMN_SRC");

            gen.GenerateFileGroup("GUI_CMN_SRC");
            gen.GenerateFileGroup("GUI_CMN_HDR");

            if (options.UseAUI)
            {
                gen.GenerateFileGroup("AUI_SRC");
                gen.GenerateFileGroup("AUI_HDR");
            }

            if (options.UsePropgrid)
            {
                gen.GenerateFileGroup("PROPGRID_SRC");
                gen.GenerateFileGroup("PROPGRID_HDR");
            }

            if (options.UseAdvanced)
            {
                gen.GenerateFileGroup("ADVANCED_CMN_SRC");
                gen.GenerateFileGroup("ADVANCED_CMN_HDR");
            }

            // Unix and Darwin files
            gen.GenerateConfigBlockStart("unix osx");
            {
                gen.GenerateFileGroup("BASE_UNIX_AND_DARWIN_SRC");
                gen.GenerateFileGroup("BASE_UNIX_AND_DARWIN_HDR");
            }
            gen.GenerateConfigBlockEnd();

            // Unix files
            gen.GenerateConfigBlockStart("unix");
            {
                gen.GenerateFileGroup("UNIX_SRC");
            }
            gen.GenerateConfigBlockEnd();

            // macOS files
            gen.GenerateConfigBlockStart("macosx");
            {
                gen.GenerateFileGroup("BASE_COREFOUNDATION_SRC");
                gen.GenerateFileGroup("BASE_COREFOUNDATION_HDR");

                gen.GenerateFileGroup("BASE_OSX_SHARED_SRC");
                gen.GenerateFileGroup("BASE_OSX_SHARED_HDR");
            }
            gen.GenerateConfigBlockEnd();

            // Windows files
            gen.GenerateConfigBlockStart("windows");
            {
                gen.GenerateFileGroup("BASE_WIN32_SRC");
                gen.GenerateFileGroup("BASE_AND_GUI_WIN32_SRC");
                gen.GenerateFileGroup("BASE_WIN32_HDR");

                gen.GenerateFileGroup("MSW_LOWLEVEL_SRC");
                gen.GenerateFileGroup("MSW_DESKTOP_LOWLEVEL_SRC");
                gen.GenerateFileGroup("MSW_DESKTOP_LOWLEVEL_HDR");
                gen.GenerateFileGroup("MSW_SRC");
                gen.GenerateFileGroup("MSW_HDR");
                gen.GenerateFileGroup("MSW_DESKTOP_SRC");
                gen.GenerateFileGroup("MSW_DESKTOP_HDR");

                gen.GenerateFileGroup("MSW_DESKTOP_SRC");
                gen.GenerateFileGroup("MSW_DESKTOP_HDR");

                if (options.UseAdvanced)
                {
                    gen.GenerateFileGroup("ADVANCED_MSW_SRC");
                    gen.GenerateFileGroup("ADVANCED_MSW_HDR");

                    gen.GenerateFileGroup("ADVANCED_MSW_NATIVE_SRC");
                    gen.GenerateFileGroup("ADVANCED_MSW_NATIVE_HDR");
                }
            }
            gen.GenerateConfigBlockEnd();
        }
    }
}
