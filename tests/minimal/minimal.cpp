#include "wx/app.h"
#include "wx/defs.h"
#include "wx/window.h"
#include "wx/event.h"
#include "wx/eventhandlers.h"

using namespace wxSharp;

int main(int argc, char *argv[])
{
    // -----------------------------------
    wxDISABLE_DEBUG_SUPPORT();

    int dummy = 0;
    if(!wxEntryStart(dummy, static_cast<wxChar**>(nullptr)))
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
    app->OnRun();

    // -----------------------------------
    wxEntryCleanup();

    return 0;
}