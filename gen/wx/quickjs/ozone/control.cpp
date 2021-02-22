// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/control.h>

extern "C" {

extern JSClassID classId_Ozone_Control;
extern JSClassID classId_Ozone_ClipboardTextEvent;
extern JSClassID classId_Ozone_Window;
extern JSClassID classId_Ozone_VisualAttributes;
extern JSClassID classId_Ozone_CommandEvent;
extern JSClassID classId_Ozone_UpdateUIEvent;
extern JSClassID classId_Ozone_Size;
extern JSClassID classId_Ozone_DC;
extern JSClassID classId__Signal;

JSClassID classId_Ozone_Control;

struct data_Ozone_Control : public JS_Interop_ClassData
{
    void event_invoke_OnTextCopy(::Ozone::ClipboardTextEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 49);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_ClipboardTextEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnTextCut(::Ozone::ClipboardTextEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 50);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_ClipboardTextEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnTextPaste(::Ozone::ClipboardTextEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 51);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_ClipboardTextEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }
};

JSValue callback_event_getter_Ozone_Control_OnTextCopy(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 49);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 49, JS_DupValue(ctx, __obj));

    ((Ozone::Control*)data->instance)->OnTextCopy.bind(data, &data_Ozone_Control::event_invoke_OnTextCopy);

    return __obj;
}

JSValue callback_event_getter_Ozone_Control_OnTextCut(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 50);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 50, JS_DupValue(ctx, __obj));

    ((Ozone::Control*)data->instance)->OnTextCut.bind(data, &data_Ozone_Control::event_invoke_OnTextCut);

    return __obj;
}

JSValue callback_event_getter_Ozone_Control_OnTextPaste(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 51);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 51, JS_DupValue(ctx, __obj));

    ((Ozone::Control*)data->instance)->OnTextPaste.bind(data, &data_Ozone_Control::event_invoke_OnTextPaste);

    return __obj;
}

// Ozone::Control::Control
static JSValue callback_method_Ozone_Control_Control(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Control* instance;

    instance = new Ozone::Control();
    goto wrap;

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_Control);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_Control);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::Control::GetDefaultAttributes
static JSValue callback_method_Ozone_Control_GetDefaultAttributes(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    ::Ozone::VisualAttributes __ret = instance->GetDefaultAttributes();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_VisualAttributes, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

    return ____ret;
}

