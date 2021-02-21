#include "ozone/app.h"
#include "ozone/colour.h"
#include "ozone/dcclient.h"
#include "ozone/defs.h"
#include "ozone/frame.h"
#include "ozone/event.h"
#include "ozone/eventhandlers.h"
#include "ozone/gdicmn.h"
#include "ozone/panel.h"
#include "ozone/pen.h"
#include "ozone/sizer.h"
#include "ozone/webview.h"
#include "ozone/window.h"

using namespace Ozone;

class WebViewPanel : public Panel
{
public:
    WebViewPanel(Frame* parent);
    ~WebViewPanel();
    WebView* webView;
    BoxSizer* sizer;
};

WebViewPanel::WebViewPanel(Frame* parent)
    : Panel(parent, -1, Point(-1,-1), Size(-1,-1), wxTAB_TRAVERSAL | wxNO_BORDER, nullptr)
{
    sizer = new BoxSizer(SizerOrientation::VERTICAL);

    webView = WebView::New("wxWebViewWebKit");
    webView->Create(this, -1, "https://google.com", Point(-1,-1), Size(800, 600), 0, "wxWebKit");
    sizer->Add(webView, 1, (int)Stretch::EXPAND, 0, nullptr);

    SetSizer(sizer, /*deleteOld=*/true);
}

WebViewPanel::~WebViewPanel()
{
    delete webView;
    delete sizer;
}

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
    Size size(-1, -1);
    auto frame = new Frame(nullptr, -1, "Hello World", pos, size, FrameStyle::DEFAULT_FRAME_STYLE, nullptr);

    auto webviewPanel = new WebViewPanel(frame);

    auto sizer = new BoxSizer(SizerOrientation::HORIZONTAL);
    sizer->Add(webviewPanel, 1, (int)Stretch::EXPAND, 0, nullptr);

    frame->SetSizerAndFit(sizer, /*deleteOld=*/true);
    frame->Show(true);

    app->CallOnInit();
    app->OnRun();

    wxEntryCleanup();

    return 0;
}