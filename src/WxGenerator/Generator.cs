using System;
using System.Collections.Generic;
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
using static CppSharp.Program;

namespace CppSharp
{
    static class Program
    {
        public static string WxPath => Path.Combine(GetExamplesDirectory("Ozone"), "deps", "wxWidgets");

        public static void Main(string[] args)
        {
            const TargetPlatform targetPlatform = TargetPlatform.Linux;
            ConsoleDriver.Run(new LowLevelGen(GeneratorKind.CPlusPlus, targetPlatform));
            ConsoleDriver.Run(new HighLevelGen(GeneratorKind.QuickJS, targetPlatform));
            //ConsoleDriver.Run(new HighLevelGen(GeneratorKind.CSharp, targetPlatform));
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

        public static void SetupWx(Driver driver, Module module, TargetPlatform targetPlatform)
        {
            // TODO: Replace this with wx-config invocations.

            var wxIncludePath = Path.Combine(WxPath, "include");
            module.IncludeDirs.Add(wxIncludePath);

            var wxBuildPath = Path.Combine(WxPath, "../../build/wxwidgets");
            var wxBuildIncludePath = Path.Combine(wxBuildPath, "lib/wx/include");
            var wxBuildVariantDirName = Directory.EnumerateDirectories(wxBuildIncludePath).FirstOrDefault();

            var wxBuildVariantPath = Path.Combine(wxBuildIncludePath, wxBuildVariantDirName);
            if (!Directory.Exists(wxBuildVariantPath))
                throw new Exception("Expected wxWidgets build variant: " + wxBuildVariantPath);

            module.IncludeDirs.Add(wxBuildVariantPath);

            module.Defines.Add("WXUSINGDLL");
            module.Defines.Add("wxUSE_GUI=1");

            var parserOptions = driver.ParserOptions;

            if (targetPlatform == TargetPlatform.MacOS)
            {
                parserOptions.TargetTriple = "i686-apple-darwin";

                module.Defines.Add("__WXMAC__");
                module.Defines.Add("__WXOSX__");
                module.Defines.Add("__WXOSX_COCOA__");
                module.Defines.Add("HAVE_SSIZE_T");
                module.Defines.Add("_FILE_OFFSET_BITS=64");
            }
            else if (targetPlatform == TargetPlatform.Linux)
            {
                parserOptions.TargetTriple = "x86_64-pc-linux-gnu";

                module.Defines.Add("__WXGTK3__");
                module.Defines.Add("__WXGTK__");
            }

            parserOptions.AddIncludeDirs(wxIncludePath);
        }
    }

    class LowLevelGen : ILibrary
    {
        public GeneratorKind GeneratorKind;

        public TargetPlatform TargetPlatform;

        public WxEventsIndexer WxEventsIndexer;

        public LowLevelGen(GeneratorKind kind, TargetPlatform platform)
        {
            GeneratorKind = kind;
            TargetPlatform = platform;
        }

