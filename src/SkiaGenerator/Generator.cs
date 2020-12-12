using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Generators;
using CppSharp.Generators.AST;
using CppSharp.Generators.C;
using CppSharp.Generators.CLI;
using CppSharp.Generators.Cpp;
using CppSharp.Passes;
using CppSharp.Types;
using static CppSharp.ASTHelpers;

namespace CppSharp
{
    class SkiaGenerator : ILibrary
    {
        public TargetPlatform TargetPlatform = TargetPlatform.Linux;
        public GeneratorKind GeneratorKind = GeneratorKind.CPlusPlus;

        public static string SkiaPath => Path.Combine(GetExamplesDirectory("wxSharp"),
            "build/skia");

        public void Setup(Driver driver)
        {
            var options = driver.Options;

            var module = options.AddModule("SkiaSharp");
            module.LibraryName = "SkiaSharp";

            var headers = new string[]
            {
                "include/core/SkCanvas.h",
            };

            module.Headers.AddRange(headers);

            // TODO: Replace this with wx-config invocations.

            TargetPlatform = TargetPlatform.Linux;

            var includePath = Path.Combine(SkiaPath);
            module.IncludeDirs.Add(includePath);
            
            //module.Defines.Add("WXUSINGDLL");
            //module.Defines.Add("wxUSE_GUI=1");

            var parserOptions = driver.ParserOptions;
            parserOptions.AddIncludeDirs(includePath);
            parserOptions.UnityBuild = true;
            //parserOptions.Verbose = true;
            //parserOptions.SkipLayoutInfo = true;

            switch (TargetPlatform)
            {
                case TargetPlatform.Windows:
                    break;
                case TargetPlatform.Linux:
                    parserOptions.TargetTriple = "x86_64-pc-linux-gnu";
                    break;
                case TargetPlatform.Android:
                    break;
                case TargetPlatform.MacOS:
                    parserOptions.TargetTriple = "i686-apple-darwin";
                    break;
                case TargetPlatform.iOS:
                    break;
                case TargetPlatform.WatchOS:
                    break;
                case TargetPlatform.TVOS:
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }

            options.OutputDir = Path.Combine(GetExamplesDirectory("wxSharp"), "gen/skia",
                parserOptions.TargetTriple, GeneratorKind.ToString().ToLowerInvariant());
            options.GenerateDeprecatedDeclarations = false;
            options.GenerationOutputMode = GenerationOutputMode.FilePerUnit;
            options.CompileCode = false;
            options.GenerateClassTemplates = true;
            options.GeneratorKind = GeneratorKind;
            options.UseHeaderDirectories = true;
            //options.Verbose = true;
        }

        public void SetupPasses(Driver driver)
        {
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
            var passBuilder = driver.Context.TranslationUnitPasses;
            var options = driver.Options;

            //ctx.IgnoreTranslationUnits();

            // ----------------------------------------------------------------
            //ctx.GenerateTranslationUnits(new[] { "SkCanvas.h" });

            // ----------------------------------------------------------------
        }

        public void Postprocess(Driver driver, ASTContext ctx)
        {
        }

        public void GenerateCode(Driver driver, List<GeneratorOutput> outputs)
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

            throw new Exception($"Examples directory for project '{name}' was not found");
        }

