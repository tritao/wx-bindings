// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/object.h>

extern "C" {

extern JSClassID classId_Ozone_RefCounter;
extern JSClassID classId_Ozone_Object;
extern JSClassID classId__Signal;

JSClassID classId_Ozone_RefCounter;

// Ozone::RefCounter::RefCounter
static JSValue callback_method_Ozone_RefCounter_RefCounter(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::RefCounter* instance;

    instance = new Ozone::RefCounter();
    goto wrap;

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_RefCounter);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_RefCounter);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::RefCounter::GetRefCount
static JSValue callback_method_Ozone_RefCounter_GetRefCount(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::RefCounter* instance = (Ozone::RefCounter*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetRefCount();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::RefCounter::IncRef
static JSValue callback_method_Ozone_RefCounter_IncRef(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::RefCounter* instance = (Ozone::RefCounter*) JS_GetOpaque(this_val, 0);

    instance->IncRef();

    return JS_UNDEFINED;
}

// Ozone::RefCounter::DecRef
static JSValue callback_method_Ozone_RefCounter_DecRef(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::RefCounter* instance = (Ozone::RefCounter*) JS_GetOpaque(this_val, 0);

    instance->DecRef();

    return JS_UNDEFINED;
}

static JSValue callback_class_Ozone_RefCounter_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "RefCounter");
}

void finalizer_Ozone_RefCounter(JSRuntime *rt, JSValue val)
{
    Ozone::RefCounter* instance = (Ozone::RefCounter*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_RefCounter
{
    "RefCounter",
    .finalizer = finalizer_Ozone_RefCounter
};

static JSCFunctionListEntry funcDef_Ozone_RefCounter[]
{
    JS_CFUNC_DEF("GetRefCount", 0, callback_method_Ozone_RefCounter_GetRefCount),
    JS_CFUNC_DEF("IncRef", 0, callback_method_Ozone_RefCounter_IncRef),
    JS_CFUNC_DEF("DecRef", 0, callback_method_Ozone_RefCounter_DecRef),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_RefCounter_toString),
};

static void register_class_Ozone_RefCounter(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "RefCounter");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_RefCounter);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_RefCounter, &classDef_Ozone_RefCounter);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_RefCounter, sizeof(funcDef_Ozone_RefCounter) / sizeof(funcDef_Ozone_RefCounter[0]));
        JS_SetClassProto(ctx, classId_Ozone_RefCounter, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_RefCounter_RefCounter, "RefCounter", 1, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "RefCounter", ctor);
    }
}

JSClassID classId_Ozone_Object;

// Ozone::Object::Object
static JSValue callback_method_Ozone_Object_Object(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance;

    instance = new Ozone::Object();
    goto wrap;

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_Object);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_Object);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::Object::GetRefData
static JSValue callback_method_Ozone_Object_GetRefData(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(this_val, 0);

    ::Ozone::RefCounter* __ret = instance->GetRefData();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_RefCounter, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) __ret);

    return ____ret;
}

// Ozone::Object::SetRefData
static JSValue callback_method_Ozone_Object_SetRefData(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetRefData(::Ozone::RefCounter* data)
overload0:
    {
        Ozone::RefCounter* data_instance = (Ozone::RefCounter*) JS_GetOpaque(argv[0], classId_Ozone_RefCounter);

        auto __arg0 = data_instance;
        instance->SetRefData(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Object::Ref
static JSValue callback_method_Ozone_Object_Ref(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void Ref(const ::Ozone::Object& clone)
overload0:
    {
        Ozone::Object* clone_instance = (Ozone::Object*) JS_GetOpaque(argv[0], classId_Ozone_Object);

        auto &__arg0 = *clone_instance;
        instance->Ref(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Object::UnRef
static JSValue callback_method_Ozone_Object_UnRef(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(this_val, 0);

    instance->UnRef();

    return JS_UNDEFINED;
}

// Ozone::Object::UnShare
static JSValue callback_method_Ozone_Object_UnShare(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(this_val, 0);

    instance->UnShare();

    return JS_UNDEFINED;
}

// Ozone::Object::IsSameAs
static JSValue callback_method_Ozone_Object_IsSameAs(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool IsSameAs(const ::Ozone::Object& o) const
overload0:
    {
        Ozone::Object* o_instance = (Ozone::Object*) JS_GetOpaque(argv[0], classId_Ozone_Object);

        auto &__arg0 = *o_instance;
        bool __ret = instance->IsSameAs(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

static JSValue callback_class_Ozone_Object_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "Object");
}

void finalizer_Ozone_Object(JSRuntime *rt, JSValue val)
{
    Ozone::Object* instance = (Ozone::Object*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_Object
{
    "Object",
    .finalizer = finalizer_Ozone_Object
};

static JSCFunctionListEntry funcDef_Ozone_Object[]
{
    JS_CFUNC_DEF("GetRefData", 0, callback_method_Ozone_Object_GetRefData),
    JS_CFUNC_DEF("SetRefData", 1, callback_method_Ozone_Object_SetRefData),
    JS_CFUNC_DEF("Ref", 1, callback_method_Ozone_Object_Ref),
    JS_CFUNC_DEF("UnRef", 0, callback_method_Ozone_Object_UnRef),
    JS_CFUNC_DEF("UnShare", 0, callback_method_Ozone_Object_UnShare),
    JS_CFUNC_DEF("IsSameAs", 1, callback_method_Ozone_Object_IsSameAs),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_Object_toString),
};

static void register_class_Ozone_Object(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "Object");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_Object);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_Object, &classDef_Ozone_Object);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_Object, sizeof(funcDef_Ozone_Object) / sizeof(funcDef_Ozone_Object[0]));
        JS_SetClassProto(ctx, classId_Ozone_Object, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_Object_Object, "Object", 1, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "Object", ctor);
    }
}

void register_ozone_object(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    register_class_Ozone_RefCounter(ctx, m, set, phase);

    register_class_Ozone_Object(ctx, m, set, phase);
}

} // extern "C"
