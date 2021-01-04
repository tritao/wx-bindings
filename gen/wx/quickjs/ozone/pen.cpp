// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/pen.h>

extern "C" {

extern JSClassID classId_Ozone_PenInfoBase;
extern JSClassID classId_Ozone_PenInfo;
extern JSClassID classId_Ozone_Color;
extern JSClassID classId_Ozone_Pen;
extern JSClassID classId_Ozone_PenList;
extern JSClassID classId_Ozone_GDIObjListBase;
extern JSClassID classId__Signal;

static void register_enum_Ozone_PenStyle(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "PenStyle");
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

    // DOT
    {
        JSValue __item = JS_NewInt32(ctx, 101);
        JS_SetPropertyStr(ctx, val, "DOT", __item);
    }

    // LONG_DASH
    {
        JSValue __item = JS_NewInt32(ctx, 102);
        JS_SetPropertyStr(ctx, val, "LONG_DASH", __item);
    }

    // SHORT_DASH
    {
        JSValue __item = JS_NewInt32(ctx, 103);
        JS_SetPropertyStr(ctx, val, "SHORT_DASH", __item);
    }

    // DOT_DASH
    {
        JSValue __item = JS_NewInt32(ctx, 104);
        JS_SetPropertyStr(ctx, val, "DOT_DASH", __item);
    }

    // USER_DASH
    {
        JSValue __item = JS_NewInt32(ctx, 105);
        JS_SetPropertyStr(ctx, val, "USER_DASH", __item);
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

    int status = JS_SetModuleExport(ctx, m, "PenStyle", val);
    assert(status != -1);
}

static void register_enum_Ozone_PenJoin(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "PenJoin");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewObject(ctx);

    // INVALID
    {
        JSValue __item = JS_NewInt32(ctx, -1);
        JS_SetPropertyStr(ctx, val, "INVALID", __item);
    }

    // BEVEL
    {
        JSValue __item = JS_NewInt32(ctx, 120);
        JS_SetPropertyStr(ctx, val, "BEVEL", __item);
    }

    // MITER
    {
        JSValue __item = JS_NewInt32(ctx, 121);
        JS_SetPropertyStr(ctx, val, "MITER", __item);
    }

    // ROUND
    {
        JSValue __item = JS_NewInt32(ctx, 122);
        JS_SetPropertyStr(ctx, val, "ROUND", __item);
    }

    int status = JS_SetModuleExport(ctx, m, "PenJoin", val);
    assert(status != -1);
}

static void register_enum_Ozone_PenCap(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "PenCap");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewObject(ctx);

    // INVALID
    {
        JSValue __item = JS_NewInt32(ctx, -1);
        JS_SetPropertyStr(ctx, val, "INVALID", __item);
    }

    // ROUND
    {
        JSValue __item = JS_NewInt32(ctx, 130);
        JS_SetPropertyStr(ctx, val, "ROUND", __item);
    }

    // PROJECTING
    {
        JSValue __item = JS_NewInt32(ctx, 131);
        JS_SetPropertyStr(ctx, val, "PROJECTING", __item);
    }

    // BUTT
    {
        JSValue __item = JS_NewInt32(ctx, 132);
        JS_SetPropertyStr(ctx, val, "BUTT", __item);
    }

    int status = JS_SetModuleExport(ctx, m, "PenCap", val);
    assert(status != -1);
}

JSClassID classId_Ozone_PenInfo;

// Ozone::PenInfo::PenInfo
static JSValue callback_method_Ozone_PenInfo_PenInfo(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 3)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsInt32(argv[2]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // explicit PenInfo(const ::Ozone::Color& colour, int width, ::Ozone::PenStyle style)
overload0:
    {
        Ozone::Color* colour_instance = (Ozone::Color*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *colour_instance;

        int width;
        int32_t _width;
        if (JS_ToInt32(ctx, &_width, argv[1]))
            return JS_EXCEPTION;
        width = (int)_width;
        auto __arg1 = width;

        int style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[2]))
            return JS_EXCEPTION;
        style = (int)_style;
        auto __arg2 = (::Ozone::PenStyle)style;

        instance = new Ozone::PenInfo(__arg0, __arg1, __arg2);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_PenInfo);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_PenInfo);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::PenInfo::GetWidth
