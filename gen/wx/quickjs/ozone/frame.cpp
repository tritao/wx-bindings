// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/frame.h>

extern "C" {

extern JSClassID classId_Ozone_Frame;
extern JSClassID classId_Ozone_CloseEvent;
extern JSClassID classId_Ozone_IconizeEvent;
extern JSClassID classId_Ozone_MenuEvent;
extern JSClassID classId_Ozone_TopLevelWindow;
extern JSClassID classId_Ozone_Window;
extern JSClassID classId_Ozone_Point;
extern JSClassID classId_Ozone_Size;
extern JSClassID classId_Ozone_IdleEvent;
extern JSClassID classId__Signal;

static void register_enum_Ozone_FrameFlags(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "FrameFlags");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewObject(ctx);

    // CENTRE
    {
        JSValue __item = JS_NewInt32(ctx, 1);
        JS_SetPropertyStr(ctx, val, "CENTRE", __item);
    }

    // FRAME_NO_TASKBAR
    {
        JSValue __item = JS_NewInt32(ctx, 2);
        JS_SetPropertyStr(ctx, val, "FRAME_NO_TASKBAR", __item);
    }

    // FRAME_TOOL_WINDOW
    {
        JSValue __item = JS_NewInt32(ctx, 4);
        JS_SetPropertyStr(ctx, val, "FRAME_TOOL_WINDOW", __item);
    }

    // FRAME_FLOAT_ON_PARENT
    {
        JSValue __item = JS_NewInt32(ctx, 8);
        JS_SetPropertyStr(ctx, val, "FRAME_FLOAT_ON_PARENT", __item);
    }

    int status = JS_SetModuleExport(ctx, m, "FrameFlags", val);
    assert(status != -1);
}

JSClassID classId_Ozone_Frame;

struct data_Ozone_Frame : public JS_Interop_ClassData
{
    void event_invoke_OnClose(::Ozone::CloseEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 38);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_CloseEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnIconize(::Ozone::IconizeEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 39);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_IconizeEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnMenuOpen(::Ozone::MenuEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 40);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_MenuEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnMenuClose(::Ozone::MenuEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 41);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_MenuEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnMenuHighlight(::Ozone::MenuEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 42);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_MenuEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }

    void event_invoke_OnMenuHighlightAll(::Ozone::MenuEvent& arg0)
    {
        JSValue event = JS_Interop_FindEvent(&events, 43);
        if (JS_IsUndefined(event))
            return;

        JSValue __arg0 = JS_Interop_CreateFromInstance(ctx, classId_Ozone_MenuEvent, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &arg0);
        JSValueConst argv[] = { __arg0 };
        auto data = (JS_SignalContext*) JS_GetOpaque(event, 0);
        JSValue ret = JS_Call(ctx, data->function, JS_UNDEFINED, 1, argv);
        JS_FreeValue(ctx, ret);
    }
};

JSValue callback_event_getter_Ozone_Frame_OnClose(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 38);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 38, JS_DupValue(ctx, __obj));

    ((Ozone::Frame*)data->instance)->OnClose.bind(data, &data_Ozone_Frame::event_invoke_OnClose);

    return __obj;
}

JSValue callback_event_getter_Ozone_Frame_OnIconize(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 39);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 39, JS_DupValue(ctx, __obj));

    ((Ozone::Frame*)data->instance)->OnIconize.bind(data, &data_Ozone_Frame::event_invoke_OnIconize);

    return __obj;
}

JSValue callback_event_getter_Ozone_Frame_OnMenuOpen(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 40);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 40, JS_DupValue(ctx, __obj));

    ((Ozone::Frame*)data->instance)->OnMenuOpen.bind(data, &data_Ozone_Frame::event_invoke_OnMenuOpen);

    return __obj;
}

JSValue callback_event_getter_Ozone_Frame_OnMenuClose(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 41);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 41, JS_DupValue(ctx, __obj));

    ((Ozone::Frame*)data->instance)->OnMenuClose.bind(data, &data_Ozone_Frame::event_invoke_OnMenuClose);

    return __obj;
}

