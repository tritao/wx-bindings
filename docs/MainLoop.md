libuv main loop docs
http://docs.libuv.org/en/v1.x/loop.html

GTK main loop docs
https://developer.gnome.org/gtk3/stable/gtk3-General.html#gtk-main
https://developer.gnome.org/glib/stable/glib-The-Main-Event-Loop.html

wxWidgets main loop docs
https://docs.wxwidgets.org/3.0/classwx_g_u_i_event_loop.html



Bare GTK and libuv integration example
https://github.com/derekdai/libuv-glib/blob/master/test-uv-gtk.c


Node-GTK libuv integration example
https://github.com/romgrk/node-gtk/blob/master/src/loop.cc




https://github.com/andlabs/libui/issues/323#issuecomment-378231567

Unix
    Register the epoll descriptor with GTK
    Run the libuv event loop when GTK reports that the epoll descriptor is ready.

macOS
    Create a kqueue that waits on the CFRunLoop Mach port as well as the libuv descriptor
    Poll the kqueue, with a large enough buffer to support multiple events.
    As long as the Mach port is generating events, run the CFRunLoop
    Otherwise, the event must be from libuv; run the libuv loop.

Windows 10
    Use MsgWaitForMultipleObjectsEx to wait both on libuv’s I/O completion port and also pump a message loop.

Windows 8.1 and below
    Create another thread
    Use GetQueuedCompletionStatus on that thread to get events from libuv.
    When an event is received, call PostQueuedCompletionStatus, then wake up the main loop and wait on a semaphore or event object.
    When the main loop runs the callback that was triggered, run libuv’s main loop (once) and then signal the semaphore or event object.
    These are the most efficient ways to do it on each platform. In the first three cases, there are other methods that are less efficient.