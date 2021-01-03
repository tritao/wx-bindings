// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include <CppSharp_QuickJS.h>
#include <assert.h>
#include <ozone/filedlg.h>

extern "C" {

extern JSClassID classId_Ozone_FileDialog;
extern JSClassID classId_Ozone_Window;
extern JSClassID classId_Ozone_Point;
extern JSClassID classId_Ozone_Size;
extern JSClassID classId__Signal;

static void register_enum_Ozone_FD(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "FD");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewObject(ctx);

    // FD_OPEN
    {
        JSValue __item = JS_NewUint32(ctx, 0x1);
        JS_SetPropertyStr(ctx, val, "FD_OPEN", __item);
    }

    // FD_SAVE
    {
        JSValue __item = JS_NewUint32(ctx, 0x2);
        JS_SetPropertyStr(ctx, val, "FD_SAVE", __item);
    }

    // FD_OVERWRITE_PROMPT
    {
        JSValue __item = JS_NewUint32(ctx, 0x4);
        JS_SetPropertyStr(ctx, val, "FD_OVERWRITE_PROMPT", __item);
    }

    // FD_NO_FOLLOW
    {
        JSValue __item = JS_NewUint32(ctx, 0x8);
        JS_SetPropertyStr(ctx, val, "FD_NO_FOLLOW", __item);
    }

    // FD_FILE_MUST_EXIST
    {
        JSValue __item = JS_NewUint32(ctx, 0x10);
        JS_SetPropertyStr(ctx, val, "FD_FILE_MUST_EXIST", __item);
    }

    // FD_CHANGE_DIR
    {
        JSValue __item = JS_NewUint32(ctx, 0x80);
        JS_SetPropertyStr(ctx, val, "FD_CHANGE_DIR", __item);
    }

    // FD_PREVIEW
    {
        JSValue __item = JS_NewUint32(ctx, 0x100);
        JS_SetPropertyStr(ctx, val, "FD_PREVIEW", __item);
    }

    // FD_MULTIPLE
    {
        JSValue __item = JS_NewUint32(ctx, 0x200);
        JS_SetPropertyStr(ctx, val, "FD_MULTIPLE", __item);
    }

    // FD_SHOW_HIDDEN
    {
        JSValue __item = JS_NewUint32(ctx, 0x400);
        JS_SetPropertyStr(ctx, val, "FD_SHOW_HIDDEN", __item);
    }

    int status = JS_SetModuleExport(ctx, m, "FD", val);
    assert(status != -1);
}

JSClassID classId_Ozone_FileDialog;