// Ozone::Control::GetAlignment
static JSValue callback_method_Ozone_Control_GetAlignment(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    int __ret = instance->GetAlignment();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::Control::SetLabel
static JSValue callback_method_Ozone_Control_SetLabel(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetLabel(const char* label) override
overload0:
    {
        const char* label;
        label = JS_ToCString(ctx, argv[0]);
        if (!label)
            return JS_EXCEPTION;
        auto __arg0 = label;

        instance->SetLabel(__arg0);

        JS_FreeCString(ctx, label);

        return JS_UNDEFINED;
    }
}

// Ozone::Control::GetLabel
static JSValue callback_method_Ozone_Control_GetLabel(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    const char* __ret = instance->GetLabel();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::Control::SetLabelText
static JSValue callback_method_Ozone_Control_SetLabelText(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetLabelText(const char* text)
overload0:
    {
        const char* text;
        text = JS_ToCString(ctx, argv[0]);
        if (!text)
            return JS_EXCEPTION;
        auto __arg0 = text;

        instance->SetLabelText(__arg0);

        JS_FreeCString(ctx, text);

        return JS_UNDEFINED;
    }
}

// Ozone::Control::GetLabelText
static JSValue callback_method_Ozone_Control_GetLabelText(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (argc == 0)
        goto overload0;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* GetLabelText() const
overload0:
    {
        const char* __ret = instance->GetLabelText();


        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }

    // char* GetLabelText(const char* label)
overload1:
    {
        const char* label;
        label = JS_ToCString(ctx, argv[0]);
        if (!label)
            return JS_EXCEPTION;
        auto __arg0 = label;

        const char* __ret = ::Ozone::Control::GetLabelText(__arg0);

        JS_FreeCString(ctx, label);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Control::SetLabelMarkup
static JSValue callback_method_Ozone_Control_SetLabelMarkup(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool SetLabelMarkup(const char* markup)
overload0:
    {
        const char* markup;
        markup = JS_ToCString(ctx, argv[0]);
        if (!markup)
            return JS_EXCEPTION;
        auto __arg0 = markup;

        bool __ret = instance->SetLabelMarkup(__arg0);

        JS_FreeCString(ctx, markup);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Control::ShouldInheritColours
static JSValue callback_method_Ozone_Control_ShouldInheritColours(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    bool __ret = instance->ShouldInheritColours();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

// Ozone::Control::Command
static JSValue callback_method_Ozone_Control_Command(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void Command(::Ozone::CommandEvent& event)
overload0:
    {
        Ozone::CommandEvent* event_instance = (Ozone::CommandEvent*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_CommandEvent, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *event_instance;

        instance->Command(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Control::DoUpdateWindowUI
static JSValue callback_method_Ozone_Control_DoUpdateWindowUI(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void DoUpdateWindowUI(::Ozone::UpdateUIEvent& event) override
overload0:
    {
        Ozone::UpdateUIEvent* event_instance = (Ozone::UpdateUIEvent*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_UpdateUIEvent, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *event_instance;

        instance->DoUpdateWindowUI(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Control::GetSizeFromTextSize
static JSValue callback_method_Ozone_Control_GetSizeFromTextSize(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Control*) JS_GetOpaque(this_val, 0);
    Ozone::Control* instance = (Ozone::Control*) data->instance;

    if (JS_IsInt32(argv[0]))
        goto typecheck1;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // ::Ozone::Size GetSizeFromTextSize(int xlen, int ylen) const
overload0:
    {
        int xlen;
        int32_t _xlen;
        if (JS_ToInt32(ctx, &_xlen, argv[0]))
            return JS_EXCEPTION;
        xlen = (int)_xlen;
        auto __arg0 = xlen;

        int ylen;
        int32_t _ylen;
        if (JS_ToInt32(ctx, &_ylen, argv[1]))
            return JS_EXCEPTION;
        ylen = (int)_ylen;
        auto __arg1 = ylen;

        ::Ozone::Size __ret = instance->GetSizeFromTextSize(__arg0, __arg1);


        JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

        return ____ret;
    }

    // ::Ozone::Size GetSizeFromTextSize(const ::Ozone::Size& tsize) const
overload1:
    {
        Ozone::Size* tsize_instance = (Ozone::Size*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *tsize_instance;

        ::Ozone::Size __ret = instance->GetSizeFromTextSize(__arg0);

        JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

        return ____ret;
    }
}

// Ozone::Control::RemoveMnemonics
static JSValue callback_method_Ozone_Control_RemoveMnemonics(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* RemoveMnemonics(const char* str)
overload0:
    {
        const char* str;
        str = JS_ToCString(ctx, argv[0]);
        if (!str)
            return JS_EXCEPTION;
        auto __arg0 = str;

        const char* __ret = ::Ozone::Control::RemoveMnemonics(__arg0);

        JS_FreeCString(ctx, str);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Control::EscapeMnemonics
static JSValue callback_method_Ozone_Control_EscapeMnemonics(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* EscapeMnemonics(const char* str)
overload0:
    {
        const char* str;
        str = JS_ToCString(ctx, argv[0]);
        if (!str)
            return JS_EXCEPTION;
        auto __arg0 = str;

        const char* __ret = ::Ozone::Control::EscapeMnemonics(__arg0);

        JS_FreeCString(ctx, str);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Control::Ellipsize
static JSValue callback_method_Ozone_Control_Ellipsize(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 5)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsObject(argv[1]) || JS_IsNull(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsInt32(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsInt32(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsInt32(argv[4]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* Ellipsize(const char* label, const ::Ozone::DC& dc, ::Ozone::EllipsizeMode mode, int maxWidth, int flags)
overload0:
    {
        const char* label;
        label = JS_ToCString(ctx, argv[0]);
        if (!label)
            return JS_EXCEPTION;
        auto __arg0 = label;

        Ozone::DC* dc_instance = (Ozone::DC*) JS_Interop_GetInstance(argv[1], \
            classId_Ozone_DC, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg1 = *dc_instance;

        unsigned int mode;
        uint32_t _mode;
        if (JS_ToUint32(ctx, &_mode, argv[2]))
            return JS_EXCEPTION;
        mode = (unsigned int)_mode;
        auto __arg2 = (::Ozone::EllipsizeMode)mode;

        int maxWidth;
        int32_t _maxWidth;
        if (JS_ToInt32(ctx, &_maxWidth, argv[3]))
            return JS_EXCEPTION;
        maxWidth = (int)_maxWidth;
        auto __arg3 = maxWidth;

        int flags;
        int32_t _flags;
        if (JS_ToInt32(ctx, &_flags, argv[4]))
            return JS_EXCEPTION;
        flags = (int)_flags;
        auto __arg4 = flags;

        const char* __ret = ::Ozone::Control::Ellipsize(__arg0, __arg1, __arg2, __arg3, __arg4);

        JS_FreeCString(ctx, label);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Control::FindAccelIndex
static JSValue callback_method_Ozone_Control_FindAccelIndex(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]) || JS_IsNull(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // int FindAccelIndex(const char* label, const char* labelOnly)
overload0:
    {
        const char* label;
        label = JS_ToCString(ctx, argv[0]);
        if (!label)
            return JS_EXCEPTION;
        auto __arg0 = label;

        const char* labelOnly;
        labelOnly = JS_ToCString(ctx, argv[1]);
        if (!labelOnly)
            return JS_EXCEPTION;
        auto __arg1 = labelOnly;

        int __ret = ::Ozone::Control::FindAccelIndex(__arg0, __arg1);

        JS_FreeCString(ctx, label);
        JS_FreeCString(ctx, labelOnly);

        JSValue ____ret = JS_NewInt32(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Control::GetCompositeControlsDefaultAttributes
static JSValue callback_method_Ozone_Control_GetCompositeControlsDefaultAttributes(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // ::Ozone::VisualAttributes GetCompositeControlsDefaultAttributes(::Ozone::WindowVariant variant)
overload0:
    {
        unsigned int variant;
        uint32_t _variant;
        if (JS_ToUint32(ctx, &_variant, argv[0]))
            return JS_EXCEPTION;
        variant = (unsigned int)_variant;
        auto __arg0 = (::Ozone::WindowVariant)variant;

        ::Ozone::VisualAttributes __ret = ::Ozone::Control::GetCompositeControlsDefaultAttributes(__arg0);

        JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_VisualAttributes, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

        return ____ret;
    }
}

static JSValue callback_class_Ozone_Control_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "Control");
}

void finalizer_Ozone_Control(JSRuntime *rt, JSValue val)
{
    JS_Interop_CleanupObject(val, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
}

static JSClassDef classDef_Ozone_Control
{
    "Control",
    .finalizer = finalizer_Ozone_Control
};

static JSCFunctionListEntry funcDef_Ozone_Control[]
{
    JS_CGETSET_DEF("OnTextCopy", callback_event_getter_Ozone_Control_OnTextCopy, NULL),
    JS_CGETSET_DEF("OnTextCut", callback_event_getter_Ozone_Control_OnTextCut, NULL),
    JS_CGETSET_DEF("OnTextPaste", callback_event_getter_Ozone_Control_OnTextPaste, NULL),
    JS_CFUNC_DEF("GetDefaultAttributes", 0, callback_method_Ozone_Control_GetDefaultAttributes),
    JS_CFUNC_DEF("GetAlignment", 0, callback_method_Ozone_Control_GetAlignment),
    JS_CFUNC_DEF("SetLabel", 1, callback_method_Ozone_Control_SetLabel),
    JS_CFUNC_DEF("GetLabel", 0, callback_method_Ozone_Control_GetLabel),
    JS_CFUNC_DEF("SetLabelText", 1, callback_method_Ozone_Control_SetLabelText),
    JS_CFUNC_DEF("GetLabelText", 1, callback_method_Ozone_Control_GetLabelText),
    JS_CFUNC_DEF("SetLabelMarkup", 1, callback_method_Ozone_Control_SetLabelMarkup),
    JS_CFUNC_DEF("ShouldInheritColours", 0, callback_method_Ozone_Control_ShouldInheritColours),
    JS_CFUNC_DEF("Command", 1, callback_method_Ozone_Control_Command),
    JS_CFUNC_DEF("DoUpdateWindowUI", 1, callback_method_Ozone_Control_DoUpdateWindowUI),
    JS_CFUNC_DEF("GetSizeFromTextSize", 2, callback_method_Ozone_Control_GetSizeFromTextSize),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_Control_toString),
};

static JSCFunctionListEntry funcDef_Ozone_Control_statics[]
{
    JS_CGETSET_DEF("OnTextCopy", callback_event_getter_Ozone_Control_OnTextCopy, NULL),
    JS_CGETSET_DEF("OnTextCut", callback_event_getter_Ozone_Control_OnTextCut, NULL),
    JS_CGETSET_DEF("OnTextPaste", callback_event_getter_Ozone_Control_OnTextPaste, NULL),
    JS_CFUNC_DEF("GetDefaultAttributes", 0, callback_method_Ozone_Control_GetDefaultAttributes),
    JS_CFUNC_DEF("GetAlignment", 0, callback_method_Ozone_Control_GetAlignment),
    JS_CFUNC_DEF("SetLabel", 1, callback_method_Ozone_Control_SetLabel),
    JS_CFUNC_DEF("GetLabel", 0, callback_method_Ozone_Control_GetLabel),
    JS_CFUNC_DEF("SetLabelText", 1, callback_method_Ozone_Control_SetLabelText),
    JS_CFUNC_DEF("GetLabelText", 1, callback_method_Ozone_Control_GetLabelText),
    JS_CFUNC_DEF("SetLabelMarkup", 1, callback_method_Ozone_Control_SetLabelMarkup),
    JS_CFUNC_DEF("ShouldInheritColours", 0, callback_method_Ozone_Control_ShouldInheritColours),
    JS_CFUNC_DEF("Command", 1, callback_method_Ozone_Control_Command),
    JS_CFUNC_DEF("DoUpdateWindowUI", 1, callback_method_Ozone_Control_DoUpdateWindowUI),
    JS_CFUNC_DEF("GetSizeFromTextSize", 2, callback_method_Ozone_Control_GetSizeFromTextSize),
    JS_CFUNC_DEF("RemoveMnemonics", 1, callback_method_Ozone_Control_RemoveMnemonics),
    JS_CFUNC_DEF("EscapeMnemonics", 1, callback_method_Ozone_Control_EscapeMnemonics),
    JS_CFUNC_DEF("Ellipsize", 5, callback_method_Ozone_Control_Ellipsize),
    JS_CFUNC_DEF("FindAccelIndex", 2, callback_method_Ozone_Control_FindAccelIndex),
    JS_CFUNC_DEF("GetCompositeControlsDefaultAttributes", 1, callback_method_Ozone_Control_GetCompositeControlsDefaultAttributes),
};

static void register_class_Ozone_Control(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "Control");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_Control);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_Control, &classDef_Ozone_Control);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_Control, countof(funcDef_Ozone_Control));
        JS_SetClassProto(ctx, classId_Ozone_Control, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_Control_Control, "Control", 1, JS_CFUNC_constructor, 0);
        JS_SetPropertyFunctionList(ctx, ctor, funcDef_Ozone_Control_statics, countof(funcDef_Ozone_Control_statics));
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "Control", ctor);
    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_Control);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_Window);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

void register_ozone_control(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    register_class_Ozone_Control(ctx, m, set, phase);
}

} // extern "C"