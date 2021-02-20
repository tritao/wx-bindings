#include <node/node_api.h>
#include "NAPIHelpers.h"

extern void register_wxsharp_event(napi_env env, napi_value exports);
extern void register_wxsharp_colour(napi_env env, napi_value exports);
extern void register_wxsharp_dc(napi_env env, napi_value exports);
extern void register_wxsharp_object(napi_env env, napi_value exports);
extern void register_wxsharp_gdicmn(napi_env env, napi_value exports);
extern void register_wxsharp_brush(napi_env env, napi_value exports);
extern void register_wxsharp_frame(napi_env env, napi_value exports);
extern void register_wxsharp_toplevel(napi_env env, napi_value exports);
extern void register_wxsharp_pen(napi_env env, napi_value exports);
extern void register_wxsharp_panel(napi_env env, napi_value exports);
extern void register_wxsharp_app(napi_env env, napi_value exports);
extern void register_wxsharp_window(napi_env env, napi_value exports);
extern void register_wxsharp_graphics(napi_env env, napi_value exports);
extern void register_wxsharp_defs(napi_env env, napi_value exports);
extern void register_wxsharp_dcclient(napi_env env, napi_value exports);
extern void register_wxsharp_nonownedwnd(napi_env env, napi_value exports);
extern void register_wxsharp_sizer(napi_env env, napi_value exports);
extern void register_wxsharp_containr(napi_env env, napi_value exports);
extern void register_wxsharp_eventhandlers(napi_env env, napi_value exports);

// napi_value NAPI_MODULE_INITIALIZER(napi_env env, napi_value exports)
NAPI_MODULE_INIT()
{
    register_wxsharp_event(env, exports);
    register_wxsharp_colour(env, exports);
    register_wxsharp_dc(env, exports);
    register_wxsharp_object(env, exports);
    register_wxsharp_gdicmn(env, exports);
    register_wxsharp_brush(env, exports);
    register_wxsharp_frame(env, exports);
    register_wxsharp_toplevel(env, exports);
    register_wxsharp_pen(env, exports);
    register_wxsharp_panel(env, exports);
    register_wxsharp_app(env, exports);
    register_wxsharp_window(env, exports);
    register_wxsharp_graphics(env, exports);
    register_wxsharp_defs(env, exports);
    register_wxsharp_dcclient(env, exports);
    register_wxsharp_nonownedwnd(env, exports);
    register_wxsharp_sizer(env, exports);
    register_wxsharp_containr(env, exports);
    register_wxsharp_eventhandlers(env, exports);

    return nullptr;
}