// Ozone::FileDialog::FileDialog
static JSValue callback_method_Ozone_FileDialog_FileDialog(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 9)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance;

    if (argc == 0)
        goto overload0;

    if (JS_IsObject(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsString(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsString(argv[4]))
        goto typecheck5;

    goto error;

typecheck5:
    if (JS_IsNumber(argv[5]))
        goto typecheck6;

    goto error;

typecheck6:
    if (JS_IsObject(argv[6]))
        goto typecheck7;

    goto error;

typecheck7:
    if (JS_IsObject(argv[7]))
        goto typecheck8;

    goto error;

typecheck8:
    if (JS_IsString(argv[8]))
        goto overload1;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // FileDialog()
overload0:
    {
        instance = new Ozone::FileDialog();

        goto wrap;
    }

    // FileDialog(::Ozone::Window* parent, const char* message, const char* defaultDir, const char* defaultFile, const char* wildCard, long style, const ::Ozone::Point& pos, const ::Ozone::Size& sz, const char* name)
overload1:
    {
        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance( argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = parent_instance;

        const char* message;
        message = JS_ToCString(ctx, argv[1]);
        if (!message)
            return JS_EXCEPTION;
        auto __arg1 = message;

        const char* defaultDir;
        defaultDir = JS_ToCString(ctx, argv[2]);
        if (!defaultDir)
            return JS_EXCEPTION;
        auto __arg2 = defaultDir;

        const char* defaultFile;
        defaultFile = JS_ToCString(ctx, argv[3]);
        if (!defaultFile)
            return JS_EXCEPTION;
        auto __arg3 = defaultFile;

        const char* wildCard;
        wildCard = JS_ToCString(ctx, argv[4]);
        if (!wildCard)
            return JS_EXCEPTION;
        auto __arg4 = wildCard;

        long style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[5]))
            return JS_EXCEPTION;
        style = (long)_style;
        auto __arg5 = style;

        Ozone::Point* pos_instance = (Ozone::Point*) JS_Interop_GetInstance( argv[6], \
            classId_Ozone_Point, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg6 = *pos_instance;

        Ozone::Size* sz_instance = (Ozone::Size*) JS_Interop_GetInstance( argv[7], \
            classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg7 = *sz_instance;

        const char* name;
        name = JS_ToCString(ctx, argv[8]);
        if (!name)
            return JS_EXCEPTION;
        auto __arg8 = name;

        instance = new Ozone::FileDialog(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7, __arg8);

        JS_FreeCString(ctx, message);
        JS_FreeCString(ctx, defaultDir);
        JS_FreeCString(ctx, defaultFile);
        JS_FreeCString(ctx, wildCard);
        JS_FreeCString(ctx, name);
        goto wrap;
    }

wrap:
    JSValue proto;
    if (JS_IsUndefined(this_val))
        proto = JS_GetClassProto(ctx, classId_Ozone_FileDialog);
    else
        proto = JS_GetProperty(ctx, this_val, JS_ATOM_prototype);

    if (JS_IsException(proto))
        return proto;

    JSValue __obj = JS_NewObjectProtoClass(ctx, proto, classId_Ozone_FileDialog);
    JS_FreeValue(ctx, proto);

    JS_Interop_InitObject(ctx, __obj, JS_INTEROP_INSTANCE_RAW_POINTER, instance);
    JSObject* __js_obj = JS_VALUE_GET_OBJ(__obj);
    instance->__ExternalInstance = (void*) __js_obj;


    return __obj;
}

// Ozone::FileDialog::Create
static JSValue callback_method_Ozone_FileDialog_Create(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 9 || argc > 9)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsObject(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsString(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsString(argv[4]))
        goto typecheck5;

    goto error;

typecheck5:
    if (JS_IsNumber(argv[5]))
        goto typecheck6;

    goto error;

typecheck6:
    if (JS_IsObject(argv[6]))
        goto typecheck7;

    goto error;

typecheck7:
    if (JS_IsObject(argv[7]))
        goto typecheck8;

    goto error;

typecheck8:
    if (JS_IsString(argv[8]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool Create(::Ozone::Window* parent, const char* message, const char* defaultDir, const char* defaultFile, const char* wildCard, long style, const ::Ozone::Point& pos, const ::Ozone::Size& sz, const char* name)
overload0:
    {
        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance( argv[0], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg0 = parent_instance;

        const char* message;
        message = JS_ToCString(ctx, argv[1]);
        if (!message)
            return JS_EXCEPTION;
        auto __arg1 = message;

        const char* defaultDir;
        defaultDir = JS_ToCString(ctx, argv[2]);
        if (!defaultDir)
            return JS_EXCEPTION;
        auto __arg2 = defaultDir;

        const char* defaultFile;
        defaultFile = JS_ToCString(ctx, argv[3]);
        if (!defaultFile)
            return JS_EXCEPTION;
        auto __arg3 = defaultFile;

        const char* wildCard;
        wildCard = JS_ToCString(ctx, argv[4]);
        if (!wildCard)
            return JS_EXCEPTION;
        auto __arg4 = wildCard;

        long style;
        int32_t _style;
        if (JS_ToInt32(ctx, &_style, argv[5]))
            return JS_EXCEPTION;
        style = (long)_style;
        auto __arg5 = style;

        Ozone::Point* pos_instance = (Ozone::Point*) JS_Interop_GetInstance( argv[6], \
            classId_Ozone_Point, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg6 = *pos_instance;

        Ozone::Size* sz_instance = (Ozone::Size*) JS_Interop_GetInstance( argv[7], \
            classId_Ozone_Size, JS_INTEROP_INSTANCE_RAW_POINTER);
        auto &__arg7 = *sz_instance;

        const char* name;
        name = JS_ToCString(ctx, argv[8]);
        if (!name)
            return JS_EXCEPTION;
        auto __arg8 = name;

        bool __ret = instance->Create(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7, __arg8);

        JS_FreeCString(ctx, message);
        JS_FreeCString(ctx, defaultDir);
        JS_FreeCString(ctx, defaultFile);
        JS_FreeCString(ctx, wildCard);
        JS_FreeCString(ctx, name);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::FileDialog::GetPath
static JSValue callback_method_Ozone_FileDialog_GetPath(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    const char* __ret = instance->GetPath();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetFilename
static JSValue callback_method_Ozone_FileDialog_GetFilename(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    const char* __ret = instance->GetFilename();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetFilterIndex
static JSValue callback_method_Ozone_FileDialog_GetFilterIndex(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetFilterIndex();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::SetMessage
static JSValue callback_method_Ozone_FileDialog_SetMessage(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsString(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetMessage(const char* message)
overload0:
    {
        const char* message;
        message = JS_ToCString(ctx, argv[0]);
        if (!message)
            return JS_EXCEPTION;
        auto __arg0 = message;

        instance->SetMessage(__arg0);

        JS_FreeCString(ctx, message);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::SetPath
static JSValue callback_method_Ozone_FileDialog_SetPath(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsString(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetPath(const char* path)
overload0:
    {
        const char* path;
        path = JS_ToCString(ctx, argv[0]);
        if (!path)
            return JS_EXCEPTION;
        auto __arg0 = path;

        instance->SetPath(__arg0);

        JS_FreeCString(ctx, path);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::SetDirectory
static JSValue callback_method_Ozone_FileDialog_SetDirectory(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsString(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetDirectory(const char* dir)
overload0:
    {
        const char* dir;
        dir = JS_ToCString(ctx, argv[0]);
        if (!dir)
            return JS_EXCEPTION;
        auto __arg0 = dir;

        instance->SetDirectory(__arg0);

        JS_FreeCString(ctx, dir);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::SetFilename
static JSValue callback_method_Ozone_FileDialog_SetFilename(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsString(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetFilename(const char* name)
overload0:
    {
        const char* name;
        name = JS_ToCString(ctx, argv[0]);
        if (!name)
            return JS_EXCEPTION;
        auto __arg0 = name;

        instance->SetFilename(__arg0);

        JS_FreeCString(ctx, name);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::SetWildcard
static JSValue callback_method_Ozone_FileDialog_SetWildcard(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsString(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetWildcard(const char* wildCard)
overload0:
    {
        const char* wildCard;
        wildCard = JS_ToCString(ctx, argv[0]);
        if (!wildCard)
            return JS_EXCEPTION;
        auto __arg0 = wildCard;

        instance->SetWildcard(__arg0);

        JS_FreeCString(ctx, wildCard);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::SetFilterIndex
static JSValue callback_method_Ozone_FileDialog_SetFilterIndex(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsNumber(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetFilterIndex(int filterIndex)
overload0:
    {
        int filterIndex;
        int32_t _filterIndex;
        if (JS_ToInt32(ctx, &_filterIndex, argv[0]))
            return JS_EXCEPTION;
        filterIndex = (int)_filterIndex;
        auto __arg0 = filterIndex;

        instance->SetFilterIndex(__arg0);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::ShowModal
static JSValue callback_method_Ozone_FileDialog_ShowModal(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    int __ret = instance->ShowModal();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::SupportsExtraControl
static JSValue callback_method_Ozone_FileDialog_SupportsExtraControl(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    bool __ret = instance->SupportsExtraControl();

    JSValue ____ret = JS_NewBool(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::HasFdFlag
static JSValue callback_method_Ozone_FileDialog_HasFdFlag(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsNumber(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // bool HasFdFlag(int flag) const
overload0:
    {
        int flag;
        int32_t _flag;
        if (JS_ToInt32(ctx, &_flag, argv[0]))
            return JS_EXCEPTION;
        flag = (int)_flag;
        auto __arg0 = flag;

        bool __ret = instance->HasFdFlag(__arg0);

        JSValue ____ret = JS_NewBool(ctx, __ret);

        return ____ret;
    }
}

// Ozone::FileDialog::GetMessage
static JSValue callback_method_Ozone_FileDialog_GetMessage(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    const char* __ret = instance->GetMessage();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetDirectory
static JSValue callback_method_Ozone_FileDialog_GetDirectory(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    const char* __ret = instance->GetDirectory();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetWildcard
static JSValue callback_method_Ozone_FileDialog_GetWildcard(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    const char* __ret = instance->GetWildcard();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetCurrentlySelectedFilename
static JSValue callback_method_Ozone_FileDialog_GetCurrentlySelectedFilename(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    const char* __ret = instance->GetCurrentlySelectedFilename();

    JSValue ____ret = JS_NewString(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetCurrentlySelectedFilterIndex
static JSValue callback_method_Ozone_FileDialog_GetCurrentlySelectedFilterIndex(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    int __ret = instance->GetCurrentlySelectedFilterIndex();

    JSValue ____ret = JS_NewInt32(ctx, __ret);

    return ____ret;
}

// Ozone::FileDialog::GetExtraControl
static JSValue callback_method_Ozone_FileDialog_GetExtraControl(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc > 0)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    ::Ozone::Window* __ret = instance->GetExtraControl();

    JSValue ____ret = JS_Interop_CreateFromInstance(ctx, classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT, (void*) __ret);

    return ____ret;
}

// Ozone::FileDialog::SetFilterIndexFromExt
static JSValue callback_method_Ozone_FileDialog_SetFilterIndexFromExt(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 1 || argc > 1)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(this_val, 0);

    if (JS_IsString(argv[0]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // void SetFilterIndexFromExt(const char* ext)
overload0:
    {
        const char* ext;
        ext = JS_ToCString(ctx, argv[0]);
        if (!ext)
            return JS_EXCEPTION;
        auto __arg0 = ext;

        instance->SetFilterIndexFromExt(__arg0);

        JS_FreeCString(ctx, ext);

        return JS_UNDEFINED;
    }
}

// Ozone::FileDialog::AppendExtension
static JSValue callback_method_Ozone_FileDialog_AppendExtension(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 2 || argc > 2)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    if (JS_IsString(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* AppendExtension(const char* filePath, const char* extensionList)
overload0:
    {
        const char* filePath;
        filePath = JS_ToCString(ctx, argv[0]);
        if (!filePath)
            return JS_EXCEPTION;
        auto __arg0 = filePath;

        const char* extensionList;
        extensionList = JS_ToCString(ctx, argv[1]);
        if (!extensionList)
            return JS_EXCEPTION;
        auto __arg1 = extensionList;

        const char* __ret = ::Ozone::FileDialog::AppendExtension(__arg0, __arg1);

        JS_FreeCString(ctx, filePath);
        JS_FreeCString(ctx, extensionList);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

static JSValue callback_class_Ozone_FileDialog_toString(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    return JS_NewString(ctx, "FileDialog");
}

void finalizer_Ozone_FileDialog(JSRuntime *rt, JSValue val)
{
    Ozone::FileDialog* instance = (Ozone::FileDialog*) JS_GetOpaque(val, 0);
}

static JSClassDef classDef_Ozone_FileDialog
{
    "FileDialog",
    .finalizer = finalizer_Ozone_FileDialog
};

static JSCFunctionListEntry funcDef_Ozone_FileDialog[]
{
    JS_CFUNC_DEF("Create", 9, callback_method_Ozone_FileDialog_Create),
    JS_CFUNC_DEF("GetPath", 0, callback_method_Ozone_FileDialog_GetPath),
    JS_CFUNC_DEF("GetFilename", 0, callback_method_Ozone_FileDialog_GetFilename),
    JS_CFUNC_DEF("GetFilterIndex", 0, callback_method_Ozone_FileDialog_GetFilterIndex),
    JS_CFUNC_DEF("SetMessage", 1, callback_method_Ozone_FileDialog_SetMessage),
    JS_CFUNC_DEF("SetPath", 1, callback_method_Ozone_FileDialog_SetPath),
    JS_CFUNC_DEF("SetDirectory", 1, callback_method_Ozone_FileDialog_SetDirectory),
    JS_CFUNC_DEF("SetFilename", 1, callback_method_Ozone_FileDialog_SetFilename),
    JS_CFUNC_DEF("SetWildcard", 1, callback_method_Ozone_FileDialog_SetWildcard),
    JS_CFUNC_DEF("SetFilterIndex", 1, callback_method_Ozone_FileDialog_SetFilterIndex),
    JS_CFUNC_DEF("ShowModal", 0, callback_method_Ozone_FileDialog_ShowModal),
    JS_CFUNC_DEF("SupportsExtraControl", 0, callback_method_Ozone_FileDialog_SupportsExtraControl),
    JS_CFUNC_DEF("HasFdFlag", 1, callback_method_Ozone_FileDialog_HasFdFlag),
    JS_CFUNC_DEF("GetMessage", 0, callback_method_Ozone_FileDialog_GetMessage),
    JS_CFUNC_DEF("GetDirectory", 0, callback_method_Ozone_FileDialog_GetDirectory),
    JS_CFUNC_DEF("GetWildcard", 0, callback_method_Ozone_FileDialog_GetWildcard),
    JS_CFUNC_DEF("GetCurrentlySelectedFilename", 0, callback_method_Ozone_FileDialog_GetCurrentlySelectedFilename),
    JS_CFUNC_DEF("GetCurrentlySelectedFilterIndex", 0, callback_method_Ozone_FileDialog_GetCurrentlySelectedFilterIndex),
    JS_CFUNC_DEF("GetExtraControl", 0, callback_method_Ozone_FileDialog_GetExtraControl),
    JS_CFUNC_DEF("SetFilterIndexFromExt", 1, callback_method_Ozone_FileDialog_SetFilterIndexFromExt),
    JS_CFUNC_DEF("AppendExtension", 2, callback_method_Ozone_FileDialog_AppendExtension),
    JS_CFUNC_DEF("toString", 0, callback_class_Ozone_FileDialog_toString),
};

static void register_class_Ozone_FileDialog(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (!set)
    {
        JS_AddModuleExport(ctx, m, "FileDialog");
        return;
    }

    if (phase == 0)
    {
        JS_NewClassID(&classId_Ozone_FileDialog);

        JS_NewClass(JS_GetRuntime(ctx), classId_Ozone_FileDialog, &classDef_Ozone_FileDialog);

        JSValue proto = JS_NewObject(ctx);
        JS_SetPropertyFunctionList(ctx, proto, funcDef_Ozone_FileDialog, sizeof(funcDef_Ozone_FileDialog) / sizeof(funcDef_Ozone_FileDialog[0]));
        JS_SetClassProto(ctx, classId_Ozone_FileDialog, proto);

        JSValue ctor = JS_NewCFunction2(ctx, callback_method_Ozone_FileDialog_FileDialog, "FileDialog", 9, JS_CFUNC_constructor, 0);
        JS_SetConstructor(ctx, ctor, proto);

        JS_SetModuleExport(ctx, m, "FileDialog", ctor);
    }
}

// Ozone::FileSelector
static JSValue callback_function_Ozone_FileSelector(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 9 || argc > 9)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    if (JS_IsString(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsString(argv[3]))
        goto typecheck4;

    goto error;

typecheck4:
    if (JS_IsString(argv[4]))
        goto typecheck5;

    goto error;

typecheck5:
    if (JS_IsNumber(argv[5]))
        goto typecheck6;

    goto error;

typecheck6:
    if (JS_IsObject(argv[6]))
        goto typecheck7;

    goto error;

typecheck7:
    if (JS_IsNumber(argv[7]))
        goto typecheck8;

    goto error;

typecheck8:
    if (JS_IsNumber(argv[8]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* FileSelector(const char* message, const char* default_path, const char* default_filename, const char* default_extension, const char* wildcard, int flags, ::Ozone::Window* parent, int x, int y)
overload0:
    {
        const char* message;
        message = JS_ToCString(ctx, argv[0]);
        if (!message)
            return JS_EXCEPTION;
        auto __arg0 = message;

        const char* default_path;
        default_path = JS_ToCString(ctx, argv[1]);
        if (!default_path)
            return JS_EXCEPTION;
        auto __arg1 = default_path;

        const char* default_filename;
        default_filename = JS_ToCString(ctx, argv[2]);
        if (!default_filename)
            return JS_EXCEPTION;
        auto __arg2 = default_filename;

        const char* default_extension;
        default_extension = JS_ToCString(ctx, argv[3]);
        if (!default_extension)
            return JS_EXCEPTION;
        auto __arg3 = default_extension;

        const char* wildcard;
        wildcard = JS_ToCString(ctx, argv[4]);
        if (!wildcard)
            return JS_EXCEPTION;
        auto __arg4 = wildcard;

        int flags;
        int32_t _flags;
        if (JS_ToInt32(ctx, &_flags, argv[5]))
            return JS_EXCEPTION;
        flags = (int)_flags;
        auto __arg5 = flags;

        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance( argv[6], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg6 = parent_instance;

        int x;
        int32_t _x;
        if (JS_ToInt32(ctx, &_x, argv[7]))
            return JS_EXCEPTION;
        x = (int)_x;
        auto __arg7 = x;

        int y;
        int32_t _y;
        if (JS_ToInt32(ctx, &_y, argv[8]))
            return JS_EXCEPTION;
        y = (int)_y;
        auto __arg8 = y;

        const char* __ret = ::Ozone::FileSelector(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7, __arg8);

        JS_FreeCString(ctx, message);
        JS_FreeCString(ctx, default_path);
        JS_FreeCString(ctx, default_filename);
        JS_FreeCString(ctx, default_extension);
        JS_FreeCString(ctx, wildcard);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

static void register_function_Ozone_FileSelector(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "FileSelector");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewCFunction(ctx, callback_function_Ozone_FileSelector, "FileSelector", 9);
    int status = JS_SetModuleExport(ctx, m, "FileSelector", val);
    assert(status != -1);
}

// Ozone::LoadFileSelector
static JSValue callback_function_Ozone_LoadFileSelector(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 4 || argc > 4)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    if (JS_IsString(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsObject(argv[3]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* LoadFileSelector(const char* what, const char* extension, const char* default_name, ::Ozone::Window* parent)
overload0:
    {
        const char* what;
        what = JS_ToCString(ctx, argv[0]);
        if (!what)
            return JS_EXCEPTION;
        auto __arg0 = what;

        const char* extension;
        extension = JS_ToCString(ctx, argv[1]);
        if (!extension)
            return JS_EXCEPTION;
        auto __arg1 = extension;

        const char* default_name;
        default_name = JS_ToCString(ctx, argv[2]);
        if (!default_name)
            return JS_EXCEPTION;
        auto __arg2 = default_name;

        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance( argv[3], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg3 = parent_instance;

        const char* __ret = ::Ozone::LoadFileSelector(__arg0, __arg1, __arg2, __arg3);

        JS_FreeCString(ctx, what);
        JS_FreeCString(ctx, extension);
        JS_FreeCString(ctx, default_name);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

static void register_function_Ozone_LoadFileSelector(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "LoadFileSelector");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewCFunction(ctx, callback_function_Ozone_LoadFileSelector, "LoadFileSelector", 4);
    int status = JS_SetModuleExport(ctx, m, "LoadFileSelector", val);
    assert(status != -1);
}

// Ozone::SaveFileSelector
static JSValue callback_function_Ozone_SaveFileSelector(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv)
{
    if (argc < 4 || argc > 4)
    {
        return JS_ThrowRangeError(ctx, "Unsupported number of arguments");
    }

    if (JS_IsString(argv[0]))
        goto typecheck1;

    goto error;

typecheck1:
    if (JS_IsString(argv[1]))
        goto typecheck2;

    goto error;

typecheck2:
    if (JS_IsString(argv[2]))
        goto typecheck3;

    goto error;

typecheck3:
    if (JS_IsObject(argv[3]))
        goto overload0;

    goto error;

error:
    return JS_ThrowTypeError(ctx, "Unsupported argument type");

    // char* SaveFileSelector(const char* what, const char* extension, const char* default_name, ::Ozone::Window* parent)
overload0:
    {
        const char* what;
        what = JS_ToCString(ctx, argv[0]);
        if (!what)
            return JS_EXCEPTION;
        auto __arg0 = what;

        const char* extension;
        extension = JS_ToCString(ctx, argv[1]);
        if (!extension)
            return JS_EXCEPTION;
        auto __arg1 = extension;

        const char* default_name;
        default_name = JS_ToCString(ctx, argv[2]);
        if (!default_name)
            return JS_EXCEPTION;
        auto __arg2 = default_name;

        Ozone::Window* parent_instance = (Ozone::Window*) JS_Interop_GetInstance( argv[3], \
            classId_Ozone_Window, JS_INTEROP_INSTANCE_SIGNAL_CONTEXT);
        auto __arg3 = parent_instance;

        const char* __ret = ::Ozone::SaveFileSelector(__arg0, __arg1, __arg2, __arg3);

        JS_FreeCString(ctx, what);
        JS_FreeCString(ctx, extension);
        JS_FreeCString(ctx, default_name);

        JSValue ____ret = JS_NewString(ctx, __ret);

        return ____ret;
    }
}

static void register_function_Ozone_SaveFileSelector(JSContext *ctx, JSModuleDef *m, bool set)
{
    if (!set)
    {
        int status = JS_AddModuleExport(ctx, m, "SaveFileSelector");
        assert(status != -1);
        return;
    }

    JSValue val = JS_NewCFunction(ctx, callback_function_Ozone_SaveFileSelector, "SaveFileSelector", 4);
    int status = JS_SetModuleExport(ctx, m, "SaveFileSelector", val);
    assert(status != -1);
}

void register_ozone_filedlg(JSContext *ctx, JSModuleDef *m, bool set, int phase)
{
    if (phase == 0)
    {
        register_enum_Ozone_FD(ctx, m, set);

        register_function_Ozone_FileSelector(ctx, m, set);

        register_function_Ozone_LoadFileSelector(ctx, m, set);

        register_function_Ozone_SaveFileSelector(ctx, m, set);
    }

    register_class_Ozone_FileDialog(ctx, m, set, phase);
}

} // extern "C"
