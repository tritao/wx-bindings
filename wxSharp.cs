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
using CppSharp.Passes;
using CppSharp.Types;
using wxSharp;
using static CppSharp.ASTHelpers;

namespace CppSharp
{
    class wxSharpGen : ILibrary
    {
        public static string WxPath => Path.Combine(GetExamplesDirectory("wxSharp"),
            "wxWidgets");

        public GeneratorKind GeneratorKind = GeneratorKind.CPlusPlus;

        public void Setup(Driver driver)
        {
            var options = driver.Options;

            var module = options.AddModule("wxSharp");
            module.LibraryName = "wxSharp";

            var headers = new string[]
            {
                "wx/app.h",
                "wx/window.h",
                "wx/nonownedwnd.h",
                "wx/toplevel.h",
                "wx/frame.h",
                "wx/event.h",
                "wx/graphics.h",
                "wx/gdicmn.h",
                "wx/sizer.h",
                "wx/dc.h",
                "wx/dcclient.h",
                "wx/panel.h",
                "wx/brush.h",
                "wx/pen.h",
            };

            module.Headers.AddRange(headers);

            // TODO: Replace this with wx-config invocations.

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
            module.Defines.Add("wxUSE_GUI=1");

            var parserOptions = driver.ParserOptions;
            parserOptions.TargetTriple = "i686-apple-darwin";
            parserOptions.AddIncludeDirs(wxIncludePath);
            //parserOptions.UnityBuild = true;

            options.OutputDir = Path.Combine(GetExamplesDirectory("wxSharp"),
                parserOptions.TargetTriple, GeneratorKind.ToString().ToLowerInvariant());
            options.GenerateDeprecatedDeclarations = false;
            options.GenerateSingleCSharpFile = false;
            options.CompileCode = true;
            options.GenerateClassTemplates = true;
            options.GeneratorKind = GeneratorKind;
            options.UseHeaderDirectories = true;
            //options.DryRun = true;
            //options.Verbose = true;
        }

