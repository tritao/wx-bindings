// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/brush.h>

extern "C" {

extern JSClassID classId_Ozone_Brush;
extern JSClassID classId_Ozone_Color;
extern JSClassID classId_Ozone_BrushList;
extern JSClassID classId_Ozone_GDIObjListBase;
extern JSClassID classId__Signal;

static void register_enum_Ozone_BrushStyle(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "BrushStyle");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewObject(ctx);

    // INVALID
    {
        JSValue __item = JS_NewInt32(ctx, -1);
        JS_SetPropertyStr(ctx, val, "INVALID", __item);
    }

    // SOLID
    {
        JSValue __item = JS_NewInt32(ctx, 100);
        JS_SetPropertyStr(ctx, val, "SOLID", __item);
    }

    // TRANSPARENT
    {
        JSValue __item = JS_NewInt32(ctx, 106);
        JS_SetPropertyStr(ctx, val, "TRANSPARENT", __item);
    }

    // STIPPLE_MASK_OPAQUE
    {
        JSValue __item = JS_NewInt32(ctx, 107);
        JS_SetPropertyStr(ctx, val, "STIPPLE_MASK_OPAQUE", __item);
    }

    // STIPPLE_MASK
    {
        JSValue __item = JS_NewInt32(ctx, 108);
        JS_SetPropertyStr(ctx, val, "STIPPLE_MASK", __item);
    }

    // STIPPLE
    {
        JSValue __item = JS_NewInt32(ctx, 110);
        JS_SetPropertyStr(ctx, val, "STIPPLE", __item);
    }

    // BDIAGONAL_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 111);
        JS_SetPropertyStr(ctx, val, "BDIAGONAL_HATCH", __item);
    }

    // CROSSDIAG_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 112);
        JS_SetPropertyStr(ctx, val, "CROSSDIAG_HATCH", __item);
    }

    // FDIAGONAL_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 113);
        JS_SetPropertyStr(ctx, val, "FDIAGONAL_HATCH", __item);
    }

    // CROSS_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 114);
        JS_SetPropertyStr(ctx, val, "CROSS_HATCH", __item);
    }

    // HORIZONTAL_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 115);
        JS_SetPropertyStr(ctx, val, "HORIZONTAL_HATCH", __item);
    }

    // VERTICAL_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 116);
        JS_SetPropertyStr(ctx, val, "VERTICAL_HATCH", __item);
    }

    // FIRST_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 111);
        JS_SetPropertyStr(ctx, val, "FIRST_HATCH", __item);
    }

    // LAST_HATCH
    {
        JSValue __item = JS_NewInt32(ctx, 116);
        JS_SetPropertyStr(ctx, val, "LAST_HATCH", __item);
    }

    int status = JS_SetModuleExport(ctx, m, "BrushStyle", val);
    assert(status != -1);
}

JSClassID classId_Ozone_Brush;

