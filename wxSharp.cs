using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Generators;
using CppSharp.Generators.AST;
using CppSharp.Generators.CLI;
using CppSharp.Passes;
using CppSharp.Types;
using wxSharp;

namespace CppSharp
{
    class wxSharpGen : ILibrary
    {
        public string WxPath => Path.Combine(GetExamplesDirectory("wxSharp"),
            "wxWidgets");

        public void Setup(Driver driver)
        {
            var options = driver.Options;

            var module = options.AddModule("wxSharp");
            module.LibraryName = "wxSharp";

            module.Headers.Add("wx/app.h");
            module.Headers.Add("wx/window.h");
            module.Headers.Add("wx/toplevel.h");
            module.Headers.Add("wx/frame.h");
            module.Headers.Add("wx/event.h");
            module.Headers.Add("wx/graphics.h");
            module.Headers.Add("wx/gdicmn.h");
            //module.Headers.Add("wx/debug.h");

            // TODO: Replace this is wx-config invocations.

            var wxIncludePath = Path.Combine(WxPath, "include");
            module.IncludeDirs.Add(wxIncludePath);
            module.IncludeDirs.Add(Path.Combine (WxPath,
                "build-cocoa-debug/lib/wx/include/osx_cocoa-unicode-3.1"));

            module.Defines.Add("HAVE_SSIZE_T");
            module.Defines.Add("_FILE_OFFSET_BITS=64");
            module.Defines.Add("WXUSINGDLL");
            module.Defines.Add("__WXMAC__");
            module.Defines.Add("__WXOSX__");
            module.Defines.Add("__WXOSX_COCOA__");

            var parserOptions = driver.ParserOptions;
            parserOptions.TargetTriple = "i686-apple-darwin";
            parserOptions.AddIncludeDirs(wxIncludePath);

            options.OutputDir = Path.Combine(GetExamplesDirectory("wxSharp"),
                parserOptions.TargetTriple);
            options.GenerateSingleCSharpFile = false;
            options.CompileCode = true;
            options.GenerateClassTemplates = true;
            options.GeneratorKind = Generators.GeneratorKind.CPlusPlus;
            options.UseHeaderDirectories = true;
            //options.DryRun = true;
            //options.Verbose = true;
        }

