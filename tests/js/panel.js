import * as ozone from "ozone"

const pos = new ozone.Point(-1, -1)
const size = new ozone.Size(800, 600)

const frame = new ozone.Frame({}, -1, "Hello from JS", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "JS")

globalThis.frame = frame

const flags = ozone.WindowFlags.TAB_TRAVERSAL
const panel = new ozone.Panel(frame, -1, pos, new ozone.Size(-1,-1),
    ozone.WindowFlags.TAB_TRAVERSAL, "Panel");

frame.Show(true)