        public void Setup(Driver driver)
        {
            var options = driver.Options;

            options.GenerateName = GenerateName;

            var module = options.AddModule("Ozone");
            module.LibraryName = "Ozone";

            var headers = new string[]
            {
                "wx/app.h",
                "wx/window.h",
                "wx/nonownedwnd.h",
                "wx/toplevel.h",
                "wx/frame.h",
                "wx/event.h",
                "wx/eventfilter.h",
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

            SetupWx(driver, module, TargetPlatform);

            var parserOptions = driver.ParserOptions;
            parserOptions.UnityBuild = true;
            //parserOptions.SkipLayoutInfo = true;

            options.OutputDir = Path.Combine(GetExamplesDirectory("Ozone/gen"),
                "wx", GeneratorKind.ToString().ToLowerInvariant(), parserOptions.TargetTriple);
            options.GenerateDeprecatedDeclarations = false;
            options.GenerationOutputMode = GenerationOutputMode.FilePerUnit;
            options.CompileCode = false;
            options.GenerateClassTemplates = true;
            options.GeneratorKind = GeneratorKind;
            options.UseHeaderDirectories = true;
            //options.DryRun = true;
            //options.Verbose = true;
        }

        private string GenerateName(TranslationUnit arg)
        {
            var fileRelativePath = arg.FileRelativeDirectory;
            var elements = fileRelativePath.Split('/');
            elements[0] = "ozone";

            var path = Path.Combine(string.Join('/', elements), arg.FileNameWithoutExtension);
            return path;
        }

        public void SetupPasses(Driver driver)
        {
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
            var passBuilder = driver.Context.TranslationUnitPasses;
            var options = driver.Options;

            ctx.IgnoreTranslationUnits();

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "defs.h" });
            passBuilder.RemovePrefix("wxALIGN_");
            passBuilder.RemovePrefix("wxBORDER_");
            passBuilder.RemovePrefix("wxBG_STYLE_");
            passBuilder.RemovePrefix("wxKEY_");
            passBuilder.RemovePrefix("wxID_");
            passBuilder.RemovePrefix("wxITEM_");
            passBuilder.RemovePrefix("wxCHK_");
            passBuilder.RemovePrefix("wxHT_");
            passBuilder.RemovePrefix("wxHATCHSTYLE_");
            ctx.FindCompleteEnum("wxDeprecatedGUIConstants").ExplicitlyIgnore();
            passBuilder.RemovePrefix("wxTOOL_");
            passBuilder.RemovePrefix("wxDF_");
            passBuilder.RemovePrefix("WXK_");
            passBuilder.RemovePrefix("wxMOD_");
            ctx.FindCompleteEnum("wxPaperSize").ExplicitlyIgnore();
            //passBuilder.RemovePrefix("wxPAPER_");
            ctx.FindCompleteEnum("wxPrintOrientation").ExplicitlyIgnore();
            ctx.FindCompleteEnum("wxDuplexMode").ExplicitlyIgnore();
            //passBuilder.RemovePrefix("wxDUPLEX_");
            ctx.FindCompleteEnum("wxPrintMode").ExplicitlyIgnore();
            //passBuilder.RemovePrefix("wxPRINT_MODE_");
            ctx.FindCompleteEnum("wxUpdateUI").ExplicitlyIgnore();
            //passBuilder.RemovePrefix("wxUPDATE_UI_");
            ctx.IgnoreEnumWithMatchingItem("wxPRIORITY_MIN");
            //passBuilder.RemovePrefix("wxPRIORITY_");

