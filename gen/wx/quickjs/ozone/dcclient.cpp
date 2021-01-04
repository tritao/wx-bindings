// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/dcclient.h>

extern "C" {

extern JSClassID classId_Ozone_WindowDC;
extern JSClassID classId_Ozone_DC;
extern JSClassID classId_Ozone_Window;
extern JSClassID classId_Ozone_ClientDC;
extern JSClassID classId_Ozone_PaintDC;
extern JSClassID classId__Signal;

JSClassID classId_Ozone_WindowDC;

// Ozone::WindowDC::WindowDC
static JSValue callback_method_Ozone_WindowDC_WindowDC(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::WindowDC* instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // WindowDC(::Ozone::Window* win)
overload0:
    {
        Ozone::Window* win_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = win_instance;

        instance = new Ozone::WindowDC(__arg0);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_WindowDC);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_WindowDC);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

static JSValue callback_class_Ozone_WindowDC_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "WindowDC");
}

void finalizer_Ozone_WindowDC(JSRuntime *rt, JSValue val)
{
    Ozone::WindowDC* instance = (Ozone::WindowDC*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_WindowDC
{
    "WindowDC",
    .finalizer = finalizer_Ozone_WindowDC
};

static JSCFunctionListEntry funcDef_Ozone_WindowDC[]
{
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_WindowDC_toString),
};

static void register_class_Ozone_WindowDC(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "WindowDC");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_WindowDC);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_WindowDC, &classDef_Ozone_WindowDC);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_WindowDC, sizeof(funcDef_Ozone_WindowDC) / sizeof(funcDef_Ozone_WindowDC[0]));
        JS_SetClassProto(ctx, classId_Ozone_WindowDC, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_WindowDC_WindowDC, "WindowDC", 1, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "WindowDC", ctor);
    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_WindowDC);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_DC);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

JSClassID classId_Ozone_ClientDC;

// Ozone::ClientDC::ClientDC
static JSValue callback_method_Ozone_ClientDC_ClientDC(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::ClientDC* instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // ClientDC(::Ozone::Window* win)
overload0:
    {
        Ozone::Window* win_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = win_instance;

        instance = new Ozone::ClientDC(__arg0);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_ClientDC);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_ClientDC);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

static JSValue callback_class_Ozone_ClientDC_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "ClientDC");
}

void finalizer_Ozone_ClientDC(JSRuntime *rt, JSValue val)
{
    Ozone::ClientDC* instance = (Ozone::ClientDC*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_ClientDC
{
    "ClientDC",
    .finalizer = finalizer_Ozone_ClientDC
};

static JSCFunctionListEntry funcDef_Ozone_ClientDC[]
{
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_ClientDC_toString),
};

static void register_class_Ozone_ClientDC(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "ClientDC");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_ClientDC);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_ClientDC, &classDef_Ozone_ClientDC);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_ClientDC, sizeof(funcDef_Ozone_ClientDC) / sizeof(funcDef_Ozone_ClientDC[0]));
        JS_SetClassProto(ctx, classId_Ozone_ClientDC, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_ClientDC_ClientDC, "ClientDC", 1, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "ClientDC", ctor);
    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_ClientDC);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_WindowDC);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

JSClassID classId_Ozone_PaintDC;

// Ozone::PaintDC::PaintDC
static JSValue callback_method_Ozone_PaintDC_PaintDC(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PaintDC* instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // PaintDC(::Ozone::Window* win)
overload0:
    {
        Ozone::Window* win_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = win_instance;

        instance = new Ozone::PaintDC(__arg0);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_PaintDC);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_PaintDC);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

static JSValue callback_class_Ozone_PaintDC_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "PaintDC");
}

void finalizer_Ozone_PaintDC(JSRuntime *rt, JSValue val)
{
    Ozone::PaintDC* instance = (Ozone::PaintDC*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_PaintDC
{
    "PaintDC",
    .finalizer = finalizer_Ozone_PaintDC
};

static JSCFunctionListEntry funcDef_Ozone_PaintDC[]
{
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_PaintDC_toString),
};

static void register_class_Ozone_PaintDC(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "PaintDC");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_PaintDC);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_PaintDC, &classDef_Ozone_PaintDC);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_PaintDC, sizeof(funcDef_Ozone_PaintDC) / sizeof(funcDef_Ozone_PaintDC[0]));
        JS_SetClassProto(ctx, classId_Ozone_PaintDC, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_PaintDC_PaintDC, "PaintDC", 1, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "PaintDC", ctor);
    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_PaintDC);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_ClientDC);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

void register_ozone_dcclient(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    register_class_Ozone_WindowDC(ctx, m, set, phase);

    register_class_Ozone_ClientDC(ctx, m, set, phase);

    register_class_Ozone_PaintDC(ctx, m, set, phase);
}

} // extern "C"
