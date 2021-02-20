import * as ozone from "ozone"

const pos = new ozone.Point(-1, -1)
const size = new ozone.Size(260, 180)

const frame = new ozone.Frame({}, -1, "Graphics Context", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "JS")

globalThis.frame = frame

const panel = new ozone.Panel(frame, -1, pos, size,
    ozone.WindowFlags.TAB_TRAVERSAL, "Panel");

panel.OnPaint.connect((evt) => {
    const dc = new ozone.PaintDC(panel);
    const gc = new ozone.GraphicsContext.Create(dc);
    console.log("dsa")

    //gc.SetPen( ozone.RED_PEN );
    const path = gc.CreatePath();
    path.AddCircle(50.0, 50.0, 50.0);
    path.MoveToPoint(0.0, 50.0);
    path.AddLineToPoint(100.0, 50.0);
    path.MoveToPoint(50.0, 0.0);
    path.AddLineToPoint(50.0, 100.0);
    path.CloseSubpath();
    path.AddRectangle(25.0, 25.0, 50.0, 50.0);
    gc.StrokePath(path);
    console.log("dsadsa")
    // const metrics = dc.GetFontMetrics()
    // console.log()
})

frame.Show(true)
