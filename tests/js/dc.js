import * as ozone from "ozone"

const pos = new ozone.Point(-1, -1)
const size = new ozone.Size(260, 180)

const frame = new ozone.Frame({}, -1, "Hello from JS", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "JS")

globalThis.frame = frame

const panel = new ozone.Panel(frame, -1, pos, size,
    ozone.WindowFlags.TAB_TRAVERSAL, "Panel");

panel.OnPaint.connect((evt) => {
    const dc = new ozone.PaintDC(panel);
    dc.DrawText("rendering some text from JS", 40, 60)
    dc.DrawCircle(60, 120, /*radius=*/ 20);
    dc.DrawRectangle(100, 100, 40, 40);
    dc.DrawLabel("test label", new ozone.Rect(20, 20, 100, 20), ozone.Alignment.ALIGN_CENTER, -1)
})

frame.Show(true)