        public void SetupPasses(Driver driver)
        {
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
            ctx.IgnoreTranslationUnits();

            ctx.GenerateTranslationUnits(new[] { "window.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/window.h", "wx/window.h");
            MoveDefinitionsFromTo(ctx, "wxWindowBase", "wxWindow");

            ctx.GenerateTranslationUnits(new[] { "app.h" });
            ctx.IgnoreClassWithName("wxAppInitializer");
            MoveTranslationUnitFromTo(ctx, "wx/unix/app.h", "wx/app.h");
            MoveTranslationUnitFromTo(ctx, "wx/osx/app.h", "wx/app.h");
            MoveDefinitionsFromTo(ctx, "wxAppConsoleBase", "wxAppConsole");
            MoveDefinitionsFromTo(ctx, "wxAppBase", "wxApp");

            ctx.GenerateTranslationUnits(new[] { "frame.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/frame.h", "wx/frame.h");

            ctx.GenerateTranslationUnits(new[] { "toplevel.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/toplevel.h", "wx/toplevel.h");

            ctx.GenerateTranslationUnits(new[] { "graphics.h" });
            ctx.GenerateTranslationUnits(new[] { "gdicmn.h" });

            ctx.GenerateTranslationUnits(new[] { "event.h" });
            ctx.IgnoreClassWithName("wxEventFunctor");
            ctx.IgnoreClassMethodWithName("wxEventFunctor", "GetWxTypeId");
            ctx.IgnoreClassWithName("wxObjectEventFunctor");
            ctx.IgnoreClassMethodWithName("wxObjectEventFunctor", "GetWxTypeId");
            ctx.IgnoreClassWithName("wxPropagationDisabler");
            ctx.IgnoreClassWithName("wxPropagationOnce");
            ctx.IgnoreClassWithName("wxEventProcessInHandlerOnly");
            ctx.IgnoreClassWithName("wxEventBasicPayloadMixin");
            ctx.IgnoreClassWithName("wxEventAnyPayloadMixin");
            ctx.IgnoreClassWithName("wxEventTableEntry");
            ctx.IgnoreClassWithName("wxDynamicEventTableEntry");
            ctx.IgnoreClassWithName("wxEventTable");
            ctx.IgnoreClassWithName("wxEventTableEntryPointerArray");
            ctx.IgnoreClassWithName("wxEventHashTable");
            ctx.IgnoreClassWithName("wxEvtHandlerArray");
            ctx.IgnoreClassWithName("wxEventConnectionRef");
            ctx.IgnoreClassWithName("wxEventBlocker");

            var frameStyle = ctx.GenerateEnumFromMacros("wxFrameStyle", new string[]
            {
                "wxCENTRE",
                "wxFRAME_NO_TASKBAR",
                "wxFRAME_TOOL_WINDOW",
                "wxFRAME_FLOAT_ON_PARENT",
                "wxFRAME_SHAPED",
                "wxDIALOG_NO_PARENT",
                "wxRESIZE_BORDER",
                "wxTINY_CAPTION_VERT",
                "wxMAXIMIZE_BOX",
                "wxMINIMIZE_BOX",
                "wxSYSTEM_MENU",
                "wxCLOSE_BOX",
                "wxMAXIMIZE",
                "wxMINIMIZE",
                "wxSTAY_ON_TOP",
                "wxCAPTION",
                "wxCLIP_CHILDREN",
                "wxDEFAULT_FRAME_STYLE"
            }).SetFlags();

            var passBuilder = driver.Context.TranslationUnitPasses;

            passBuilder.Passes.Remove(
                driver.Context.TranslationUnitPasses.Passes.Find(
                    p => p.GetType() == typeof(ConstructorToConversionOperatorPass)));

            passBuilder.RemovePrefix("wx");

            new FixMethodOverrides().VisitASTContext(ctx);
            new IgnoreMethodWithReferences().VisitASTContext(ctx);
            new FixEnumsScope().VisitASTContext(ctx);

            // Go through and process each class from Doxygen XML.
            //ParseDoxygenXml();

            //var wxApp = DoxygenParser.Nodes.Where(n => n.Key.name == "wxAppConsole");
        }

        private void MoveTranslationUnitFromTo(ASTContext ctx,
            string source, string dest)
        {
            var sourceUnit = ctx.TranslationUnits.Find(u => u.FileRelativePath == source);
            var destUnit = ctx.TranslationUnits.Find(u => u.FileRelativePath == dest);

            if (sourceUnit == null || destUnit == null)
                throw new Exception("Translation unit was not found");

            MoveTranslationUnitFromTo(ctx, sourceUnit, destUnit);
        }

        private void MoveTranslationUnitFromTo(ASTContext ctx,
            TranslationUnit source, TranslationUnit dest)
        {
            var pass = new MoveTranslationUnitDecls(source, dest);
            source.Visit(pass);
        }

        private void MoveDefinitionsFromTo(ASTContext ctx,
            string source, string dest)
        {
            var sourceClass = ctx.FindCompleteClass(source);
            var destClass = ctx.FindCompleteClass(dest);

            sourceClass.GenerationKind = GenerationKind.None;

            foreach (var decl in sourceClass.Declarations)
            {
                decl.Namespace = destClass;
                destClass.Declarations.Add(decl);
            }

            foreach (var field in sourceClass.Fields)
            {
                field.Namespace = destClass;
                destClass.Fields.Add(field);
            }

            foreach (var prop in sourceClass.Properties)
            {
                var existing = destClass.Methods.FirstOrDefault(
                    p => p.Name == prop.Name);
                if (existing != null && existing.IsOverride)
                    continue;

                prop.Namespace = destClass;
                destClass.Properties.Add(prop);
            }

            foreach (var method in sourceClass.Methods)
            {
                if (method.IsConstructor || method.IsDestructor)
                    continue;

                var existing = destClass.Methods.FirstOrDefault(
                    m => m.Name == method.Name);
                if (existing != null && existing.IsOverride)
                    continue;

                method.Namespace = destClass;
                destClass.Methods.Add(method);
            }

            var baseSpec = destClass.Bases.Find(b => b.Class == sourceClass);
            if (baseSpec != null)
                baseSpec.ExplicitlyIgnore();
                //destClass.Bases.Remove(baseSpec);
        }

        private void ParseDoxygenXml()
        {
            DoxygenParser.Initialize();

            var xmlPath = Path.Combine(WxPath, "docs/doxygen/out/xml");
            foreach (var filePath in Directory.EnumerateFiles(xmlPath))
            {
                var file = Path.GetFileName(filePath);
                if (!file.StartsWith("class"))
                    continue;

                DoxygenParser.ParseFile(filePath);
            }
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

            throw new Exception($"Examples directory for project '{name}' was not found");
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

    #region Type Maps

    [TypeMap("wxString", GeneratorKind.CPlusPlus)]
    class WxStringTypeMap : TypeMap
    {
        public override AST.Type CppSignatureType(TypePrinterContext ctx)
        {
            if (ctx.Kind == TypePrinterContextKind.Native)
                return ctx.Type;

            var ptr = new PointerType(new QualifiedType(new BuiltinType(PrimitiveType.Char),
                new TypeQualifiers() { IsConst = true }))
                { Modifier = PointerType.TypeModifier.Pointer };

            return ptr;
        }

        public override void CppTypeReference(CLITypeReference collector,
            ASTRecord<Declaration> record)
        {
            base.CppTypeReference(collector, record);
        }

        public override void CppMarshalToManaged(MarshalContext ctx)
        {
            ctx.Return.Write($"{ctx.ReturnVarName}.c_str()");
        }

        public override void CppMarshalToNative(MarshalContext ctx)
        {
            base.CppMarshalToNative(ctx);
        }
    }

    [TypeMap("wxString*", GeneratorKind.CPlusPlus)]
    class WxStringPtrTypeMap : TypeMap
    {
        public override AST.Type CppSignatureType(TypePrinterContext ctx)
        {
            if (ctx.Kind == TypePrinterContextKind.Native)
                return ctx.Type;

            var ptr = new PointerType(new QualifiedType(new BuiltinType(PrimitiveType.Char),
                new TypeQualifiers() { IsConst = true }));
            var @ref = new PointerType(ptr) { Modifier = PointerType.TypeModifier.Pointer };

            return @ref;
        }

        public override void CppTypeReference(CLITypeReference collector,
            ASTRecord<Declaration> record)
        {
            base.CppTypeReference(collector, record);
        }

        public override void CppMarshalToManaged(MarshalContext ctx)
        {
            ctx.Return.Write($"{ctx.ReturnVarName}->c_str()");
        }

        public override void CppMarshalToNative(MarshalContext ctx)
        {
            ctx.Return.Write("nullptr");
        }
    }

    #endregion

    #region Custom Passes

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

    class IgnoreMethodWithReferences : TranslationUnitPass
    {
        public override bool VisitMethodDecl(Method method)
        {
            if (!method.IsGenerated)
                return false;

            if (method.ReturnType.Type.IsReference() ||
                method.ReturnType.Type.Desugar().IsReference())
                method.GenerationKind = GenerationKind.None;

            return true;
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

        public override bool VisitMethodDecl(Method method)
        {
            if (!VisitDeclaration(method))
                return false;

            if (!method.IsOverride || method.IsDestructor)
                return false;

            var @class = method.Namespace as Class;

            var baseClass = GetBaseClassForOverridenMethod(method);
            if (!baseClass.IsGenerated || !@class.Bases.Any(spec => spec.Class == baseClass))
                method.IsOverride = false;

            return true;
        }
    }

    #endregion
}
