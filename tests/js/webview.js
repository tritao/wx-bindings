import * as ozone from "ozone"

const pos = new ozone.Point(-1, -1)
const size = new ozone.Size(800, 600)

const frame = new ozone.Frame({}, -1, "Web View", pos, size,
    ozone.FrameStyle.DEFAULT_FRAME_STYLE, "WebView")

globalThis.frame = frame

const panel = new ozone.Panel(frame, -1, pos, new ozone.Size(-1,-1),
    ozone.WindowFlags.TAB_TRAVERSAL, "WebViewPanel");
const panelSizer = new ozone.BoxSizer(ozone.SizerOrientation.VERTICAL)

const webView = ozone.WebView.New("wxWebViewWebKit")
webView.Create(panel, -1, "https://wxwidgets.org", new ozone.Point(-1,-1),
    new ozone.Size(-1, -1), 0, "wxWebKit");

panelSizer.Add(webView, -1, ozone.Stretch.EXPAND, 0, null);

panel.SetSizer(panelSizer, /*deleteOld=*/true);

frame.Show(true)
