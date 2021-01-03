import * as ozone from "ozone"

const pos = new ozone.Point(-1, -1)
const size = new ozone.Size(260, 180)

const frame = new ozone.Frame({}, -1, "Hello from JS", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "JS")

globalThis.frame = frame

const file = ozone.LoadFileSelector("test", "", "", frame)
console.log('Selected file: ' + file)

