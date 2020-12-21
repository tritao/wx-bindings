import * as ozone from "ozone"

let pos = new ozone.Point(-1, -1)
let size = new ozone.Size(800, 600)

let frame = new ozone.Frame({}, -1, "Hello from JS", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "JS")

frame.Show(true)
