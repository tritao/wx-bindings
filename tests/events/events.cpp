#include "wx/app.h"
#include "wx/defs.h"
#include "wx/window.h"
#include "wx/event.h"
#include "wx/eventhandlers.h"
#include <wx/app.h>

using namespace wxSharp;

int main(int argc, char *argv[])
{
    // -----------------------------------
    wxDISABLE_DEBUG_SUPPORT();

    int dummy = 0;
    if(!wxEntryStart(dummy, static_cast<wxChar**>(nullptr)))
        return 1;

    wxEvtHandler::AddFilter(new _EventFilter());    

    auto _app = dynamic_cast<::wxApp*>(wxApp::GetInstance());
    auto app = wxSharp::App(_app);

    // -----------------------------------

    app.OnActivateApp.bind([](::wxSharp::ActivateEvent& evt) {
        printf("OnActivateApp: %s\n", evt.GetActive() ? "true" : "false");
    });

    Point pos(-1, -1);
    Size size(800, 600);
    auto frame = new Frame(nullptr, -1, "Hello World", pos, size,
        FrameStyle::DEFAULT_FRAME_STYLE, nullptr);

    frame->OnMove.bind([](::wxSharp::MoveEvent& evt) {
        auto position = evt.GetPosition();
        printf("OnMove: (%d, %d)\n", position.get_x(), position.get_y());
    });

    frame->OnSize.bind([](::wxSharp::SizeEvent& evt) {
        auto size = evt.GetSize();
        printf("OnSize: (%d, %d)\n", size.GetX(), size.GetY());
    });

    frame->OnClose.bind([](::wxSharp::CloseEvent& evt) {
        printf("OnClose\n");
    });

    frame->Show(true);


    app.CallOnInit();
    app.OnRun();

    // -----------------------------------
    wxEntryCleanup();

    return 0;
}