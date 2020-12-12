#include "wxsharp/app.h"
#include "wxsharp/colour.h"
#include "wxsharp/dcclient.h"
#include "wxsharp/defs.h"
#include "wxsharp/frame.h"
#include "wxsharp/event.h"
#include "wxsharp/eventhandlers.h"
#include "wxsharp/gdicmn.h"
#include "wxsharp/panel.h"
#include "wxsharp/pen.h"
#include "wxsharp/sizer.h"
#include "wxsharp/window.h"

using namespace wxSharp;

class DrawPane : public Panel
{
public:
    DrawPane(Frame* parent);
    void OnPaintEvent(PaintEvent & evt);
    void Render(DC& dc);
};

DrawPane::DrawPane(Frame* parent) 
    : Panel(parent, -1, Point(-1,-1), Size(-1, -1), wxTAB_TRAVERSAL | wxNO_BORDER, nullptr)
{
    SetInitialSize(Size(800, 400));
    OnPaint.bind(this, &DrawPane::OnPaintEvent);
}

void DrawPane::OnPaintEvent(PaintEvent & evt)
{
    PaintDC dc(this);
    Render(dc);
    delete dc.__Instance;
}

void DrawPane::Render(DC& dc)
{
    // draw some text
    dc.DrawText("Testing", 40, 60); 
    
    // draw a circle

    auto greenBrush = StockGDI::GetBrush(StockGDI::Item::BRUSH_GREEN);
    dc.SetBrush(*greenBrush); // green filling

    dc.SetPen( Pen( Color(255,0,0,0xff), 5, PenStyle::SOLID ) ); // 5-pixels-thick red outline
    dc.DrawCircle( Point(200,100), /*radius=*/ 25);
    
    // draw a rectangle
    auto blueBrush = StockGDI::GetBrush(StockGDI::Item::BRUSH_BLUE);
    dc.SetBrush(*blueBrush); // blue filling
    dc.SetPen( Pen( Color(255,175,175,0xff), 10, PenStyle::SOLID ) ); // 10-pixels-thick pink outline
    dc.DrawRectangle( 300, 100, 400, 200 );
    
    // draw a line
    dc.SetPen( Pen( Color(0,0,0,0xff), 3, PenStyle::SOLID ) ); // black line, 3 pixels thick
    dc.DrawLine( 300, 100, 700, 300 ); // draw line across the rectangle
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

    auto drawPane = new DrawPane(frame);

    auto sizer = new BoxSizer(SizerOrientation::HORIZONTAL);
    sizer->Add(drawPane, 1, (int)Stretch::EXPAND, 0, nullptr);

    frame->SetSizerAndFit(sizer, /*deleteOld=*/true);
    frame->Show(true);

    app->CallOnInit();
    app->OnRun();

    wxEntryCleanup();

    return 0;
}