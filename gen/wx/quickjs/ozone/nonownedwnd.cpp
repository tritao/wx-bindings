// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/nonownedwnd.h>

extern "C" {

extern JSClassID classId_Ozone_NonOwnedWindow;
extern JSClassID classId_Ozone_Window;
extern JSClassID classId_Ozone_GraphicsPath;
extern JSClassID classId__Signal;

JSClassID classId_Ozone_NonOwnedWindow;

struct data_Ozone_NonOwnedWindow
{
    Ozone::NonOwnedWindow* instance;
    JSContext* ctx;
    JS_EventMap events;

};

// Ozone::NonOwnedWindow::NonOwnedWindow
static JSValue callback_method_Ozone_NonOwnedWindow_NonOwnedWindow(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::NonOwnedWindow* instance;

    instance = new Ozone::NonOwnedWindow();
    goto wrap;

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_NonOwnedWindow);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_NonOwnedWindow);
    JS_FreeValue(ctx, proto);

    data_Ozone_NonOwnedWindow* __data = new data_Ozone_NonOwnedWindow;

    JS_Interop_InitEventMap(&__data->events);

    __data->instance = instance;
    __data->ctx = ctx;

    JS_SetOpaque(__obj, __data);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::NonOwnedWindow::SetShape
static JSValue callback_method_Ozone_NonOwnedWindow_SetShape(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    auto data = (data_Ozone_NonOwnedWindow*) JS_GetOpaque(this_val, 0);
    Ozone::NonOwnedWindow* instance = data->instance;

    if (JS_IsObject(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool SetShape(const ::Ozone::GraphicsPath& path)
overload0:
    {
        Ozone::GraphicsPath* path_instance = (Ozone::GraphicsPath*) JS_GetOpaque(argv[0], classId_Ozone_GraphicsPath);

        auto &__arg0 = *path_instance;
        bool __ret = instance->SetShape(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::NonOwnedWindow::InheritAttributes
static JSValue callback_method_Ozone_NonOwnedWindow_InheritAttributes(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    auto data = (data_Ozone_NonOwnedWindow*) JS_GetOpaque(this_val, 0);
    Ozone::NonOwnedWindow* instance = data->instance;

    instance->InheritAttributes();

    return JS_UNDEFINED;
}

static JSValue callback_class_Ozone_NonOwnedWindow_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "NonOwnedWindow");
}

void finalizer_Ozone_NonOwnedWindow(JSRuntime *rt, JSValue val)
{
    auto data = (data_Ozone_NonOwnedWindow*) JS_GetOpaque(val, 0);
    Ozone::NonOwnedWindow* instance = data->instance;
    JS_Interop_FreeEventMap(&data->events, data->ctx);
}

static JSClassDef classDef_Ozone_NonOwnedWindow
{
    "NonOwnedWindow",
    .finalizer = finalizer_Ozone_NonOwnedWindow
};

static JSCFunctionListEntry funcDef_Ozone_NonOwnedWindow[]
{
    JS_CFUNC_DEF("SetShape", 1, callback_method_Ozone_NonOwnedWindow_SetShape),
    JS_CFUNC_DEF("InheritAttributes", 0, callback_method_Ozone_NonOwnedWindow_InheritAttributes),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_NonOwnedWindow_toString),
};

static void register_class_Ozone_NonOwnedWindow(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "NonOwnedWindow");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_NonOwnedWindow);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_NonOwnedWindow, &classDef_Ozone_NonOwnedWindow);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_NonOwnedWindow, sizeof(funcDef_Ozone_NonOwnedWindow) / sizeof(funcDef_Ozone_NonOwnedWindow[0]));
        JS_SetClassProto(ctx, classId_Ozone_NonOwnedWindow, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_NonOwnedWindow_NonOwnedWindow, "NonOwnedWindow", 1, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "NonOwnedWindow", ctor);
    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_NonOwnedWindow);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_Window);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

void register_ozone_nonownedwnd(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    register_class_Ozone_NonOwnedWindow(ctx, m, set, phase);
}

} // extern "C"