static JSValue callback_method_Ozone_PenInfo_GetWidth(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetWidth();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::PenInfo::GetColour
static JSValue callback_method_Ozone_PenInfo_GetColour(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    ::Ozone::Color __ret = instance->GetColour();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

    return ____ret;
}

// Ozone::PenInfo::GetStyle
static JSValue callback_method_Ozone_PenInfo_GetStyle(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    ::Ozone::PenStyle __ret = instance->GetStyle();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::PenInfo::GetJoin
static JSValue callback_method_Ozone_PenInfo_GetJoin(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    ::Ozone::PenJoin __ret = instance->GetJoin();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::PenInfo::GetCap
static JSValue callback_method_Ozone_PenInfo_GetCap(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    ::Ozone::PenCap __ret = instance->GetCap();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::PenInfo::GetDashCount
static JSValue callback_method_Ozone_PenInfo_GetDashCount(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetDashCount();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::PenInfo::IsTransparent
static JSValue callback_method_Ozone_PenInfo_IsTransparent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->IsTransparent();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

static JSValue callback_class_Ozone_PenInfo_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "PenInfo");
}

void finalizer_Ozone_PenInfo(JSRuntime *rt, JSValue val)
{
    Ozone::PenInfo* instance = (Ozone::PenInfo*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_PenInfo
{
    "PenInfo",
    .finalizer = finalizer_Ozone_PenInfo
};

static JSCFunctionListEntry funcDef_Ozone_PenInfo[]
{
    JS_CFUNC_DEF("GetWidth", 0, callback_method_Ozone_PenInfo_GetWidth),
    JS_CFUNC_DEF("GetColour", 0, callback_method_Ozone_PenInfo_GetColour),
    JS_CFUNC_DEF("GetStyle", 0, callback_method_Ozone_PenInfo_GetStyle),
    JS_CFUNC_DEF("GetJoin", 0, callback_method_Ozone_PenInfo_GetJoin),
    JS_CFUNC_DEF("GetCap", 0, callback_method_Ozone_PenInfo_GetCap),
    JS_CFUNC_DEF("GetDashCount", 0, callback_method_Ozone_PenInfo_GetDashCount),
    JS_CFUNC_DEF("IsTransparent", 0, callback_method_Ozone_PenInfo_IsTransparent),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_PenInfo_toString),
};

static void register_class_Ozone_PenInfo(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "PenInfo");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_PenInfo);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_PenInfo, &classDef_Ozone_PenInfo);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_PenInfo, sizeof(funcDef_Ozone_PenInfo) / sizeof(funcDef_Ozone_PenInfo[0]));
        JS_SetClassProto(ctx, classId_Ozone_PenInfo, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_PenInfo_PenInfo, "PenInfo", 3, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "PenInfo", ctor);
    }
}

JSClassID classId_Ozone_Pen;

// Ozone::Pen::Pen
static JSValue callback_method_Ozone_Pen_Pen(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 3)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance;

    if (argc == 0)
        goto overload0;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload2;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsInt32(argv[2]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // Pen()
overload0:
    {
        instance = new Ozone::Pen();

        goto wrap;
    }

    // Pen(const ::Ozone::Color& colour, int width, ::Ozone::PenStyle style)
overload1:
    {
        Ozone::Color* colour_instance = (Ozone::Color*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *colour_instance;

        int width;
        int32_t _width;
        if (JS_ToInt32(ctx, &_width, argv[1]))
            return JS_EXCEPTION;
        width = (int)_width;
        auto __arg1 = width;

        int style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[2]))
            return JS_EXCEPTION;
        style = (int)_style;
        auto __arg2 = (::Ozone::PenStyle)style;

        instance = new Ozone::Pen(__arg0, __arg1, __arg2);

        goto wrap;
    }

    // Pen(const ::Ozone::PenInfo& info)
overload2:
    {
        Ozone::PenInfo* info_instance = (Ozone::PenInfo*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_PenInfo, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *info_instance;

        instance = new Ozone::Pen(__arg0);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_Pen);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_Pen);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::Pen::operator==