JSValue callback_event_getter_Ozone_Frame_OnMenuHighlight(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 42);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 42, JS_DupValue(ctx, __obj));

    ((Ozone::Frame*)data->instance)->OnMenuHighlight.bind(data, &data_Ozone_Frame::event_invoke_OnMenuHighlight);

    return __obj;
}

JSValue callback_event_getter_Ozone_Frame_OnMenuHighlightAll(JSContext *ctx, JSValueConst this_val)
{
    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    if (data == nullptr)
        return JS_ThrowTypeError(ctx, "Could not find object instance");

    JSValue event = JS_Interop_FindEvent(&data->events, 43);
    if (!JS_IsUndefined(event))
        return JS_DupValue(ctx, event);

    JSValue signalProto = JS_GetClassProto(ctx, classId__Signal);
    JSValue signalCtor = JS_GetProperty(ctx, signalProto, JS_ATOM_constructor);
    JSValue argv[] = { this_val };
    JSValue __obj = JS_CallConstructor(ctx, signalCtor, 1, argv);
    JS_FreeValue(ctx, signalCtor);
    JS_FreeValue(ctx, signalProto);

    JS_Interop_InsertEvent(&data->events, 43, JS_DupValue(ctx, __obj));

    ((Ozone::Frame*)data->instance)->OnMenuHighlightAll.bind(data, &data_Ozone_Frame::event_invoke_OnMenuHighlightAll);

    return __obj;
}