// Ozone::Brush::Brush
static JSValue callback_method_Ozone_Brush_Brush(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 2)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance;

    if (argc == 0)
        goto overload0;

    if (JS_IsObject(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsNumber(argv[1]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // Brush()
overload0:
    {
        instance = new Ozone::Brush();

        goto wrap;
    }

    // Brush(const ::Ozone::Color& colour, ::Ozone::BrushStyle style)
overload1:
    {
        Ozone::Color* colour_instance = (Ozone::Color*) JS_GetOpaque(argv[0], classId_Ozone_Color);

        auto &__arg0 = *colour_instance;
        int style;
        if (JS_ToInt32(ctx, (int32_t*) &style, argv[1]))
            return JS_EXCEPTION;

        auto __arg1 = (::Ozone::BrushStyle)style;
        instance = new Ozone::Brush(__arg0, __arg1);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_Brush);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_Brush);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::Brush::operator==
static JSValue callback_method_Ozone_Brush_operator_EqualEqual(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool operator==(const ::Ozone::Brush& brush) const
overload0:
    {
        Ozone::Brush* brush_instance = (Ozone::Brush*) JS_GetOpaque(argv[0], classId_Ozone_Brush);

        auto &__arg0 = *brush_instance;
        bool __ret = instance->operator==(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Brush::operator!=
static JSValue callback_method_Ozone_Brush_operator_ExclaimEqual(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool operator!=(const ::Ozone::Brush& brush) const
overload0:
    {
        Ozone::Brush* brush_instance = (Ozone::Brush*) JS_GetOpaque(argv[0], classId_Ozone_Brush);

        auto &__arg0 = *brush_instance;
        bool __ret = instance->operator!=(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Brush::GetStyle
static JSValue callback_method_Ozone_Brush_GetStyle(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    ::Ozone::BrushStyle __ret = instance->GetStyle();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::Brush::GetColour
static JSValue callback_method_Ozone_Brush_GetColour(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    ::Ozone::Color __ret = instance->GetColour();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &ctx);

    return ____ret;
}

// Ozone::Brush::SetColour
static JSValue callback_method_Ozone_Brush_SetColour(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 3)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto overload0;

    if (JS_IsNumber(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsNumber(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsNumber(argv[2]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetColour(const ::Ozone::Color& col)
overload0:
    {
        Ozone::Color* col_instance = (Ozone::Color*) JS_GetOpaque(argv[0], classId_Ozone_Color);

        auto &__arg0 = *col_instance;
        instance->SetColour(__arg0);


        return JS_UNDEFINED;
    }

    // void SetColour(unsigned char r, unsigned char g, unsigned char b)
overload1:
    {
        unsigned char r;
        int32_t _r;
        if (JS_ToInt32(ctx, &_r, argv[0]))
            return JS_EXCEPTION;
        r = (unsigned char)_r;

        auto __arg0 = r;
        unsigned char g;
        int32_t _g;
        if (JS_ToInt32(ctx, &_g, argv[1]))
            return JS_EXCEPTION;
        g = (unsigned char)_g;

        auto __arg1 = g;
        unsigned char b;
        int32_t _b;
        if (JS_ToInt32(ctx, &_b, argv[2]))
            return JS_EXCEPTION;
        b = (unsigned char)_b;

        auto __arg2 = b;
        instance->SetColour(__arg0, __arg1, __arg2);

        return JS_UNDEFINED;
    }
}

// Ozone::Brush::SetStyle
static JSValue callback_method_Ozone_Brush_SetStyle(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    if (JS_IsNumber(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetStyle(::Ozone::BrushStyle style)
overload0:
    {
        int style;
        if (JS_ToInt32(ctx, (int32_t*) &style, argv[0]))
            return JS_EXCEPTION;

        auto __arg0 = (::Ozone::BrushStyle)style;
        instance->SetStyle(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Brush::IsHatch
static JSValue callback_method_Ozone_Brush_IsHatch(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->IsHatch();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

// Ozone::Brush::IsTransparent
static JSValue callback_method_Ozone_Brush_IsTransparent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->IsTransparent();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

// Ozone::Brush::IsNonTransparent
static JSValue callback_method_Ozone_Brush_IsNonTransparent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->IsNonTransparent();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

static JSValue callback_class_Ozone_Brush_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "Brush");
}

void finalizer_Ozone_Brush(JSRuntime *rt, JSValue val)
{
    Ozone::Brush* instance = (Ozone::Brush*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_Brush
{
    "Brush",
    .finalizer = finalizer_Ozone_Brush
};

static JSCFunctionListEntry funcDef_Ozone_Brush[]
{
    JS_CFUNC_DEF("operator==", 1, callback_method_Ozone_Brush_operator_EqualEqual),
    JS_CFUNC_DEF("operator!=", 1, callback_method_Ozone_Brush_operator_ExclaimEqual),
    JS_CFUNC_DEF("GetStyle", 0, callback_method_Ozone_Brush_GetStyle),
    JS_CFUNC_DEF("GetColour", 0, callback_method_Ozone_Brush_GetColour),
    JS_CFUNC_DEF("SetColour", 3, callback_method_Ozone_Brush_SetColour),
    JS_CFUNC_DEF("SetStyle", 1, callback_method_Ozone_Brush_SetStyle),
    JS_CFUNC_DEF("IsHatch", 0, callback_method_Ozone_Brush_IsHatch),
    JS_CFUNC_DEF("IsTransparent", 0, callback_method_Ozone_Brush_IsTransparent),
    JS_CFUNC_DEF("IsNonTransparent", 0, callback_method_Ozone_Brush_IsNonTransparent),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_Brush_toString),
};

static void register_class_Ozone_Brush(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "Brush");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_Brush);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_Brush, &classDef_Ozone_Brush);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_Brush, sizeof(funcDef_Ozone_Brush) / sizeof(funcDef_Ozone_Brush[0]));
        JS_SetClassProto(ctx, classId_Ozone_Brush, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_Brush_Brush, "Brush", 2, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "Brush", ctor);
    }
}

JSClassID classId_Ozone_BrushList;

// Ozone::BrushList::BrushList
static JSValue callback_method_Ozone_BrushList_BrushList(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::BrushList* instance;

    instance = new Ozone::BrushList();
    goto wrap;

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_BrushList);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_BrushList);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::BrushList::FindOrCreateBrush
static JSValue callback_method_Ozone_BrushList_FindOrCreateBrush(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 2 || argc > 2)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::BrushList* instance = (Ozone::BrushList*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsNumber(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // ::Ozone::Brush* FindOrCreateBrush(const ::Ozone::Color& colour, ::Ozone::BrushStyle style)
overload0:
    {
        Ozone::Color* colour_instance = (Ozone::Color*) JS_GetOpaque(argv[0], classId_Ozone_Color);

        auto &__arg0 = *colour_instance;
        int style;
        if (JS_ToInt32(ctx, (int32_t*) &style, argv[1]))
            return JS_EXCEPTION;

        auto __arg1 = (::Ozone::BrushStyle)style;
        ::Ozone::Brush* __ret = instance->FindOrCreateBrush(__arg0, __arg1);

        JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Brush, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) __ret);

        return ____ret;
    }
}

static JSValue callback_class_Ozone_BrushList_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "BrushList");
}

void finalizer_Ozone_BrushList(JSRuntime *rt, JSValue val)
{
    Ozone::BrushList* instance = (Ozone::BrushList*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_BrushList
{
    "BrushList",
    .finalizer = finalizer_Ozone_BrushList
};

static JSCFunctionListEntry funcDef_Ozone_BrushList[]
{
    JS_CFUNC_DEF("FindOrCreateBrush", 2, callback_method_Ozone_BrushList_FindOrCreateBrush),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_BrushList_toString),
};

static void register_class_Ozone_BrushList(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "BrushList");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_BrushList);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_BrushList, &classDef_Ozone_BrushList);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_BrushList, sizeof(funcDef_Ozone_BrushList) / sizeof(funcDef_Ozone_BrushList[0]));
        JS_SetClassProto(ctx, classId_Ozone_BrushList, proto);

    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_BrushList);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_GDIObjListBase);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

void register_ozone_brush(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (phase == 0)
    {
        register_enum_Ozone_BrushStyle(ctx, m, set);
    }

    register_class_Ozone_Brush(ctx, m, set, phase);

    register_class_Ozone_BrushList(ctx, m, set, phase);
}

} // extern "C"