static JSValue callback_method_Ozone_Pen_operator_EqualEqual(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool operator==(const ::Ozone::Pen& pen) const
overload0:
    {
        Ozone::Pen* pen_instance = (Ozone::Pen*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Pen, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *pen_instance;

        bool __ret = instance->operator==(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Pen::operator!=
static JSValue callback_method_Ozone_Pen_operator_ExclaimEqual(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool operator!=(const ::Ozone::Pen& pen) const
overload0:
    {
        Ozone::Pen* pen_instance = (Ozone::Pen*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Pen, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *pen_instance;

        bool __ret = instance->operator!=(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Pen::SetColour
static JSValue callback_method_Ozone_Pen_SetColour(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 3)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    if (JS_IsUInt8(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsUInt8(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsUInt8(argv[2]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetColour(const ::Ozone::Color& colour)
overload0:
    {
        Ozone::Color* colour_instance = (Ozone::Color*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *colour_instance;

        instance->SetColour(__arg0);


        return JS_UNDEFINED;
    }

    // void SetColour(unsigned char red, unsigned char green, unsigned char blue)
overload1:
    {
        unsigned char red;
        int32_t _red;
        if (JS_ToInt32(ctx, &_red, argv[0]))
            return JS_EXCEPTION;
        red = (unsigned char)_red;
        auto __arg0 = red;

        unsigned char green;
        int32_t _green;
        if (JS_ToInt32(ctx, &_green, argv[1]))
            return JS_EXCEPTION;
        green = (unsigned char)_green;
        auto __arg1 = green;

        unsigned char blue;
        int32_t _blue;
        if (JS_ToInt32(ctx, &_blue, argv[2]))
            return JS_EXCEPTION;
        blue = (unsigned char)_blue;
        auto __arg2 = blue;

        instance->SetColour(__arg0, __arg1, __arg2);

        return JS_UNDEFINED;
    }
}

// Ozone::Pen::SetCap
static JSValue callback_method_Ozone_Pen_SetCap(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetCap(::Ozone::PenCap capStyle)
overload0:
    {
        int capStyle;
        int32_t _capStyle;
        if (JS_ToInt32(ctx, &_capStyle, argv[0]))
            return JS_EXCEPTION;
        capStyle = (int)_capStyle;
        auto __arg0 = (::Ozone::PenCap)capStyle;

        instance->SetCap(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Pen::SetJoin
static JSValue callback_method_Ozone_Pen_SetJoin(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetJoin(::Ozone::PenJoin joinStyle)
overload0:
    {
        int joinStyle;
        int32_t _joinStyle;
        if (JS_ToInt32(ctx, &_joinStyle, argv[0]))
            return JS_EXCEPTION;
        joinStyle = (int)_joinStyle;
        auto __arg0 = (::Ozone::PenJoin)joinStyle;

        instance->SetJoin(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Pen::SetStyle
static JSValue callback_method_Ozone_Pen_SetStyle(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetStyle(::Ozone::PenStyle style)
overload0:
    {
        int style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[0]))
            return JS_EXCEPTION;
        style = (int)_style;
        auto __arg0 = (::Ozone::PenStyle)style;

        instance->SetStyle(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Pen::SetWidth
static JSValue callback_method_Ozone_Pen_SetWidth(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetWidth(int width)
overload0:
    {
        int width;
        int32_t _width;
        if (JS_ToInt32(ctx, &_width, argv[0]))
            return JS_EXCEPTION;
        width = (int)_width;
        auto __arg0 = width;

        instance->SetWidth(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Pen::GetColour
static JSValue callback_method_Ozone_Pen_GetColour(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    ::Ozone::Color __ret = instance->GetColour();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

    return ____ret;
}

// Ozone::Pen::GetCap
static JSValue callback_method_Ozone_Pen_GetCap(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    ::Ozone::PenCap __ret = instance->GetCap();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::Pen::GetJoin
static JSValue callback_method_Ozone_Pen_GetJoin(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    ::Ozone::PenJoin __ret = instance->GetJoin();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::Pen::GetStyle
static JSValue callback_method_Ozone_Pen_GetStyle(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    ::Ozone::PenStyle __ret = instance->GetStyle();

    JSValue ____ret = JS_NewInt32(ctx, (int32_t) __ret);

    return ____ret;
}

// Ozone::Pen::GetWidth
static JSValue callback_method_Ozone_Pen_GetWidth(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetWidth();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::Pen::GetDashCount
static JSValue callback_method_Ozone_Pen_GetDashCount(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetDashCount();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::Pen::IsTransparent
static JSValue callback_method_Ozone_Pen_IsTransparent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->IsTransparent();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

// Ozone::Pen::IsNonTransparent
static JSValue callback_method_Ozone_Pen_IsNonTransparent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->IsNonTransparent();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

static JSValue callback_class_Ozone_Pen_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "Pen");
}

void finalizer_Ozone_Pen(JSRuntime *rt, JSValue val)
{
    Ozone::Pen* instance = (Ozone::Pen*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_Pen
{
    "Pen",
    .finalizer = finalizer_Ozone_Pen
};

static JSCFunctionListEntry funcDef_Ozone_Pen[]
{
    JS_CFUNC_DEF("operator==", 1, callback_method_Ozone_Pen_operator_EqualEqual),
    JS_CFUNC_DEF("operator!=", 1, callback_method_Ozone_Pen_operator_ExclaimEqual),
    JS_CFUNC_DEF("SetColour", 3, callback_method_Ozone_Pen_SetColour),
    JS_CFUNC_DEF("SetCap", 1, callback_method_Ozone_Pen_SetCap),
    JS_CFUNC_DEF("SetJoin", 1, callback_method_Ozone_Pen_SetJoin),
    JS_CFUNC_DEF("SetStyle", 1, callback_method_Ozone_Pen_SetStyle),
    JS_CFUNC_DEF("SetWidth", 1, callback_method_Ozone_Pen_SetWidth),
    JS_CFUNC_DEF("GetColour", 0, callback_method_Ozone_Pen_GetColour),
    JS_CFUNC_DEF("GetCap", 0, callback_method_Ozone_Pen_GetCap),
    JS_CFUNC_DEF("GetJoin", 0, callback_method_Ozone_Pen_GetJoin),
    JS_CFUNC_DEF("GetStyle", 0, callback_method_Ozone_Pen_GetStyle),
    JS_CFUNC_DEF("GetWidth", 0, callback_method_Ozone_Pen_GetWidth),
    JS_CFUNC_DEF("GetDashCount", 0, callback_method_Ozone_Pen_GetDashCount),
    JS_CFUNC_DEF("IsTransparent", 0, callback_method_Ozone_Pen_IsTransparent),
    JS_CFUNC_DEF("IsNonTransparent", 0, callback_method_Ozone_Pen_IsNonTransparent),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_Pen_toString),
};

static void register_class_Ozone_Pen(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "Pen");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_Pen);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_Pen, &classDef_Ozone_Pen);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_Pen, sizeof(funcDef_Ozone_Pen) / sizeof(funcDef_Ozone_Pen[0]));
        JS_SetClassProto(ctx, classId_Ozone_Pen, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_Pen_Pen, "Pen", 3, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "Pen", ctor);
    }
}

JSClassID classId_Ozone_PenList;

// Ozone::PenList::PenList
static JSValue callback_method_Ozone_PenList_PenList(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenList* instance;

    instance = new Ozone::PenList();
    goto wrap;

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_PenList);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_PenList);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::PenList::FindOrCreatePen
static JSValue callback_method_Ozone_PenList_FindOrCreatePen(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 3)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::PenList* instance = (Ozone::PenList*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsInt32(argv[2]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // ::Ozone::Pen* FindOrCreatePen(const ::Ozone::Color& colour, int width, ::Ozone::PenStyle style)
overload0:
    {
        Ozone::Color* colour_instance = (Ozone::Color*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Color, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *colour_instance;

        int width;
        int32_t _width;
        if (JS_ToInt32(ctx, &_width, argv[1]))
            return JS_EXCEPTION;
        width = (int)_width;
        auto __arg1 = width;

        int style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[2]))
            return JS_EXCEPTION;
        style = (int)_style;
        auto __arg2 = (::Ozone::PenStyle)style;

        ::Ozone::Pen* __ret = instance->FindOrCreatePen(__arg0, __arg1, __arg2);

        JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Pen, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) __ret);

        return ____ret;
    }
}

static JSValue callback_class_Ozone_PenList_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "PenList");
}

void finalizer_Ozone_PenList(JSRuntime *rt, JSValue val)
{
    Ozone::PenList* instance = (Ozone::PenList*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_PenList
{
    "PenList",
    .finalizer = finalizer_Ozone_PenList
};

static JSCFunctionListEntry funcDef_Ozone_PenList[]
{
    JS_CFUNC_DEF("FindOrCreatePen", 3, callback_method_Ozone_PenList_FindOrCreatePen),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_PenList_toString),
};

static void register_class_Ozone_PenList(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "PenList");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_PenList);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_PenList, &classDef_Ozone_PenList);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_PenList, sizeof(funcDef_Ozone_PenList) / sizeof(funcDef_Ozone_PenList[0]));
        JS_SetClassProto(ctx, classId_Ozone_PenList, proto);

    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_PenList);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_GDIObjListBase);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

void register_ozone_pen(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (phase == 0)
    {
        register_enum_Ozone_PenStyle(ctx, m, set);

        register_enum_Ozone_PenJoin(ctx, m, set);

        register_enum_Ozone_PenCap(ctx, m, set);
    }

    register_class_Ozone_PenInfo(ctx, m, set, phase);

    register_class_Ozone_Pen(ctx, m, set, phase);

    register_class_Ozone_PenList(ctx, m, set, phase);
}

} // extern "C"