            ctx.FindFunction("wxPtrToUInt").First().ExplicitlyIgnore();
            ctx.FindFunction("wxUIntToPtr").First().ExplicitlyIgnore();

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

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "object.h" });

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "window.h" });

            var wxWindow = ctx.FindCompleteClass("wxWindow");

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/window.h", "wx/window.h");

            if (TargetPlatform == TargetPlatform.Linux)
            {
                MoveTranslationUnitFromTo(ctx, "wx/gtk/window.h", "wx/window.h");

                wxWindow.Fields.Find(f => f.Name == "m_scrollBar").ExplicitlyIgnore();
                wxWindow.Fields.Find(f => f.Name == "m_scrollPos").ExplicitlyIgnore();

                ctx.FindCompleteClass("wxArrayGdkWindows").ExplicitlyIgnore();
            }

            wxWindow.FindMethod("OnIdle")?.ExplicitlyIgnore();

            MoveDefinitionsFromTo(ctx, "wxWindowBase", "wxWindow");

            wxWindow.FindMethod("OnSysColourChanged").ExplicitlyIgnore();
            wxWindow.FindMethod("OnHelp").ExplicitlyIgnore();

            var nagivationKind = ctx.FindCompleteClass("wxWindow").FindEnum("NavigationKind");
            RenamePassExtensions.RemovePrefix("Navigation_", nagivationKind);

            ctx.FindCompleteClass("wxWindow").FindClass("ChildrenRepositioningGuard")
                .ExplicitlyIgnore();

            passBuilder.RemovePrefix("wxWINDOW_VARIANT_");
            passBuilder.RemovePrefix("wxSHOW_EFFECT_");

            var touchMode = ctx.GetEnumWithMatchingItem("wxTOUCH_NONE");
            touchMode.Name = "wxTouchMode";
            touchMode.SetFlags();
            passBuilder.RemovePrefix("wxTOUCH_");

            var sendEventFlags = ctx.GetEnumWithMatchingItem("wxSEND_EVENT_POST");
            sendEventFlags.Name = "wxSendEventFlags";
            sendEventFlags.SetFlags();
            RenamePassExtensions.RemovePrefix("wxSEND_EVENT_", sendEventFlags);

            ctx.FindCompleteClass("wxWindowBase").FindMethod("IsTransparentBackgroundSupported")
                .Parameters[0].Usage = ParameterUsage.Out;

            passBuilder.RemovePrefix("ScrollDir_");

            // TODO: Remove wxWindow::LayoutPhase1/2

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "nonownedwnd.h" });

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/nonownedwnd.h", "wx/nonownedwnd.h");

            if (TargetPlatform == TargetPlatform.Linux)
                MoveTranslationUnitFromTo(ctx, "wx/gtk/nonownedwnd.h", "wx/nonownedwnd.h");     

            MoveDefinitionsFromTo(ctx, "wxNonOwnedWindowBase", "wxNonOwnedWindow");

            // TODO: Fix bug with public overriding protected base virtual method.
            ctx.IgnoreClassMethodWithName("wxNonOwnedWindowBase", "AdjustForParentClientOrigin");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "app.h" });
            ctx.IgnoreClassWithName("wxAppInitializer");
            MoveTranslationUnitFromTo(ctx, "wx/unix/app.h", "wx/app.h");

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/app.h", "wx/app.h");

            if (TargetPlatform == TargetPlatform.Linux)
                MoveTranslationUnitFromTo(ctx, "wx/gtk/app.h", "wx/app.h");     

            MoveDefinitionsFromTo(ctx, "wxAppConsoleBase", "wxAppConsole");
            MoveDefinitionsFromTo(ctx, "wxAppBase", "wxApp");
            ctx.IgnoreEnumWithMatchingItem("wxPRINT_WINDOWS");

            // TODO: Implement proper generation of function pointer proxies
            var appConsole = ctx.FindCompleteClass("wxAppConsole");
            appConsole.FindMethod("GetInitializerFunction").ExplicitlyIgnore();
            appConsole.FindMethod("SetInitializerFunction").ExplicitlyIgnore();

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "frame.h" });

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/frame.h", "wx/frame.h");
            
            if (TargetPlatform == TargetPlatform.Linux)
                MoveTranslationUnitFromTo(ctx, "wx/gtk/frame.h", "wx/frame.h");

            MoveDefinitionsFromTo(ctx, "wxFrameBase", "wxFrame");

            var wxFrame = ctx.FindCompleteClass("wxFrame");
            wxFrame.FindMethod("OnMenuOpen")?.ExplicitlyIgnore();
            wxFrame.FindMethod("OnMenuClose")?.ExplicitlyIgnore();
            wxFrame.FindMethod("OnMenuHighlight")?.ExplicitlyIgnore();

            //passBuilder.RemovePrefix("wxFRAME_");

            // TODO: Remove wxApp::GetXVisualInfo

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "toplevel.h" });

            var topLevelGTK = ctx.FindCompleteClass("wxTopLevelWindowGTK");
            if (topLevelGTK != null)
            {
                var decorSize = topLevelGTK.FindClass("DecorSize");
                decorSize.ExplicitlyIgnore();
            }

            if (TargetPlatform == TargetPlatform.MacOS)
            {
                MoveTranslationUnitFromTo(ctx, "wx/osx/toplevel.h", "wx/toplevel.h");
                MoveDefinitionsFromTo(ctx, "wxTopLevelWindowBase", "wxTopLevelWindowMac");
                MoveDefinitionsFromTo(ctx, "wxTopLevelWindowMac", "wxTopLevelWindow");
            }

            if (TargetPlatform == TargetPlatform.Linux)
            {
                MoveTranslationUnitFromTo(ctx, "wx/gtk/toplevel.h", "wx/toplevel.h");
                MoveDefinitionsFromTo(ctx, "wxTopLevelWindowBase", "wxTopLevelWindowGTK");
                MoveDefinitionsFromTo(ctx, "wxTopLevelWindowGTK", "wxTopLevelWindow");
            }

            // Undefined symbols "wxTopLevelWindow::wxCreateObject()"
            ctx.IgnoreClassMethodWithName("wxTopLevelWindow", "wxCreateObject");
            ctx.IgnoreClassMethodWithName("wxTopLevelWindow", "OnCloseWindow");
            ctx.IgnoreClassMethodWithName("wxTopLevelWindow", "OnSize");

            var geometrySerializer = ctx.FindCompleteClass("wxTopLevelWindow").FindClass("GeometrySerializer");
            geometrySerializer?.ExplicitlyIgnore();

            // TODO: Fix parameters in wxTopLevelWindowBase::ShowFullScreen.
            var fullscreenMode = ctx.GetEnumWithMatchingItem("wxFULLSCREEN_NOMENUBAR");
            fullscreenMode.Name = "wxFullscreenMode";
            fullscreenMode.SetFlags();
            passBuilder.RemovePrefix("wxFULLSCREEN_");

            // TODO: Fix parameters in wxTopLevelWindowBase::RequestUserAttention.
            var userAttention = ctx.GetEnumWithMatchingItem("wxUSER_ATTENTION_INFO");
            userAttention.Name = "wxUserAttention";
            passBuilder.RemovePrefix("wxUSER_ATTENTION_");

            // TODO: Remove GetRectForTopLevelChildren()

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "gdicmn.h" });

            passBuilder.RemovePrefix("wxBITMAP_TYPE_");
            passBuilder.RemovePrefix("wxCURSOR_");
            passBuilder.RemovePrefix("wxELLIPSIZE_FLAGS_");
            passBuilder.RemovePrefix("wxELLIPSIZE_");

            ctx.IgnoreClassWithName("wxStringToColourHashMap_wxImplementation_Pair");
            ctx.IgnoreClassWithName("wxStringToColourHashMap_wxImplementation_KeyEx");
            ctx.IgnoreClassWithName("wxStringToColourHashMap_wxImplementation_HashTable");
            ctx.IgnoreClassWithName("wxStringToColourHashMap");
            ctx.IgnoreClassWithName("StringToColourHashMap_wxImplementation_KeyEx");
            ctx.IgnoreClassWithName("StringToColourHashMap_wxImplementation_KeyEx");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "graphics.h" });

            passBuilder.RemovePrefix("wxANTIALIAS_");
            passBuilder.RemovePrefix("wxCOMPOSITION_");
            passBuilder.RemovePrefix("wxINTERPOLATION_");
            passBuilder.RemovePrefix("wxGRADIENT_");

            // ----------------------------------------------------------------
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
            ctx.IgnoreClassWithName("wxDynamicEventTableEntry");
            ctx.IgnoreClassWithName("wxEventTable");
            ctx.IgnoreClassWithName("wxEventTableEntryBase");
            ctx.IgnoreClassWithName("wxEventTableEntry");
            ctx.IgnoreClassWithName("wxEventTableEntryPointerArray");
            ctx.IgnoreClassWithName("wxEventHashTable");
            ctx.IgnoreClassWithName("wxEvtHandlerArray");
            ctx.IgnoreClassWithName("wxEventConnectionRef");
            ctx.IgnoreClassWithName("wxEventBlocker");

            passBuilder.RemovePrefix("wxEVT_CATEGORY_");
            passBuilder.RemovePrefix("wxUPDATE_UI_");
            passBuilder.RemovePrefix("wxMOUSE_WHEEL_");
            passBuilder.RemovePrefix("wxIDLE_");
            passBuilder.RemovePrefix("wxJOY_");
            passBuilder.RemovePrefix("wxEVENT_PROPAGATE_");
            passBuilder.RemovePrefix("wxCATEGORY_");
            passBuilder.RemovePrefix("Reason_");
            passBuilder.RemovePrefix("Origin_");

            ctx.FindCompleteClass("wxHelpEvent").FindEnum("Origin").Name = "Source";
            ctx.FindCompleteClass("wxDropFilesEvent").ExplicitlyIgnore();

            driver.AddGeneratorOutputPass(new WxEventsOutputPass(driver.Context));

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "sizer.h" });

            passBuilder.RemovePrefix("wxFLEX_GROWMODE_");
            ctx.IgnoreClassWithName("wxwxSizerItemListNode");

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

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "dc.h", "dcclient.h" });
            passBuilder.RemovePrefix("MM_");
            passBuilder.RemovePrefix("FLOOD_");

            ctx.IgnoreClassWithName("wxDCTextColourChanger");
            ctx.IgnoreClassWithName("wxDCTextBgColourChanger");
            ctx.IgnoreClassWithName("wxDCTextBgModeChanger");
            ctx.IgnoreClassWithName("wxDCPenChanger");
            ctx.IgnoreClassWithName("wxDCBrushChanger");
            ctx.IgnoreClassWithName("wxDCClipper");
            ctx.IgnoreClassWithName("wxDCFontChanger");

            ctx.IgnoreClassWithName("wxDCImpl");
            ctx.IgnoreClassWithName("wxDCFactory");
            ctx.IgnoreClassWithName("wxNativeDCFactory");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "panel.h", "panelg.h", "msw/panel.h" });
            MoveTranslationUnitFromTo(ctx, "wx/generic/panelg.h", "wx/panel.h");
            //MoveTranslationUnitFromTo(ctx, "wx/msw/panel.h", "wx/panel.h");
            MoveDefinitionsFromTo(ctx, "wxPanelBase", "wxPanel");

            var orientation = ctx.GenerateEnumFromMacros("wxFrameFlags", new string[]
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

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "containr.h" });
            MoveDefinitionsFromTo(ctx, "wxControlContainerBase", "wxControlContainer");
            ctx.IgnoreFunctionWithName("wxSetFocusToChild");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "brush.h" });

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/brush.h", "wx/brush.h");

            if (TargetPlatform == TargetPlatform.Linux)
                MoveTranslationUnitFromTo(ctx, "wx/gtk/brush.h", "wx/brush.h");

            MoveDefinitionsFromTo(ctx, "wxBrushBase", "wxBrush");
            passBuilder.RemovePrefix("wxBRUSHSTYLE_");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "pen.h", "peninfobase.h" });

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/pen.h", "wx/pen.h");

            if (TargetPlatform == TargetPlatform.Linux)
                MoveTranslationUnitFromTo(ctx, "wx/gtk/pen.h", "wx/pen.h");

            MoveDefinitionsFromTo(ctx, "wxPenBase", "wxPen");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "peninfobase.h" });
            MoveTranslationUnitFromTo(ctx, "wx/peninfobase.h", "wx/pen.h");

            var penInfo = ctx.FindCompleteClass("wxPenInfo");
            MoveDefinitionsFromTo(penInfo.BaseClass, penInfo);

            var graphicsPenInfo = ctx.FindCompleteClass("wxGraphicsPenInfo");
            MoveDefinitionsFromTo(graphicsPenInfo.BaseClass, graphicsPenInfo);

            passBuilder.RemovePrefix("wxPENSTYLE_");
            passBuilder.RemovePrefix("wxJOIN_");
            passBuilder.RemovePrefix("wxCAP_");

            // ----------------------------------------------------------------
            ctx.GenerateTranslationUnits(new[] { "colour.h" });

            if (TargetPlatform == TargetPlatform.MacOS)
                MoveTranslationUnitFromTo(ctx, "wx/osx/core/colour.h", "wx/colour.h");

            if (TargetPlatform == TargetPlatform.Linux)
                MoveTranslationUnitFromTo(ctx, "wx/gtk/colour.h", "wx/colour.h");

            var c2s = ctx.FindCompleteEnum("wxC2S");

            MoveDefinitionsFromTo(ctx, "wxColourBase", "wxColour");

            var colorClass = ctx.FindCompleteClass("wxColour");
            colorClass.Name = "wxColor";

            // Workaround bug in ParameterTypeComparer and CheckDuplicatedNamesPass
            // Remove once https://github.com/mono/CppSharp/issues/1367 is fixed.
            colorClass.Constructors.FirstOrDefault(c => c.Parameters.Any(
                p => p.Name == "colourName" && p.Type.IsPointer())).ExplicitlyIgnore();

            // ----------------------------------------------------------------

            bool processProperties = false;
            if (!processProperties)
            {
                passBuilder.Passes.Remove(
                    driver.Context.TranslationUnitPasses.Passes.Find(
                    p => p.GetType() == typeof(GetterSetterToPropertyPass)));
            }

            passBuilder.Passes.Remove(
                driver.Context.TranslationUnitPasses.Passes.Find(
                    p => p.GetType() == typeof(ConstructorToConversionOperatorPass)));

            passBuilder.RemovePrefix("wx");

            new RemoveDeclarations().VisitASTContext(ctx);
            new RemovePlatformSpecificMembers().VisitASTContext(ctx);

            var panelBase = ctx.FindCompleteClass("wxPanelBase");
            var navigationEnabled = (panelBase.BaseClass as ClassTemplateSpecialization).TemplatedDecl;
            new FlattenTemplateInstantiationBaseClass(navigationEnabled).VisitASTContext(ctx);

            new FixMethodOverrides().VisitASTContext(ctx);
            new IgnoreMethodWithReferences().VisitASTContext(ctx);
            new FixEnumsScope().VisitASTContext(ctx);

            WxEventsIndexer = new WxEventsIndexer(ctx);
            WxEventsIndexer.VisitASTContext(ctx);

            new WxEventHandlerMethodEnablerPass() { Context = driver.Context }.VisitASTContext(ctx);

            if (GeneratorKind == GeneratorKind.C ||
                GeneratorKind == GeneratorKind.CPlusPlus)
            {
                new ProcessWxEvents(WxEventsIndexer, driver.Context).VisitASTContext(ctx);
            }
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

        public void GenerateCode(Driver driver, List<GeneratorOutput> outputs)
        {
            var handlersUnit = new TranslationUnit("wx/eventhandlers.h");

            var eventHandlers = new Class
            {
                Name = "EventHandlers",
                Namespace = handlersUnit
            };

            var evtHandler = driver.Context.ASTContext.FindCompleteClass("EvtHandler");

            eventHandlers.Bases.Add(new BaseClassSpecifier
            {
                Access = AccessSpecifier.Public,
                Type = new TagType(evtHandler),
            });

            var tryBefore = evtHandler.FindMethod("TryBefore");
            eventHandlers.Methods.Add(new Method(tryBefore)
            {
                IsOverride = true
            });

            handlersUnit.Declarations.Add(eventHandlers);

            var eventsOutput = new GeneratorOutput
            {
                TranslationUnit = handlersUnit,
                Outputs = new List<CodeGenerator>()
            };

            eventsOutput.Outputs.Add(new WxEventsHandlerGeneratorHeaders(driver.Context,
                handlersUnit, WxEventsIndexer));

            eventsOutput.Outputs.Add(new WxEventsHandlerGeneratorSources(driver.Context,
                handlersUnit, WxEventsIndexer));

            outputs.Add(eventsOutput);
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

    #region Events

    class WxEventsHandlerGeneratorHeaders : CppHeaders
    {
        readonly WxEventsIndexer Events;

        public WxEventsHandlerGeneratorHeaders(BindingContext context, TranslationUnit unit,
            WxEventsIndexer events) :
            base(context, new TranslationUnit[] { unit })
        {
            Events = events;
            Process();
        }

        public override void GenerateIncludes()
        {
            WriteLine("#include <wx/eventfilter.h>");

            var units = new HashSet<TranslationUnit>();
            foreach (var @event in Events.Events)
                units.Add(@event.Class.TranslationUnit);

            foreach (var unit in units)
            {
                var path = unit.FileRelativePath;
                WriteInclude(path, CInclude.IncludeKind.Quoted);
            }
        }

        public override void GenerateForwardRefs()
        {

        }

        public override void GenerateMain()
        {
            var @class = Context.ASTContext.FindCompleteClass("EventFilter");
            var overridesClassGen = new OverridesClassGenerator(Context,
                OverridesClassGenerator.GenerationMode.Declaration,
                method => method.OriginalName == "FilterEvent");
            overridesClassGen.VisitClassDecl(@class);
            overridesClassGen.NewLine();
            Write(overridesClassGen.Generate());
        }
    }

    class WxEventsHandlerGeneratorSources : CppSources
    {
        readonly Class EvtHandlerClass;
        readonly WxEventsIndexer Events;

        public WxEventsHandlerGeneratorSources(BindingContext context, TranslationUnit unit,
            WxEventsIndexer events) :
            base(context, new TranslationUnit[] { unit })
        {
            Events = events;
            EvtHandlerClass = Context.ASTContext.FindCompleteClass("EvtHandler");
            Process();
        }

        public override void GenerateForwardReferenceHeaders()
        {
            GenerateForwardReferenceHeaders(EvtHandlerClass.TranslationUnit);
            NewLine();
        }

        public override void GenerateMain()
        {
            WriteLine("int _EventFilter::FilterEvent(::wxEvent& event)");
            WriteOpenBraceAndIndent();

            WriteLine("wxEventType eventType = event.GetEventType();");
            WriteLine("wxEvtHandler* eventObject = wxStaticCast(event.GetEventObject(), wxEvtHandler);");

            WriteLine("Ozone::EvtHandler* evtHandler = static_cast<Ozone::EvtHandler*>(eventObject->GetClientData());");
            WriteLine("if (evtHandler)");
            WriteLineIndent("evtHandler->HandleEvent(event);");

            NewLine();

            WriteLine($"return Event_Skip;");

            UnindentAndWriteCloseBrace();
        }
    }

    class WxEventHandlerMethodEnablerPass : TranslationUnitPass
    {
        public override bool VisitMethodDecl(Method method)
        {
            if (method.Name == "FilterEvent")
            {
                method.GenerationKind = GenerationKind.Internal;
            }

            return base.VisitMethodDecl(method);
        }
    }

    class WxEventsOutputPass : GeneratorOutputPass
    {
        readonly BindingContext Context;

        public WxEventsOutputPass(BindingContext context)
        {
            Context = context;
        }

        public override void VisitCodeGenerator(CodeGenerator generator)
        {
            if (!(generator is CppSources))
                return;

            base.VisitCodeGenerator(generator);
        }

        public static bool HasEvents(Class @class) => @class.Events.Cast<WxEvent>().Any();

        public override void VisitConstructorBody(Block block)
        {
            var @class = block.Object as Class;
            if (!@class.HasClassInHierarchy("EvtHandler"))
                return;

            block.NewLine();

            block.WriteLine($"auto __instance = ({@class.OriginalName}*) __Instance;");
            block.WriteLine($"if (__instance && __instance->GetClientData() == nullptr)");
            block.WriteLineIndent($"__instance->SetClientData(this);");
        }

        public override void VisitIncludes(Block block)
        {
            block.WriteLine("#include <wx/eventfilter.h>");
            block.NewLine();
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
            {
                gen.WriteLine("return wxEventFilter::Event_Skip;");
                return;
            }

            gen.WriteLine($"wxEventType eventType = event.GetEventType();");
            gen.NewLine();

            foreach (var @event in events)
            {
                var condition = gen.NeedsNewLine ? "else if" : "if";
                gen.WriteLine($"{condition}(eventType == wx{@event.WxEventTypeId})");
                gen.WriteOpenBraceAndIndent();

                //gen.WriteLine($"printf(\"{@event.WxEventMacroId}\\n\");");
                gen.WriteLine($"if (!{@event.Name}.empty())");
                gen.WriteOpenBraceAndIndent();

                var eventClass = @event.EventClass;
                gen.WriteLine($"{eventClass.OriginalName}* _event = wxStaticCast(&event, {eventClass.OriginalName});");
                gen.WriteLine($"Ozone::{eventClass.Name} _e(_event);");
                gen.WriteLine($"{@event.Name}(_e);");

                gen.UnindentAndWriteCloseBrace();

                gen.UnindentAndWriteCloseBrace();
                gen.NeedNewLine();
            }

            gen.NewLine();

            var @class = DeclarationContext as Class;

            if (@class.BaseClass != null && @class.BaseClass.Name != "Object")
                gen.WriteLine($"return {@class.BaseClass.Name}::HandleEvent(event);");
            else
                gen.WriteLine("return wxEventFilter::Event_Skip;");
        }

        public void GenerateEvents()
        {
            /*
            foreach (var @event in Events.Events)
            {
                var condition = NeedsNewLine ? "else if" : "if";
                WriteLine($"{condition}(eventType == wx{@event.WxEventTypeId})");
                WriteOpenBraceAndIndent();

                WriteLine($"printf(\"{@event.WxEventMacroId}\\n\");");
                var eventClass = @event.EventClass;
                WriteLine($"wxSharp::{@event.Class.Name}* _object = static_cast<wxSharp::{@event.Class.Name}*>(eventObject->GetClientData());");
                WriteLine($"if (!_object->{@event.Name}.empty())");
                WriteOpenBraceAndIndent();
                WriteLine($"{eventClass.OriginalName}* _event = wxStaticCast(&event, {eventClass.OriginalName});");
                WriteLine($"wxSharp::{eventClass.Name} _e(_event);");
                WriteLine($"_object->{@event.Name}(_e);");
                UnindentAndWriteCloseBrace();

                UnindentAndWriteCloseBrace();
                NeedNewLine();
            }*/
        }
    }

    class WxEventsIndexer : TranslationUnitPass
    {
        public readonly Dictionary<string, Class> EventTypeToParameterMap;
        public readonly Dictionary<string, string> EventMacroToEventTypeMap;
        public readonly List<WxEvent> Events;

        new readonly ASTContext ASTContext;

        public WxEventsIndexer(ASTContext astContext)
        {
            EventTypeToParameterMap = new Dictionary<string, Class>();
            EventMacroToEventTypeMap = new Dictionary<string, string>();
            Events = new List<WxEvent>();

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
        public Class EventClass;
        public Class Class => Namespace as Class;
    }

    class ProcessWxEvents : TranslationUnitPass
    {
        readonly WxEventsIndexer WxEvents;

        public ProcessWxEvents(WxEventsIndexer indexer, BindingContext context)
        {
            WxEvents = indexer;
            Context = context;
            CreateHandleEventMethod();
        }

        static string GetFilePath(string path) => Path.Combine(WxPath, "interface", path);

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
            path = path.Replace("panelg.h", "panel.h");
            path = path.Replace("paletteg.h", "palette.h");

            return path;
        }

        bool TryFindFile(Class @class, out string path)
        {
            path = GetFilePath(@class.TranslationUnit.FileRelativePath);
            path = ProcessPath(path);

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
                if (m == null)
                    continue;

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

                        if (!WxEvents.EventMacroToEventTypeMap.TryGetValue(eventName, out string eventId))
                            throw new Exception($"Cannot find wx event macro {eventName}");

                        var @event = new WxEvent()
                        {
                            Name = $"On{name}",
                            Namespace = @class,
                            QualifiedType = new QualifiedType(functionType),
                            WxEventMacroId = eventName,
                            WxEventTypeId = eventId,
                            EventClass = eventClass
                        };

                        if (@class.Events.FirstOrDefault(decl => decl.Name == @event.Name) != null)
                            continue;

                        @class.Declarations.Add(@event);

                        WxEvents.Events.Add(@event);
                    }
                }

                if (!@class.Events.Any())
                    return true;

                // Override `virtual bool EvtHandler::HandleEvent()` for custom event handling.
                AddHandleEvent(@class);
            }

            return true;
        }

        Method HandleEvent;
        readonly DeclMap EventDeclMap = new WxEventsDeclMap();

        private void CreateHandleEventMethod()
        {
            var evtHandler = Context.ASTContext.FindCompleteClass("wxEvtHandler");

            HandleEvent = new Method
            {
                Name = "HandleEvent",
                Access = AccessSpecifier.Public,
                IsVirtual = true,
                Namespace = evtHandler,
                GenerationKind = GenerationKind.Generate,
                ReturnType = new QualifiedType(new BuiltinType(PrimitiveType.Int)),
                DeclMap = EventDeclMap
            };

            var paramType = evtHandler.FindMethod("TryBefore").Parameters[0].QualifiedType;
            paramType.Qualifiers.Mode = TypeQualifiersMode.Native;

            var @param = new Parameter
            {
                Name = "event",
                Namespace = HandleEvent,
                QualifiedType = paramType,
            };

            HandleEvent.Parameters.Add(@param);

            evtHandler.Methods.Add(HandleEvent);
        }

        private void AddHandleEvent(Class @class)
        {
            if (HandleEvent == null)
                throw new Exception($"Expected to find `virtual int EvtHandler::HandleEvent()` for class {@class.Name}");

            var @override = new Method(HandleEvent)
            {
                Access = AccessSpecifier.Public,
                IsOverride = true,
                IsPure = false,
                Namespace = @class,
                DeclMap = EventDeclMap
            };

            @class.Methods.Add(@override);
        }
    }

    #endregion

    #region Type Maps

    [TypeMap("wxOrientation", GeneratorKind.CPlusPlus)]
    [TypeMap("wxOrientation", GeneratorKind.NAPI)]
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
    [TypeMap("wxFrameStyle", GeneratorKind.NAPI)]
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
    [TypeMap("wxString", GeneratorKind.NAPI)]
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

    class RemoveDeclarations : TranslationUnitPass
    {
        public override bool VisitMethodDecl(Method method)
        {
            if (method.Name == "wxCreateObject")
                method.ExplicitlyIgnore();

            return base.VisitMethodDecl(method);
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (@class.Name.StartsWith("compatibility_iterator") ||
                @class.Name.StartsWith("iterator") ||
                @class.Name.StartsWith("const_iterator") ||
                @class.Name.StartsWith("reverse_iterator") ||
                @class.Name.StartsWith("const_reverse_iterator"))
                @class.GenerationKind = GenerationKind.None;

            return base.VisitClassDecl(@class);
        }
    }

    class RemovePlatformSpecificMembers : TranslationUnitPass
    {
        public override bool VisitDeclaration(Declaration decl)
        {
            if (decl.Name.StartsWith("MSW") ||
                decl.Name.StartsWith("Mac") ||
                decl.Name.StartsWith("OSX") ||
                decl.Name.StartsWith("GTK"))
                decl.GenerationKind = GenerationKind.None;

            return base.VisitDeclaration(decl);
        }
    }

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
