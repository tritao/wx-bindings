#include "wxsharp/app.h"
#include "wxsharp/defs.h"
#include "wxsharp/frame.h"
#include "wxsharp/gdicmn.h"
#include "wxsharp/window.h"
#include "wxsharp/event.h"
#include "wxsharp/eventhandlers.h"
#include <wx/evtloop.h>

using namespace wxSharp;

int main(int argc, char *argv[])
{
    // -----------------------------------
    wxDISABLE_DEBUG_SUPPORT();

    int dummy = 0;
    if(!wxInitialize(dummy, static_cast<wxChar**>(nullptr)))
        return 1;

    wxEvtHandler::AddFilter(new _EventFilter());

    auto app = CreateApp();

    // -----------------------------------

    Point pos(-1, -1);
    Size size(800, 600);
    auto frame = new Frame(nullptr, -1, "Hello World", pos, size,
        FrameStyle::DEFAULT_FRAME_STYLE, nullptr);
    frame->Show(true);

    app->CallOnInit();
    //app->OnRun();

    wxAppBase* appBase = (wxAppBase*)app->__Instance;
    appBase->MainLoop();

    wxEventLoopBase* mainLoop = appBase->GetMainLoop();
    printf("%p\n", mainLoop);
    mainLoop->Run();

    // -----------------------------------
    wxUninitialize();

    return 0;
}