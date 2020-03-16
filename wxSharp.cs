using CppSharp.AST;
using CppSharp.Passes;
using System.IO;
using System;

namespace CppSharp
{
    class wxSharpGen : ILibrary
    {
        public void Setup(Driver driver)
        {
            var options = driver.Options;
            options.LibraryName = "wxSharp";
            //options.Headers.Add("wx/list.h");
            options.Headers.Add("wx/app.h");
            var wxSharp = GetExamplesDirectory ("wxSharp");
            var wxPath = Path.Combine (wxSharp, "wxWidgets/include");
            options.addIncludeDirs(wxPath);
            options.addDefines("HAVE_SSIZE_T");
            options.addDefines("_FILE_OFFSET_BITS=64");
            options.addDefines("WXUSINGDLL");
            options.addDefines("__WXMAC__");
            options.addDefines("__WXOSX__");
            options.addDefines("__WXOSX_COCOA__");
            options.TargetTriple = "i686-apple-darwin12.4.0";
            options.Verbose = true;

            options.OutputDir = Path.Combine(wxSharp, options.TargetTriple);

        }

        public void SetupPasses(Driver driver)
        {
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
        }

        public void Postprocess(Driver driver, ASTContext ctx)
        {
        }

        public static string GetExamplesDirectory(string name)
        {
            var directory = Directory.GetParent(Directory.GetCurrentDirectory());

            while (directory != null)
            {
                var path = Path.Combine(directory.FullName, "examples", name);

                if (Directory.Exists(path))
                    return path;

                directory = directory.Parent;
            }

            throw new Exception(string.Format(
                "Examples directory for project '{0}' was not found", name));
        }

        static class Program
        {
            public static void Main(string[] args)
            {
                var dir = Directory.GetCurrentDirectory ();

                ConsoleDriver.Run(new wxSharpGen());
            }
        }
    }
}