// Ozone::Frame::Frame
static JSValue callback_method_Ozone_Frame_Frame(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 7)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    Ozone::Frame* instance;

    if (argc == 0)
        goto overload0;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]) || JS_IsNull(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsObject(argv[3]) || JS_IsNull(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsObject(argv[4]) || JS_IsNull(argv[4]))
        goto typecheck5;

    goto error;

typecheck5:
    if (JS_IsInt32(argv[5]))
        goto typecheck6;

    goto error;

typecheck6:
    if (JS_IsString(argv[6]) || JS_IsNull(argv[6]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // Frame()
overload0:
    {
        instance = new Ozone::Frame();

        goto wrap;
    }

    // Frame(::Ozone::Window* parent, int id, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, ::Ozone::FrameStyle style, const char* name)
overload1:
    {
        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = parent_instance;

        int id;
        int32_t _id;
        if (JS_ToInt32(ctx, &_id, argv[1]))
            return JS_EXCEPTION;
        id = (int)_id;
        auto __arg1 = id;

        const char* title;
        title = JS_ToCString(ctx, argv[2]);
        if (!title)
            return JS_EXCEPTION;
        auto __arg2 = title;

        Ozone::Point* pos_instance = (Ozone::Point*) JS_Interop_GetInstance(argv[3], \
            classId_Ozone_Point, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg3 = *pos_instance;

        Ozone::Size* size_instance = (Ozone::Size*) JS_Interop_GetInstance(argv[4], \
            classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg4 = *size_instance;

        int style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[5]))
            return JS_EXCEPTION;
        style = (int)_style;
        auto __arg5 = (::Ozone::FrameStyle)style;

        const char* name;
        name = JS_ToCString(ctx, argv[6]);
        if (!name)
            return JS_EXCEPTION;
        auto __arg6 = name;

        instance = new Ozone::Frame(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6);

        JS_FreeCString(ctx, title);
        JS_FreeCString(ctx, name);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_Frame);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_Frame);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::Frame::Create
static JSValue callback_method_Ozone_Frame_Create(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 7)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]) || JS_IsNull(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsObject(argv[3]) || JS_IsNull(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsObject(argv[4]) || JS_IsNull(argv[4]))
        goto typecheck5;

    goto error;

typecheck5:
    if (JS_IsInt32(argv[5]))
        goto typecheck6;

    goto error;

typecheck6:
    if (JS_IsString(argv[6]) || JS_IsNull(argv[6]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool Create(::Ozone::Window* parent, int id, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
overload0:
    {
        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = parent_instance;

        int id;
        int32_t _id;
        if (JS_ToInt32(ctx, &_id, argv[1]))
            return JS_EXCEPTION;
        id = (int)_id;
        auto __arg1 = id;

        const char* title;
        title = JS_ToCString(ctx, argv[2]);
        if (!title)
            return JS_EXCEPTION;
        auto __arg2 = title;

        Ozone::Point* pos_instance = (Ozone::Point*) JS_Interop_GetInstance(argv[3], \
            classId_Ozone_Point, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg3 = *pos_instance;

        Ozone::Size* size_instance = (Ozone::Size*) JS_Interop_GetInstance(argv[4], \
            classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg4 = *size_instance;

        long style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[5]))
            return JS_EXCEPTION;
        style = (long)_style;
        auto __arg5 = style;

        const char* name;
        name = JS_ToCString(ctx, argv[6]);
        if (!name)
            return JS_EXCEPTION;
        auto __arg6 = name;

        bool __ret = instance->Create(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6);

        JS_FreeCString(ctx, title);
        JS_FreeCString(ctx, name);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Frame::ShowFullScreen
static JSValue callback_method_Ozone_Frame_ShowFullScreen(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsBool(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool ShowFullScreen(bool show, long style) override
overload0:
    {
        bool show;
        show = JS_ToBool(ctx, argv[0]);
        if (show == -1)
            return JS_EXCEPTION;
        auto __arg0 = show;

        long style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[1]))
            return JS_EXCEPTION;
        style = (long)_style;
        auto __arg1 = style;

        bool __ret = instance->ShowFullScreen(__arg0, __arg1);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Frame::GetClientAreaOrigin
static JSValue callback_method_Ozone_Frame_GetClientAreaOrigin(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    ::Ozone::Point __ret = instance->GetClientAreaOrigin();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Point, JS_INTEROP_INSTANCE_RAW_POINTER, (void*) &__ret);

    return ____ret;
}

// Ozone::Frame::SendIdleEvents
static JSValue callback_method_Ozone_Frame_SendIdleEvents(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool SendIdleEvents(::Ozone::IdleEvent& event) override
overload0:
    {
        Ozone::IdleEvent* event_instance = (Ozone::IdleEvent*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_IdleEvent, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg0 = *event_instance;

        bool __ret = instance->SendIdleEvents(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Frame::New
static JSValue callback_method_Ozone_Frame_New(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 7)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]) || JS_IsNull(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsObject(argv[3]) || JS_IsNull(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsObject(argv[4]) || JS_IsNull(argv[4]))
        goto typecheck5;

    goto error;

typecheck5:
    if (JS_IsInt32(argv[5]))
        goto typecheck6;

    goto error;

typecheck6:
    if (JS_IsString(argv[6]) || JS_IsNull(argv[6]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // ::Ozone::Frame* New(::Ozone::Window* parent, int winid, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
overload0:
    {
        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = parent_instance;

        int winid;
        int32_t _winid;
        if (JS_ToInt32(ctx, &_winid, argv[1]))
            return JS_EXCEPTION;
        winid = (int)_winid;
        auto __arg1 = winid;

        const char* title;
        title = JS_ToCString(ctx, argv[2]);
        if (!title)
            return JS_EXCEPTION;
        auto __arg2 = title;

        Ozone::Point* pos_instance = (Ozone::Point*) JS_Interop_GetInstance(argv[3], \
            classId_Ozone_Point, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg3 = *pos_instance;

        Ozone::Size* size_instance = (Ozone::Size*) JS_Interop_GetInstance(argv[4], \
            classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg4 = *size_instance;

        long style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[5]))
            return JS_EXCEPTION;
        style = (long)_style;
        auto __arg5 = style;

        const char* name;
        name = JS_ToCString(ctx, argv[6]);
        if (!name)
            return JS_EXCEPTION;
        auto __arg6 = name;

        ::Ozone::Frame* __ret = instance->New(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6);

        JS_FreeCString(ctx, title);
        JS_FreeCString(ctx, name);

        JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Frame, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT, (void*) __ret);

        return ____ret;
    }
}

// Ozone::Frame::ProcessCommand
static JSValue callback_method_Ozone_Frame_ProcessCommand(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool ProcessCommand(int winid)
overload0:
    {
        int winid;
        int32_t _winid;
        if (JS_ToInt32(ctx, &_winid, argv[0]))
            return JS_EXCEPTION;
        winid = (int)_winid;
        auto __arg0 = winid;

        bool __ret = instance->ProcessCommand(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::Frame::SetStatusText
static JSValue callback_method_Ozone_Frame_SetStatusText(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetStatusText(const char* text, int number)
overload0:
    {
        const char* text;
        text = JS_ToCString(ctx, argv[0]);
        if (!text)
            return JS_EXCEPTION;
        auto __arg0 = text;

        int number;
        int32_t _number;
        if (JS_ToInt32(ctx, &_number, argv[1]))
            return JS_EXCEPTION;
        number = (int)_number;
        auto __arg1 = number;

        instance->SetStatusText(__arg0, __arg1);

        JS_FreeCString(ctx, text);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::SetStatusWidths
static JSValue callback_method_Ozone_Frame_SetStatusWidths(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsInt32(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsArray(ctx, argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetStatusWidths(int n, int widths_field[])
overload0:
    {
        int n;
        int32_t _n;
        if (JS_ToInt32(ctx, &_n, argv[0]))
            return JS_EXCEPTION;
        n = (int)_n;
        auto __arg0 = n;

        auto __arg1 = nullptr;

        instance->SetStatusWidths(__arg0, __arg1);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::PushStatusText
static JSValue callback_method_Ozone_Frame_PushStatusText(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsInt32(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void PushStatusText(const char* text, int number)
overload0:
    {
        const char* text;
        text = JS_ToCString(ctx, argv[0]);
        if (!text)
            return JS_EXCEPTION;
        auto __arg0 = text;

        int number;
        int32_t _number;
        if (JS_ToInt32(ctx, &_number, argv[1]))
            return JS_EXCEPTION;
        number = (int)_number;
        auto __arg1 = number;

        instance->PushStatusText(__arg0, __arg1);

        JS_FreeCString(ctx, text);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::PopStatusText
static JSValue callback_method_Ozone_Frame_PopStatusText(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void PopStatusText(int number)
overload0:
    {
        int number;
        int32_t _number;
        if (JS_ToInt32(ctx, &_number, argv[0]))
            return JS_EXCEPTION;
        number = (int)_number;
        auto __arg0 = number;

        instance->PopStatusText(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::SetStatusBarPane
static JSValue callback_method_Ozone_Frame_SetStatusBarPane(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetStatusBarPane(int n)
overload0:
    {
        int n;
        int32_t _n;
        if (JS_ToInt32(ctx, &_n, argv[0]))
            return JS_EXCEPTION;
        n = (int)_n;
        auto __arg0 = n;

        instance->SetStatusBarPane(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::GetStatusBarPane
static JSValue callback_method_Ozone_Frame_GetStatusBarPane(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    int __ret = instance->GetStatusBarPane();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::Frame::UpdateWindowUI
static JSValue callback_method_Ozone_Frame_UpdateWindowUI(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsInt32(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void UpdateWindowUI(long flags) override
overload0:
    {
        long flags;
        int32_t _flags;
        if (JS_ToInt32(ctx, &_flags, argv[0]))
            return JS_EXCEPTION;
        flags = (long)_flags;
        auto __arg0 = flags;

        instance->UpdateWindowUI(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::OnInternalIdle
static JSValue callback_method_Ozone_Frame_OnInternalIdle(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    instance->OnInternalIdle();

    return JS_UNDEFINED;
}

// Ozone::Frame::DoGiveHelp
static JSValue callback_method_Ozone_Frame_DoGiveHelp(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 2)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsString(argv[0]) || JS_IsNull(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsBool(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void DoGiveHelp(const char* text, bool show)
overload0:
    {
        const char* text;
        text = JS_ToCString(ctx, argv[0]);
        if (!text)
            return JS_EXCEPTION;
        auto __arg0 = text;

        bool show;
        show = JS_ToBool(ctx, argv[1]);
        if (show == -1)
            return JS_EXCEPTION;
        auto __arg1 = show;

        instance->DoGiveHelp(__arg0, __arg1);

        JS_FreeCString(ctx, text);

        return JS_UNDEFINED;
    }
}

// Ozone::Frame::IsClientAreaChild
static JSValue callback_method_Ozone_Frame_IsClientAreaChild(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc != 1)
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");

    auto data = (data_Ozone_Frame*) JS_GetOpaque(this_val, 0);
    Ozone::Frame* instance = (Ozone::Frame*) data->instance;

    if (JS_IsObject(argv[0]) || JS_IsNull(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool IsClientAreaChild(const ::Ozone::Window* child) const override
overload0:
    {
        Ozone::Window* child_instance = (Ozone::Window*) JS_Interop_GetInstance(argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = child_instance;

        bool __ret = instance->IsClientAreaChild(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

static JSValue callback_class_Ozone_Frame_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "Frame");
}

void finalizer_Ozone_Frame(JSRuntime *rt, JSValue val)
{
    JS_Interop_CleanupObject(val, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
}

static JSClassDef classDef_Ozone_Frame
{
    "Frame",
    .finalizer = finalizer_Ozone_Frame
};

static JSCFunctionListEntry funcDef_Ozone_Frame[]
{
    JS_CGETSET_DEF("OnClose", callback_event_getter_Ozone_Frame_OnClose, NULL),
    JS_CGETSET_DEF("OnIconize", callback_event_getter_Ozone_Frame_OnIconize, NULL),
    JS_CGETSET_DEF("OnMenuOpen", callback_event_getter_Ozone_Frame_OnMenuOpen, NULL),
    JS_CGETSET_DEF("OnMenuClose", callback_event_getter_Ozone_Frame_OnMenuClose, NULL),
    JS_CGETSET_DEF("OnMenuHighlight", callback_event_getter_Ozone_Frame_OnMenuHighlight, NULL),
    JS_CGETSET_DEF("OnMenuHighlightAll", callback_event_getter_Ozone_Frame_OnMenuHighlightAll, NULL),
    JS_CFUNC_DEF("Create", 7, callback_method_Ozone_Frame_Create),
    JS_CFUNC_DEF("ShowFullScreen", 2, callback_method_Ozone_Frame_ShowFullScreen),
    JS_CFUNC_DEF("GetClientAreaOrigin", 0, callback_method_Ozone_Frame_GetClientAreaOrigin),
    JS_CFUNC_DEF("SendIdleEvents", 1, callback_method_Ozone_Frame_SendIdleEvents),
    JS_CFUNC_DEF("New", 7, callback_method_Ozone_Frame_New),
    JS_CFUNC_DEF("ProcessCommand", 1, callback_method_Ozone_Frame_ProcessCommand),
    JS_CFUNC_DEF("SetStatusText", 2, callback_method_Ozone_Frame_SetStatusText),
    JS_CFUNC_DEF("SetStatusWidths", 2, callback_method_Ozone_Frame_SetStatusWidths),
    JS_CFUNC_DEF("PushStatusText", 2, callback_method_Ozone_Frame_PushStatusText),
    JS_CFUNC_DEF("PopStatusText", 1, callback_method_Ozone_Frame_PopStatusText),
    JS_CFUNC_DEF("SetStatusBarPane", 1, callback_method_Ozone_Frame_SetStatusBarPane),
    JS_CFUNC_DEF("GetStatusBarPane", 0, callback_method_Ozone_Frame_GetStatusBarPane),
    JS_CFUNC_DEF("UpdateWindowUI", 1, callback_method_Ozone_Frame_UpdateWindowUI),
    JS_CFUNC_DEF("OnInternalIdle", 0, callback_method_Ozone_Frame_OnInternalIdle),
    JS_CFUNC_DEF("DoGiveHelp", 2, callback_method_Ozone_Frame_DoGiveHelp),
    JS_CFUNC_DEF("IsClientAreaChild", 1, callback_method_Ozone_Frame_IsClientAreaChild),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_Frame_toString),
};

static JSCFunctionListEntry funcDef_Ozone_Frame_statics[]
{
    JS_CGETSET_DEF("OnClose", callback_event_getter_Ozone_Frame_OnClose, NULL),
    JS_CGETSET_DEF("OnIconize", callback_event_getter_Ozone_Frame_OnIconize, NULL),
    JS_CGETSET_DEF("OnMenuOpen", callback_event_getter_Ozone_Frame_OnMenuOpen, NULL),
    JS_CGETSET_DEF("OnMenuClose", callback_event_getter_Ozone_Frame_OnMenuClose, NULL),
    JS_CGETSET_DEF("OnMenuHighlight", callback_event_getter_Ozone_Frame_OnMenuHighlight, NULL),
    JS_CGETSET_DEF("OnMenuHighlightAll", callback_event_getter_Ozone_Frame_OnMenuHighlightAll, NULL),
    JS_CFUNC_DEF("Create", 7, callback_method_Ozone_Frame_Create),
    JS_CFUNC_DEF("ShowFullScreen", 2, callback_method_Ozone_Frame_ShowFullScreen),
    JS_CFUNC_DEF("GetClientAreaOrigin", 0, callback_method_Ozone_Frame_GetClientAreaOrigin),
    JS_CFUNC_DEF("SendIdleEvents", 1, callback_method_Ozone_Frame_SendIdleEvents),
    JS_CFUNC_DEF("New", 7, callback_method_Ozone_Frame_New),
    JS_CFUNC_DEF("ProcessCommand", 1, callback_method_Ozone_Frame_ProcessCommand),
    JS_CFUNC_DEF("SetStatusText", 2, callback_method_Ozone_Frame_SetStatusText),
    JS_CFUNC_DEF("SetStatusWidths", 2, callback_method_Ozone_Frame_SetStatusWidths),
    JS_CFUNC_DEF("PushStatusText", 2, callback_method_Ozone_Frame_PushStatusText),
    JS_CFUNC_DEF("PopStatusText", 1, callback_method_Ozone_Frame_PopStatusText),
    JS_CFUNC_DEF("SetStatusBarPane", 1, callback_method_Ozone_Frame_SetStatusBarPane),
    JS_CFUNC_DEF("GetStatusBarPane", 0, callback_method_Ozone_Frame_GetStatusBarPane),
    JS_CFUNC_DEF("UpdateWindowUI", 1, callback_method_Ozone_Frame_UpdateWindowUI),
    JS_CFUNC_DEF("OnInternalIdle", 0, callback_method_Ozone_Frame_OnInternalIdle),
    JS_CFUNC_DEF("DoGiveHelp", 2, callback_method_Ozone_Frame_DoGiveHelp),
    JS_CFUNC_DEF("IsClientAreaChild", 1, callback_method_Ozone_Frame_IsClientAreaChild),
};

static void register_class_Ozone_Frame(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "Frame");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_Frame);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_Frame, &classDef_Ozone_Frame);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_Frame, countof(funcDef_Ozone_Frame));
        JS_SetClassProto(ctx, classId_Ozone_Frame, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_Frame_Frame, "Frame", 7, JS_CFUNC_constructor, 0);
        JS_SetPropertyFunctionList(ctx, ctor, funcDef_Ozone_Frame_statics, countof(funcDef_Ozone_Frame_statics));
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "Frame", ctor);
    }
    else if (phase == 1)
    {
        JSValue proto = JS_GetClassProto(ctx, classId_Ozone_Frame);
        JSValue baseProto = JS_GetClassProto(ctx, classId_Ozone_TopLevelWindow);
        int err = JS_SetPrototype(ctx, proto, baseProto);
        assert(err != -1);
        JS_FreeValue(ctx, baseProto);
        JS_FreeValue(ctx, proto);
    }
}

void register_ozone_frame(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (phase == 0)
    {
        register_enum_Ozone_FrameFlags(ctx, m, set);
    }

    register_class_Ozone_Frame(ctx, m, set, phase);
}

} // extern "C"
