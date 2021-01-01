import * as ozone from "ozone"

let pos = new ozone.Point(-1, -1)
let size = new ozone.Size(800, 600)

let frame = new ozone.Frame({}, -1, "Hello from JS", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "JS")

globalThis.frame = frame

frame.OnActivate.connect((evt) => {
    console.log("OnActivate")
    console.log(`${evt.toString()}: ${evt.GetActive()}`)
});

frame.OnClose.connect(() => {
    console.log("OnClose")
});

frame.OnMaximize.connect(() => {
    console.log("OnMaximize")
});

frame.OnMove.connect((evt) => {
    //console.log("OnMove");
    const pos = evt.GetPosition()
    //console.log(`${evt.toString()} X,Y (${pos.get_x()},${pos.get_y()})`)
});

//frame.Move(10, 10, 0)

frame.Show(true)