        static class Program
        {
            public static void Main(string[] args)
            {
                ConsoleDriver.Run(new SkiaGenerator());
            }
        }
    }

    class ASTHelpers
    {
        public static void MoveTranslationUnitFromTo(ASTContext ctx,
            string source, string dest)
        {
            var sourceUnit = ctx.TranslationUnits.Find(u => u.FileRelativePath == source);
            var destUnit = ctx.TranslationUnits.Find(u => u.FileRelativePath == dest);

            if (sourceUnit == null || destUnit == null)
                throw new Exception("Translation unit was not found");

            MoveTranslationUnitFromTo(ctx, sourceUnit, destUnit);
        }

        public static void MoveTranslationUnitFromTo(ASTContext ctx,
            TranslationUnit source, TranslationUnit dest)
        {
            var pass = new MoveTranslationUnitDecls(source, dest);
            source.Visit(pass);
        }

        public static void MoveDefinitionsFromTo(ASTContext ctx,
            string source, string dest)
        {
            var sourceClass = ctx.FindCompleteClass(source);
            if (sourceClass == null)
                throw new Exception($"Cannot find class {source}");

            var destClass = ctx.FindCompleteClass(dest);
            if (destClass == null)
                throw new Exception($"Cannot find class {dest}");

            MoveDefinitionsFromTo(sourceClass, destClass);
        }

        public static void MoveDefinitionsFromTo(Class source, Class dest)
        {
            source.GenerationKind = GenerationKind.None;

            foreach (var decl in source.Declarations)
            {
                decl.Namespace = dest;
                dest.Declarations.Add(decl);
            }

            foreach (var field in source.Fields)
            {
                field.Namespace = dest;
                dest.Fields.Add(field);
            }

            foreach (var prop in source.Properties)
            {
                var existing = dest.Methods.FirstOrDefault(
                    p => p.Name == prop.Name);
                if (existing != null && existing.IsOverride)
                    continue;

                prop.Namespace = dest;
                dest.Properties.Add(prop);
            }

            foreach (var method in source.Methods)
            {
                if (method.IsDestructor)
                    continue;

                var existing = dest.Methods.Where(m =>
                {
                    if (method.IsConstructor)
                        return m.IsConstructor;

                    return m.Name == method.Name;
                });

                // If a method with the same signature already exists, then bail.
                if (existing != null && existing.Any(m => m.HasSameSignature(method)))
                    continue;

                /*if (existing != null && method.HasSameSignature(existing))
                {
                    continue;

                    /*if (existing.IsOverride)
                        continue;

                    if (existing.IsVirtual)
                        continue;
                }*/

                method.Namespace = dest;
                dest.Methods.Add(method);
            }

            var baseSpec = dest.Bases.Find(b => b.Class == source);
            if (baseSpec != null)
            {
                baseSpec.ExplicitlyIgnore();

                dest.Bases.AddRange(source.Bases);
            }

            //destClass.Bases.Remove(baseSpec);
        }
    }

    #region Custom Passes

    class RemoveDeclarations : TranslationUnitPass
    {
        public override bool VisitMethodDecl(Method method)
        {
            return base.VisitMethodDecl(method);
        }

        public override bool VisitClassDecl(Class @class)
        {
            return base.VisitClassDecl(@class);
        }
    }

    class RemovePlatformSpecificMembers : TranslationUnitPass
    {
        public override bool VisitDeclaration(Declaration decl)
        {
            return base.VisitDeclaration(decl);
        }
    }

    class MoveTranslationUnitDecls : TranslationUnitPass
    {
        readonly TranslationUnit sourceUnit;
        readonly TranslationUnit targetUnit;

        public MoveTranslationUnitDecls(TranslationUnit source, TranslationUnit target)
        {
            sourceUnit = source;
            targetUnit = target;
        }

        public override bool VisitDeclaration(Declaration decl)
        {
            if (decl is TranslationUnit)
                return true;

            if (!(decl.Namespace is Namespace || decl.Namespace is TranslationUnit))
                return false;

            if (decl.TranslationUnit != sourceUnit)
                return false;

            Namespace targetNamespace = targetUnit;
            if (!(decl.Namespace is TranslationUnit))
            {
                // Find same namespace in the target unit.
                // TODO:
                throw new Exception();
            }

            targetNamespace.Declarations.Add(decl);
            decl.Namespace = targetNamespace;

            return true;
        }

        public override bool VisitTranslationUnit(TranslationUnit unit)
        {
            var res = base.VisitTranslationUnit(unit);
            unit.GenerationKind = GenerationKind.None;
            return res;
        }
    }

    class FixEnumsScope : TranslationUnitPass
    {
        public override bool VisitEnumDecl(Enumeration @enum)
        {
            @enum.SetScoped();
            return true;
        }
    }

    class FixMethodOverrides : TranslationUnitPass
    {
        static Class GetBaseClassForOverridenMethod(Method method)
            => method.BaseMethod.Namespace as Class;

        static bool HasGeneratedBaseClass(Class @class, Class baseClass)
        {
            if (@class == baseClass)
                return true;

            foreach (var bs in @class.Bases)
            {
                if (!bs.IsGenerated)
                    continue;

                if (!bs.IsClass || !bs.Class.IsGenerated)
                    continue;

                if (HasGeneratedBaseClass(bs.Class, baseClass))
                    return true;
            }

            return false;
        }

        public static bool FixMethodOverride(Method method)
        {
            if (!method.IsGenerated)
                return false;

            if (!method.IsVirtual || method.IsDestructor)
                return false;

            method.IsOverride = false;

            var @class = method.Namespace as Class;
            var baseMethod = @class.GetBaseMethod(method);

            if (baseMethod != null)
            {
                var baseClass = baseMethod.Namespace as Class;
                method.IsOverride = baseClass.IsGenerated;
            }

            return true;
        }

        public override bool VisitMethodDecl(Method method)
        {
            if (!VisitDeclaration(method))
                return false;

            return FixMethodOverride(method);
        }
    }

    public static class StringExtensions
    {
        /// <summary>
        /// Compares the string against a given pattern.
        /// </summary>
        /// <param name="str">The string.</param>
        /// <param name="pattern">The pattern to match, where "*" means any
        /// sequence of characters, and "?" means any single character.</param>
        /// <returns><c>true</c> if the string matches the given pattern;
        /// otherwise <c>false</c>.
        /// </returns>
        public static bool Match(this string str, string pattern)
        {
            return new Regex(
                "^" + Regex.Escape(pattern).Replace(@"\*", ".*").Replace(@"\?", ".") + "$",
                RegexOptions.IgnoreCase | RegexOptions.Singleline
            ).IsMatch(str);
        }
    }

    #endregion
}