        public void SetupPasses(Driver driver)
        {
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
            var passBuilder = driver.Context.TranslationUnitPasses;

            ctx.IgnoreTranslationUnits();

            ctx.GenerateTranslationUnits(new[] { "defs.h" });
            
            var sizerOrientation = ctx.FindCompleteEnum("wxOrientation");
            sizerOrientation.Name = "wxSizerOrientation";

            // TODO: Rewrite this to actually work.
            var sizerFlags = ctx.GenerateEnumFromMacros("wxSizerFlags", new string[]
            {
                "wxTOP",
                "wxBOTTOM",
                "wxLEFT",
                "wxRIGHT",
                "wxALL",
                "wxEXPAND",
                "wxFIXED_MINSIZE",
                "wxRESERVE_SPACE_EVEN_IF_HIDDEN",
                "wxALIGN_CENTER",
                "wxALIGN_LEFT",
                "wxALIGN_RIGHT",
                "wxALIGN_TOP",
                "wxALIGN_BOTTOM",
                "wxALIGN_CENTER_VERTICAL",
                "wxALIGN_CENTER_HORIZONTAL",
            }).SetFlags();

            ctx.GetEnumWithMatchingItem("wxJOYSTICK1").Name = "wxJoystickId";
            var wxJoystickButton = ctx.GetEnumWithMatchingItem("wxJOY_BUTTON_ANY");
            wxJoystickButton.SetFlags();
            wxJoystickButton.Name = "wxJoystickButton";

            // TODO: Fix parameters in wxAppBase::Get/SetPrintMode.
            ctx.GetEnumWithMatchingItem("wxPRINT_WINDOWS").Name = "wxPrintBackend";

            ctx.GenerateTranslationUnits(new[] { "object.h" });

            ctx.GenerateTranslationUnits(new[] { "window.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/window.h", "wx/window.h");
            MoveDefinitionsFromTo(ctx, "wxWindowBase", "wxWindow");

            var touchMode = ctx.GetEnumWithMatchingItem("wxTOUCH_NONE");
            touchMode.Name = "wxTouchMode";
            touchMode.SetFlags();

            var sendEventFlags = ctx.GetEnumWithMatchingItem("wxSEND_EVENT_POST");
            sendEventFlags.Name = "wxSendEventFlags";
            sendEventFlags.SetFlags();

            ctx.FindCompleteClass("wxWindowBase").FindMethod("IsTransparentBackgroundSupported")
                .Parameters[0].Usage = ParameterUsage.Out;

            ctx.GenerateTranslationUnits(new[] { "nonownedwnd.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/nonownedwnd.h", "wx/nonownedwnd.h");

            // TODO: Fix bug with public overriding protected base virtual method.
            ctx.IgnoreClassMethodWithName("wxNonOwnedWindowBase", "AdjustForParentClientOrigin");

            ctx.GenerateTranslationUnits(new[] { "app.h" });
            ctx.IgnoreClassWithName("wxAppInitializer");
            MoveTranslationUnitFromTo(ctx, "wx/unix/app.h", "wx/app.h");
            MoveTranslationUnitFromTo(ctx, "wx/osx/app.h", "wx/app.h");
            MoveDefinitionsFromTo(ctx, "wxAppConsoleBase", "wxAppConsole");
            MoveDefinitionsFromTo(ctx, "wxAppBase", "wxApp");

            // TODO: Implement proper generation of function pointer proxies
            var appConsole = ctx.FindCompleteClass("wxAppConsole");
            appConsole.FindMethod("GetInitializerFunction").ExplicitlyIgnore();
            appConsole.FindMethod("SetInitializerFunction").ExplicitlyIgnore();

            ctx.GenerateTranslationUnits(new[] { "frame.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/frame.h", "wx/frame.h");

            ctx.GenerateTranslationUnits(new[] { "toplevel.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/toplevel.h", "wx/toplevel.h");

            // Undefined symbols "wxTopLevelWindow::wxCreateObject()"
            ctx.IgnoreClassMethodWithName("wxTopLevelWindow", "wxCreateObject");

            // TODO: Fix parameters in wxTopLevelWindowBase::ShowFullScreen.
            var fullscreenMode = ctx.GetEnumWithMatchingItem("wxFULLSCREEN_NOMENUBAR");
            fullscreenMode.Name = "wxFullscreenMode";
            fullscreenMode.SetFlags();
            passBuilder.RemovePrefix("wxFULLSCREEN_");

            // TODO: Fix parameters in wxTopLevelWindowBase::RequestUserAttention.
            var userAttention = ctx.GetEnumWithMatchingItem("wxUSER_ATTENTION_INFO");
            userAttention.Name = "wxUserAttention";
            passBuilder.RemovePrefix("wxUSER_ATTENTION_");

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

            ctx.FindCompleteClass("wxHelpEvent").FindEnum("Origin").Name = "Source";
            ctx.FindCompleteClass("wxDropFilesEvent").ExplicitlyIgnore();

            ctx.GenerateTranslationUnits(new[] { "sizer.h" });

            passBuilder.RemovePrefix("wxFLEX_GROWMODE_");

            var sizerItemList = ctx.FindCompleteClass("wxSizerItemList");
            sizerItemList.FindClass("compatibility_iterator").ExplicitlyIgnore();
            sizerItemList.FindClass("iterator").ExplicitlyIgnore();
            sizerItemList.FindClass("const_iterator").ExplicitlyIgnore();
            sizerItemList.FindClass("reverse_iterator").ExplicitlyIgnore();
            sizerItemList.FindClass("const_reverse_iterator").ExplicitlyIgnore();

            // wxSizerFlags fixups
            var sizerFlagsType = new QualifiedType(new TagType(sizerFlags));

            // wxSizerOrientation fixups
            var sizerOrientationType = new QualifiedType(new TagType(sizerOrientation));
            var boxSizer = ctx.FindCompleteClass("wxBoxSizer");

            var boxSizerCtor = boxSizer.Constructors.First(
                c => c.Parameters.Any(p => p.Name == "orient"));
            boxSizerCtor.Parameters[0].QualifiedType = sizerOrientationType;

            boxSizer.FindMethod("GetOrientation").ReturnType = sizerOrientationType;
            boxSizer.FindMethod("SetOrientation").Parameters[0].QualifiedType = sizerOrientationType;

            var boxSizerAdd = ctx.FindCompleteClass("wxBoxSizer").Constructors.First(
                c => c.Parameters.Any(p => p.Name == "orient"));
            boxSizerAdd.Parameters[0].QualifiedType = new QualifiedType(new TagType(sizerOrientation));

            var staticBoxSizer = ctx.FindCompleteClass("wxStaticBoxSizer");
            var staticBoxSizerCtors = staticBoxSizer.Constructors.Where(
                c => c.Parameters.Any(p => p.Name == "orient"));
            foreach (var ctor in staticBoxSizerCtors)
                ctor.Parameters.First(p => p.Name == "orient").QualifiedType = sizerOrientationType;

            ctx.GenerateTranslationUnits(new[] { "dc.h", "dcclient.h" });

            ctx.IgnoreClassWithName("wxDCImpl");
            ctx.IgnoreClassWithName("wxDCFactory");
            ctx.IgnoreClassWithName("wxNativeDCFactory");

            ctx.GenerateTranslationUnits(new[] { "panel.h", "panelg.h", "msw/panel.h" });
            MoveTranslationUnitFromTo(ctx, "wx/generic/panelg.h", "wx/panel.h");
            //MoveTranslationUnitFromTo(ctx, "wx/msw/panel.h", "wx/panel.h");
            //MoveDefinitionsFromTo(ctx, "wxAppConsoleBase", "wxAppConsole");

            var orientation = ctx.GenerateEnumFromMacros("wxFrameOrientation", new string[]
            {
                "wxCENTRE",
                "wxFRAME_NO_TASKBAR",
                "wxFRAME_TOOL_WINDOW",
                "wxFRAME_FLOAT_ON_PARENT",
            }).SetFlags();

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

            var frameCtor = ctx.FindCompleteClass("wxFrame").Constructors.First(
                c => c.Parameters.Count == 7);
            frameCtor.Parameters[5].QualifiedType = new QualifiedType(new TagType(frameStyle));

            ctx.GenerateTranslationUnits(new[] { "containr.h" });

            ctx.IgnoreFunctionWithName("wxSetFocusToChild");

            ctx.GenerateTranslationUnits(new[] { "brush.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/brush.h", "wx/brush.h");
            MoveDefinitionsFromTo(ctx, "wxBrushBase", "wxBrush");

            ctx.GenerateTranslationUnits(new[] { "pen.h", "peninfobase.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/pen.h", "wx/pen.h");
            MoveDefinitionsFromTo(ctx, "wxPenBase", "wxPen");

            ctx.GenerateTranslationUnits(new[] { "peninfobase.h" });
            MoveTranslationUnitFromTo(ctx, "wx/peninfobase.h", "wx/pen.h");

            var penInfo = ctx.FindCompleteClass("wxPenInfo");
            MoveDefinitionsFromTo(penInfo.BaseClass, penInfo);

            var graphicsPenInfo = ctx.FindCompleteClass("wxGraphicsPenInfo");
            MoveDefinitionsFromTo(graphicsPenInfo.BaseClass, graphicsPenInfo);

            passBuilder.RemovePrefix("wxPENSTYLE_");
            passBuilder.RemovePrefix("wxJOIN_");
            passBuilder.RemovePrefix("wxCAP_");

            ctx.GenerateTranslationUnits(new[] { "colour.h" });
            MoveTranslationUnitFromTo(ctx, "wx/osx/core/colour.h", "wx/colour.h");
            MoveDefinitionsFromTo(ctx, "wxColourBase", "wxColour");

            var colorClass = ctx.FindCompleteClass("wxColour");
            colorClass.Name = "wxColor";

            // Workaround bug in ParameterTypeComparer and CheckDuplicatedNamesPass
            // Remove once https://github.com/mono/CppSharp/issues/1367 is fixed.
            colorClass.Constructors.FirstOrDefault(c => c.Parameters.Any(
                p => p.Name == "colourName" && p.Type.IsPointer())).ExplicitlyIgnore();

            passBuilder.Passes.Remove(
                driver.Context.TranslationUnitPasses.Passes.Find(
                p => p.GetType() == typeof(GetterSetterToPropertyPass)));

            passBuilder.Passes.Remove(
                driver.Context.TranslationUnitPasses.Passes.Find(
                    p => p.GetType() == typeof(ConstructorToConversionOperatorPass)));

            passBuilder.RemovePrefix("wx");

            var panelBase = ctx.FindCompleteClass("wxPanelBase");
            var navigationEnabled = (panelBase.BaseClass as ClassTemplateSpecialization).TemplatedDecl;
            new FlattenTemplateInstantiationBaseClass(navigationEnabled).VisitASTContext(ctx);

            new FixMethodOverrides().VisitASTContext(ctx);
            new IgnoreMethodWithReferences().VisitASTContext(ctx);
            new FixEnumsScope().VisitASTContext(ctx);

            var indexer = new WxEventsIndexer(ctx);
            indexer.VisitASTContext(ctx);

            new WxEventHandlerMethodEnablerPass() { Context = driver.Context }.VisitASTContext(ctx);

            if (GeneratorKind == GeneratorKind.CPlusPlus)
                new ProcessWxEvents(indexer).VisitASTContext(ctx);
        }

        /*
        private void ParseDoxygenXml()
        {
            var sw = new Stopwatch();
            sw.Start();

            DoxygenParser.Initialize();

            var xmlPath = Path.Combine(WxPath, "docs/doxygen/out/xml");
            foreach (var filePath in Directory.EnumerateFiles(xmlPath))
            {
                var file = Path.GetFileName(filePath);
                if (!file.StartsWith("class"))
                    continue;

                var fileSw = new Stopwatch();
                fileSw.Start();

                DoxygenParser.ParseFile(filePath);

                fileSw.Stop();

                Console.WriteLine($"Parsing {Path.GetFileName(filePath)} took {fileSw.Elapsed.TotalMilliseconds:0}ms");
            }

            Console.WriteLine($"Parsing Doxygen XML took {sw.Elapsed.TotalSeconds:0}s");
        }*/

        public void Postprocess(Driver driver, ASTContext ctx)
        {
            var window = ctx.TranslationUnits.Find(u => u.FileName == "window.h");
            var method = window.FindClass("Window").FindMethod("SetSizer");

            var pen = ctx.FindCompleteClass("EvtHandler");

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
            var destClass = ctx.FindCompleteClass(dest);
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

                var existing = dest.Methods.Where(m => {
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

    class WxEventHandlerMethodEnablerPass : TranslationUnitPass
    {
        readonly DeclMap EventDeclMap = new WxEventsDeclMap();

        public override bool VisitMethodDecl(Method method)
        {
            if (method.Name == "TryBefore")
            {
                method.GenerationKind = GenerationKind.Internal;
                Context.DeclMaps.DeclMaps[method] = EventDeclMap;
            }

            return base.VisitMethodDecl(method);
        }
    }

    [DeclMap(GeneratorKind.CPlusPlus)]
    class WxEventsDeclMap : DeclMap
    {
        public override Declaration GetDeclaration()
        {
            return Context.ASTContext.FindCompleteClass("wxEvtHandler")
                .FindMethod("TryBefore");
        }

        public override void Generate(CCodeGenerator gen)
        {
            var method = Declaration as Method;
            var events = DeclarationContext.Events.Cast<WxEvent>();
            if (!events.Any())
                return;

            gen.WriteLine($"wxEventType type = {method.Parameters[0].Name}.GetEventType();");
            gen.NewLine();

            foreach (var @event in events)
            {
                gen.NewLineIfNeeded();

                gen.WriteLine($"if (type == wx{@event.WxEventTypeId})");
                gen.WriteOpenBraceAndIndent();


                gen.UnindentAndWriteCloseBrace();
                gen.NeedNewLine();
            }

            gen.NewLine();
        }
    }

    #region Type Maps
    [TypeMap("wxOrientation", GeneratorKind.CPlusPlus)]
    class WxOrientationTypeMap : TypeMap
    {
        public override AST.Type CppSignatureType(TypePrinterContext ctx)
        {
            if (ctx.Kind == TypePrinterContextKind.Native)
                return new BuiltinType(PrimitiveType.Int);

            return Type;
        }

        public override void CppMarshalToNative(MarshalContext ctx)
        {
            ctx.Return.Write($"(int){ctx.Parameter.Name}");
        }

        public override void CppMarshalToManaged(MarshalContext ctx)
        {
            var typePrinter = new CppTypePrinter(Context);
            typePrinter.PushContext(TypePrinterContextKind.Managed);
            var typeName = ctx.ReturnType.Visit(typePrinter);
            ctx.Return.Write($"({typeName}){ctx.ReturnVarName}");
        }
    }

    [TypeMap("wxFrameStyle", GeneratorKind.CPlusPlus)]
    class WxFrameStyleTypeMap : TypeMap
    {
        public override AST.Type CppSignatureType(TypePrinterContext ctx)
        {
            if (ctx.Kind == TypePrinterContextKind.Native)
                return new BuiltinType(PrimitiveType.Long);

            return Type;
        }

        public override void CppMarshalToNative(MarshalContext ctx)
        {
            ctx.Return.Write($"(long){ctx.Parameter.Name}");
        }
    }

    [TypeMap("wxString", GeneratorKind.CPlusPlus)]
    class WxStringTypeMap : TypeMap
    {
        public override AST.Type CppSignatureType(TypePrinterContext ctx)
        {
            if (ctx.Kind == TypePrinterContextKind.Native)
                return ctx.Type;

            var ptr = new PointerType(new QualifiedType(new BuiltinType(PrimitiveType.Char),
                new TypeQualifiers() { IsConst = true }));

            if (ctx.Type.IsPointer())
                ptr = new PointerType(ptr) { Modifier = PointerType.TypeModifier.Pointer };

            return ptr;
        }

        public override void CppTypeReference(CLITypeReference collector,
            ASTRecord<Declaration> record)
        {
            base.CppTypeReference(collector, record);
        }

        public override void CppMarshalToManaged(MarshalContext ctx)
        {
            var deref = (ctx.ReturnType.Type.IsPointer()) ? "->" : ".";
            ctx.Return.Write($"{ctx.ReturnVarName}{deref}c_str()");
        }

        public override void CppMarshalToNative(MarshalContext ctx)
        {
            var isPointer = ctx.Parameter.Type.IsPointer();
            if (!isPointer || ctx.Parameter.Type.IsReference())
            {
                base.CppMarshalToNative(ctx);
                return;
            }

            var isPointerToArray = ctx.Function.OriginalName == "wxDropFilesEvent";
            var wxStringType = isPointerToArray ? "wxString[]" : "wxString";

            var varName = $"{ctx.ArgName}_str";
            ctx.Before.WriteLine($"auto {varName} = new {wxStringType}({ctx.Parameter.Name});");
            ctx.Return.Write($"{varName}");
        }
    }

#endregion

#region Custom Passes

    class FlattenTemplateInstantiationBaseClass : TranslationUnitPass
    {
        readonly ClassTemplate Template;

        public FlattenTemplateInstantiationBaseClass(ClassTemplate template)
        {
            Template = template;
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (!@class.HasBaseClass)
                return false;

            BaseClassSpecifier baseSpec = null;
            ClassTemplateSpecialization templateSpec = null;
            foreach (var @base in @class.Bases)
            {
                templateSpec = @base.Class as ClassTemplateSpecialization;
                if (templateSpec == null)
                    return false;

                var template = templateSpec.TemplatedDecl;
                if (Template != template)
                    return false;

                baseSpec = @base;
            }

            if (!templateSpec.Arguments[0].Type.Type.TryGetClass(out Class specClass))
                return false;

            baseSpec.Type = new TagType(specClass);

            MoveDefinitionsFromTo(templateSpec, @class);

            return true;
        }
    }

    class WxEventsIndexer : TranslationUnitPass
    {
        public readonly Dictionary<string, Class> EventTypeToParameterMap;
        public readonly Dictionary<string, string> EventMacroToEventTypeMap;

        new readonly ASTContext ASTContext;

        public WxEventsIndexer(ASTContext astContext)
        {
            EventTypeToParameterMap = new Dictionary<string, Class>();
            EventMacroToEventTypeMap = new Dictionary<string, string>();

            ASTContext = astContext;
        }

        public override bool VisitTranslationUnit(TranslationUnit unit)
        {
            if (AlreadyVisited(unit))
                return false;

            foreach (var entity in unit.PreprocessedEntities.OfType<MacroExpansion>())
            {
                var text = entity.Text;
                if (!text.Contains("wxDECLARE_EXPORTED_EVENT"))
                    continue;

                ProcessExportedEvent(text);
            }

            var regex = new Regex(@"wx__DECLARE_EVT\d\((.*)\)");

            foreach (var entity in unit.PreprocessedEntities.OfType<MacroDefinition>())
            {
                if (!entity.Name.StartsWith("EVT_"))
                    continue;

                var match = regex.Match(entity.Expression);
                if (!match.Success)
                    continue;

                var @params = match.Groups[1].Value.Split(',').Select(p => p.Trim()).ToArray();
                ProcessEventDeclareDefine(entity, @params);
            }

            /*
            foreach (var entity in unit.PreprocessedEntities.OfType<MacroDefinition>())
            {
                if (!entity.Name.StartsWith("EVT_"))
                    continue;

                var match = regex.Match(entity.Expression);
                if (!match.Success)
                    continue;

                return true;
            }
            */

            return true;
        }

        public HashSet<string> WarningKeys = new HashSet<string>();

        private void ProcessEventDeclareDefine(MacroDefinition entity, string[] @params)
        {
            if (!@params[0].StartsWith("wxEVT_"))
                return;

            var eventType = @params[0].Substring("wx".Length);
            //if (!EventMacroToEventTypeMap.TryGetValue(eventType, out Class @event))
            //{
            //    if (WarningKeys.Add(eventType))
            //        Console.WriteLine($"Could not find event alias: {eventType}");

            //    return;
            //}

            EventMacroToEventTypeMap[entity.Name] = eventType;
        }

        private void ProcessExportedEvent(string text)
        {
            text = text.Substring(text.IndexOf("("));
            text = text.Substring(0, text.Length - 1);

            var @params = text.Split(',');
            if (@params.Length != 3)
                throw new Exception("Unexpected syntax for wxDECLARE_EXPORTED_EVENT macro");

            var eventClass = @params[2].Trim();
            var @class = ASTContext.FindCompleteClass(eventClass);
            if (@class == null && WarningKeys.Add(eventClass))
                    Console.WriteLine($"Could not find event class: {eventClass}");

            // TODO: Getting some duplicate entities, probably a parser bug.
            //if (EventsMap.ContainsKey(eventKey))
            //throw new Exception($"Found duplicate event mapping for {eventKey}");

            var eventKey = @params[1].Trim();
            if (eventKey.StartsWith("wx"))
                eventKey = eventKey.Substring("wx".Length);

            EventTypeToParameterMap[eventKey] = @class;
        }
    }

    class WxEvent : Event
    {
        public string WxEventMacroId;
        public string WxEventTypeId;
    }

    class ProcessWxEvents : TranslationUnitPass
    {
        readonly WxEventsIndexer WxEvents;

        public ProcessWxEvents(WxEventsIndexer indexer)
        {
            WxEvents = indexer;
        }

        static string GetFilePath(string path) =>
            Path.Combine(wxSharpGen.WxPath, "interface", path);

        static bool RemovePathLastDir(ref string path)
        {
            var @base = Path.GetDirectoryName(path);
            var parentDir = Directory.GetParent(@base);
            if (parentDir == null)
                return false;

            path = Path.Combine(parentDir.FullName, Path.GetFileName(path));
            return true;
        }

        string ProcessPath(string path)
        {
            return path.Replace("panelg.h", "panel.h");
        }

        bool TryFindFile(Class @class, out string path)
        {
            path = GetFilePath(@class.TranslationUnit.FileRelativePath);

            bool @continue = true;
            while (!File.Exists(path) && @continue)
                @continue = RemovePathLastDir(ref path);

            return File.Exists(path);
        }

        static string Capitalize(string str) => string.IsNullOrEmpty(str) ?
            str : char.ToUpperInvariant(str[0]) + str.Substring(1).ToLowerInvariant();

        static string CleanupEventName(string name)
        {
            if (name.StartsWith("EVT_"))
                name = name.Substring("EVT_".Length);

            var components = name.Split('_').Select(Capitalize);
            return string.Join("", components);
        }

        public override bool VisitTranslationUnit(TranslationUnit unit)
        {
            var name = unit.FileRelativePath;

            if (name == "wx/object.h")
                return false;

            if (name == "wx/peninfobase.h")
                return false;

            return base.VisitTranslationUnit(unit);
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (!VisitDeclaration(@class))
                return false;

            if (@class.IsIncomplete)
                return false;

            string file;
            if (!TryFindFile(@class, out file))
                throw new Exception($"Could not find interface header file for {@class.OriginalName}");

            var contents = File.ReadAllText(file);

            // Consider /\*\*.+?\*/ as regex, proposed by Dimitar.
            // The one below might fail on Windows due to \r.
            var regex = new Regex(@"(\/\*\*)(.|\n)+?(\*\/)");
            var matches = regex.Matches(contents);

            foreach (var match in matches)
            {
                var text = match.ToString();
                var classNameRegex = new Regex(@"@class *(\w+)");
                var m = classNameRegex.Match(text);
                if (m == null) continue;

                var className = m.Groups[1].Value;
                if (className != @class.OriginalName)
                    continue;

                if (text.Contains("@beginEventEmissionTable") && text.Contains("@beginEventTable"))
                    throw new NotImplementedException();

                if (!text.Contains("@beginEventEmissionTable"))
                    continue;

                var eventRegex = new Regex(@"@event{(.*)}");
                var events = eventRegex.Matches(text);
                if (events == null)
                    return false;

                foreach (Match eventMatch in events)
                {
                    var signature = eventMatch.Groups[1].Value;

                    var startIndex = signature.IndexOf("(");
                    var @params = signature.Substring(startIndex + 1);
                    @params = @params.Substring(0, @params.Length - 1);

                    var paramNames = @params.Split(',');
                    var eventNameOrPattern = signature.Substring(0, startIndex);

                    var eventNames = WxEvents.EventMacroToEventTypeMap.Keys.Where(k => k.Match(eventNameOrPattern));
                    foreach (var eventName in eventNames)
                    {
                        var name = CleanupEventName(eventName);

                        // If we already processed this event, then skip it.
                        // This can happen due to wildcard event matches:
                        //  @event{EVT_MOUSE_CAPTURE_CHANGED(func)}
                        //  @event{EVT_MOUSE_*(func)}
                        if (@class.Events.Any(e => e.Name == name))
                            continue;

                        var eventTypeId = WxEvents.EventMacroToEventTypeMap[eventName];

                        Class eventClass;
                        if (!WxEvents.EventTypeToParameterMap.TryGetValue(eventTypeId, out eventClass))
                        {
                            Console.WriteLine($"Could not find event parameter for {@class.OriginalName}::{eventName}");
                            continue;
                        }

                        if (eventClass.Ignore)
                            continue;

                        /*
                        if (eventName.StartsWith("EVT_"))
                            eventName = eventName.Substring("EVT_".Length);

                        CaseRenamePass.ConvertCaseString(@event, RenameCasePattern.UpperCamelCase);
                        */

                        var ptrType = new PointerType(new QualifiedType(new TagType(eventClass)))
                        {
                            Modifier = PointerType.TypeModifier.LVReference
                        };

                        var functionType = new FunctionType()
                        {
                            ReturnType = new QualifiedType(new BuiltinType(PrimitiveType.Void))
                        };

                        functionType.Parameters.Add(new Parameter()
                        {
                            Name = "event",
                            QualifiedType = new QualifiedType(ptrType),
                        });

                        string eventId;
                        if (!WxEvents.EventMacroToEventTypeMap.TryGetValue(eventName, out eventId))
                            throw new Exception($"Cannot find wx event macro {eventName}");

                        var @event = new WxEvent()
                        {
                            Name = $"On{name}",
                            Namespace = @class,
                            QualifiedType = new QualifiedType(functionType),
                            WxEventMacroId = eventName,
                            WxEventTypeId = eventId
                        };

                        @class.Declarations.Add(@event);
                    }
                }

                if (!@class.Events.Any())
                    return true;

                // Override `virtual bool wxEvtHandler::TryBefore()` for custom event handling.
                //AddTryBefore(@class);
            }

            return true;
        }

        private void AddTryBefore(Class @class)
        {
            var tryBeforeMethod = @class.FindHierarchy<Method>(c => c.Methods.FindAll(me => me.Name == "TryBefore"))
                .FirstOrDefault();

            if (tryBeforeMethod == null)
                throw new Exception($"Expected to find `virtual bool wxEvtHandler::TryBefore()` for class {@class.Name}");

            var @override = new Method(tryBeforeMethod)
            {
                Access = AccessSpecifier.Protected,
                IsOverride = true,
                Namespace = @class
            };

            @override.GenerationKind = GenerationKind.Generate;

            @class.Methods.Add(@override);
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

        public override bool VisitMethodDecl(Method method)
        {
            if (!VisitDeclaration(method))
                return false;

            if (!method.IsGenerated)
                return false;

            if (!method.IsOverride || method.IsDestructor)
                return false;

            var @class = method.Namespace as Class;
            var baseClass = GetBaseClassForOverridenMethod(method);
            if (!baseClass.IsGenerated || !HasGeneratedBaseClass(@class, baseClass))
                method.IsOverride = false;

            return true;
        }
    }

    public static class StringExtensions
    {
        /// <summary>
        /// Compares the string against a given pattern.
        /// </summary>
        /// <param name="str">The string.</param>
        /// <param name="pattern">The pattern to match, where "*" means any sequence of characters, and "?" means any single character.</param>
        /// <returns><c>true</c> if the string matches the given pattern; otherwise <c>false</c>.</returns>
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
