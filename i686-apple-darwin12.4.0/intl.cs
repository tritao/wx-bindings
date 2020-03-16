//----------------------------------------------------------------------------
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
//----------------------------------------------------------------------------
using System;
using System.Runtime.InteropServices;
using System.Security;

namespace wxSharp
{
    public enum wxLayoutDirection : uint
    {
        wxLayout_Default = 0,
        wxLayout_LeftToRight = 1,
        wxLayout_RightToLeft = 2
    }

    public enum wxLocaleCategory : uint
    {
        wxLOCALE_CAT_NUMBER = 0,
        wxLOCALE_CAT_DATE = 1,
        wxLOCALE_CAT_MONEY = 2,
        wxLOCALE_CAT_DEFAULT = 3,
        wxLOCALE_CAT_MAX = 4
    }

    public enum wxLocaleInfo : uint
    {
        wxLOCALE_THOUSANDS_SEP = 0,
        wxLOCALE_DECIMAL_POINT = 1,
        wxLOCALE_SHORT_DATE_FMT = 2,
        wxLOCALE_LONG_DATE_FMT = 3,
        wxLOCALE_DATE_TIME_FMT = 4,
        wxLOCALE_TIME_FMT = 5
    }

    public enum wxLocaleInitFlags : uint
    {
        wxLOCALE_DONT_LOAD_DEFAULT = 0x0,
        wxLOCALE_LOAD_DEFAULT = 0x1
    }

    public unsafe partial class wxLanguageInfo : IDisposable
    {
        [StructLayout(LayoutKind.Explicit, Size = 48)]
        public partial struct Internal
        {
            [FieldOffset(0)]
            public int Language;

            [FieldOffset(4)]
            public wxString.Internal CanonicalName;

            [FieldOffset(24)]
            public wxString.Internal Description;

            [FieldOffset(44)]
            public wxLayoutDirection LayoutDirection;

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxLanguageInfoC2Ev")]
            internal static extern void ctor_1(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxLanguageInfoC2ERKS_")]
            internal static extern void cctor_2(global::System.IntPtr instance, global::System.IntPtr _0);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxLanguageInfoD2Ev")]
            internal static extern void dtor_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK14wxLanguageInfo13GetLocaleNameEv")]
            internal static extern void GetLocaleName_0(global::System.IntPtr @return, global::System.IntPtr instance);
        }

        public global::System.IntPtr __Instance { get; protected set; }

        protected int __PointerAdjustment;
        public static readonly System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxLanguageInfo> NativeToManagedMap = new System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxLanguageInfo>();
        protected void*[] __OriginalVTables;

        protected bool __ownsNativeInstance;

        public static wxLanguageInfo __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new wxLanguageInfo(native.ToPointer(), skipVTables);
        }

        public static wxLanguageInfo __CreateInstance(wxLanguageInfo.Internal native, bool skipVTables = false)
        {
            return new wxLanguageInfo(native, skipVTables);
        }

        private static void* __CopyValue(wxLanguageInfo.Internal native)
        {
            var ret = Marshal.AllocHGlobal(48);
            wxLanguageInfo.Internal.cctor_2(ret, new global::System.IntPtr(&native));
            return ret.ToPointer();
        }

        private wxLanguageInfo(wxLanguageInfo.Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected wxLanguageInfo(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
        }

        public wxLanguageInfo()
        {
            __Instance = Marshal.AllocHGlobal(48);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            Internal.ctor_1((__Instance + __PointerAdjustment));
        }

        public wxLanguageInfo(wxLanguageInfo _0)
        {
            __Instance = Marshal.AllocHGlobal(48);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(_0, null))
                throw new global::System.ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
            var arg0 = _0.__Instance;
            Internal.cctor_2((__Instance + __PointerAdjustment), arg0);
        }

        public void Dispose()
        {
            Dispose(disposing: true);
        }

        protected virtual void Dispose(bool disposing)
        {
            wxLanguageInfo __dummy;
            NativeToManagedMap.TryRemove(__Instance, out __dummy);
            Internal.dtor_0((__Instance + __PointerAdjustment));
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
        }

        public wxString GetLocaleName()
        {
            var __ret = new wxString.Internal();
            Internal.GetLocaleName_0(new IntPtr(&__ret), (__Instance + __PointerAdjustment));
            return wxString.__CreateInstance(__ret);
        }

        public int Language
        {
            get
            {
                return ((Internal*) __Instance)->Language;
            }

            set
            {
                ((Internal*) __Instance)->Language = value;
            }
        }

        public wxString CanonicalName
        {
            get
            {
                return wxString.__CreateInstance(((Internal*) __Instance)->CanonicalName);
            }

            set
            {
                ((Internal*) __Instance)->CanonicalName = ReferenceEquals(value, null) ? new wxString.Internal() : *(wxString.Internal*) (value.__Instance);
            }
        }

        public wxString Description
        {
            get
            {
                return wxString.__CreateInstance(((Internal*) __Instance)->Description);
            }

            set
            {
                ((Internal*) __Instance)->Description = ReferenceEquals(value, null) ? new wxString.Internal() : *(wxString.Internal*) (value.__Instance);
            }
        }

        public wxLayoutDirection LayoutDirection
        {
            get
            {
                return ((Internal*) __Instance)->LayoutDirection;
            }

            set
            {
                ((Internal*) __Instance)->LayoutDirection = value;
            }
        }
    }

    public unsafe partial class wxLocale : IDisposable
    {
        [StructLayout(LayoutKind.Explicit, Size = 104)]
        public partial struct Internal
        {
            [FieldOffset(4)]
            public wxString.Internal m_strLocale;

            [FieldOffset(24)]
            public wxString.Internal m_strShort;

            [FieldOffset(44)]
            public int m_language;

            [FieldOffset(48)]
            public global::System.IntPtr m_pszOldLocale;

            [FieldOffset(52)]
            public global::System.IntPtr m_pOldLocale;

            [FieldOffset(56)]
            public byte m_initialized;

            [FieldOffset(60)]
            public wxTranslations.Internal m_translations;

            [FieldOffset(0)]
            public global::System.IntPtr vfptr0;

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocaleC2Ev")]
            internal static extern void ctor_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocaleC2ERK8wxStringS2_S2_b")]
            internal static extern void ctor_1(global::System.IntPtr instance, global::System.IntPtr name, global::System.IntPtr shortName, global::System.IntPtr locale, bool bLoadDefault);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocaleC2Eii")]
            internal static extern void ctor_2(global::System.IntPtr instance, int language, int flags);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale4InitERK8wxStringS2_S2_b")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool Init_0(global::System.IntPtr instance, global::System.IntPtr name, global::System.IntPtr shortName, global::System.IntPtr locale, bool bLoadDefault);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale4InitEii")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool Init_1(global::System.IntPtr instance, int language, int flags);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale17GetSystemLanguageEv")]
            internal static extern int GetSystemLanguage_0();

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale17GetSystemEncodingEv")]
            internal static extern wxFontEncoding GetSystemEncoding_0();

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale21GetSystemEncodingNameEv")]
            internal static extern void GetSystemEncodingName_0(global::System.IntPtr @return);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale7GetInfoE12wxLocaleInfo16wxLocaleCategory")]
            internal static extern void GetInfo_0(global::System.IntPtr @return, wxLocaleInfo index, wxLocaleCategory cat);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale9GetOSInfoE12wxLocaleInfo16wxLocaleCategory")]
            internal static extern void GetOSInfo_0(global::System.IntPtr @return, wxLocaleInfo index, wxLocaleCategory cat);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale4IsOkEv")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool IsOk_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale9GetLocaleEv")]
            internal static extern global::System.IntPtr GetLocale_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale11GetLanguageEv")]
            internal static extern int GetLanguage_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale10GetSysNameEv")]
            internal static extern void GetSysName_0(global::System.IntPtr @return, global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale16GetCanonicalNameEv")]
            internal static extern void GetCanonicalName_0(global::System.IntPtr @return, global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale26AddCatalogLookupPathPrefixERK8wxString")]
            internal static extern void AddCatalogLookupPathPrefix_0(global::System.IntPtr prefix);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale10AddCatalogERK8wxString")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool AddCatalog_0(global::System.IntPtr instance, global::System.IntPtr domain);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale10AddCatalogERK8wxString10wxLanguage")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool AddCatalog_1(global::System.IntPtr instance, global::System.IntPtr domain, wxLanguage msgIdLanguage);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale10AddCatalogERK8wxString10wxLanguageS2_")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool AddCatalog_2(global::System.IntPtr instance, global::System.IntPtr domain, wxLanguage msgIdLanguage, global::System.IntPtr msgIdCharset);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale11IsAvailableEi")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool IsAvailable_0(int lang);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale8IsLoadedERK8wxString")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool IsLoaded_0(global::System.IntPtr instance, global::System.IntPtr domain);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale15GetLanguageInfoEi")]
            internal static extern global::System.IntPtr GetLanguageInfo_0(int lang);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale15GetLanguageNameEi")]
            internal static extern void GetLanguageName_0(global::System.IntPtr @return, int lang);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale24GetLanguageCanonicalNameEi")]
            internal static extern void GetLanguageCanonicalName_0(global::System.IntPtr @return, int lang);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale16FindLanguageInfoERK8wxString")]
            internal static extern global::System.IntPtr FindLanguageInfo_0(global::System.IntPtr locale);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale11AddLanguageERK14wxLanguageInfo")]
            internal static extern void AddLanguage_0(global::System.IntPtr info);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale9GetStringERK8wxStringS2_")]
            internal static extern global::System.IntPtr GetString_0(global::System.IntPtr instance, global::System.IntPtr origString, global::System.IntPtr domain);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale9GetStringERK8wxStringS2_jS2_")]
            internal static extern global::System.IntPtr GetString_1(global::System.IntPtr instance, global::System.IntPtr origString, global::System.IntPtr origString2, uint n, global::System.IntPtr domain);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale7GetNameEv")]
            internal static extern global::System.IntPtr GetName_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxLocale14GetHeaderValueERK8wxStringS2_")]
            internal static extern void GetHeaderValue_0(global::System.IntPtr @return, global::System.IntPtr instance, global::System.IntPtr header, global::System.IntPtr domain);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale17CreateLanguagesDBEv")]
            internal static extern void CreateLanguagesDB_0();

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxLocale18DestroyLanguagesDBEv")]
            internal static extern void DestroyLanguagesDB_0();
        }

        public global::System.IntPtr __Instance { get; protected set; }

        protected int __PointerAdjustment;
        public static readonly System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxLocale> NativeToManagedMap = new System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxLocale>();
        protected void*[] __OriginalVTables;

        protected bool __ownsNativeInstance;

        public static wxLocale __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new wxLocale(native.ToPointer(), skipVTables);
        }

        public static wxLocale __CreateInstance(wxLocale.Internal native, bool skipVTables = false)
        {
            return new wxLocale(native, skipVTables);
        }

        private static void* __CopyValue(wxLocale.Internal native)
        {
            var ret = Marshal.AllocHGlobal(104);
            *(wxLocale.Internal*) ret = native;
            return ret.ToPointer();
        }

        private wxLocale(wxLocale.Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected wxLocale(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
            if (skipVTables)
                __OriginalVTables = new void*[] { ((Internal*) native)->vfptr0.ToPointer() };
            else
                SetupVTables(true);
        }

        public wxLocale()
        {
            __Instance = Marshal.AllocHGlobal(104);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            Internal.ctor_0((__Instance + __PointerAdjustment));
            SetupVTables(GetType().FullName == "wxSharp.wxLocale");
        }

        public wxLocale(wxString name, wxString shortName, wxString locale, bool bLoadDefault)
        {
            __Instance = Marshal.AllocHGlobal(104);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(name, null))
                throw new global::System.ArgumentNullException("name", "Cannot be null because it is a C++ reference (&).");
            var arg0 = name.__Instance;
            if (ReferenceEquals(shortName, null))
                throw new global::System.ArgumentNullException("shortName", "Cannot be null because it is a C++ reference (&).");
            var arg1 = shortName.__Instance;
            if (ReferenceEquals(locale, null))
                throw new global::System.ArgumentNullException("locale", "Cannot be null because it is a C++ reference (&).");
            var arg2 = locale.__Instance;
            Internal.ctor_1((__Instance + __PointerAdjustment), arg0, arg1, arg2, bLoadDefault);
            SetupVTables(GetType().FullName == "wxSharp.wxLocale");
        }

        public wxLocale(int language, int flags)
        {
            __Instance = Marshal.AllocHGlobal(104);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            Internal.ctor_2((__Instance + __PointerAdjustment), language, flags);
            SetupVTables(GetType().FullName == "wxSharp.wxLocale");
        }

        public void Dispose()
        {
            Dispose(disposing: true);
        }

        protected virtual void Dispose(bool disposing)
        {
            wxLocale __dummy;
            NativeToManagedMap.TryRemove(__Instance, out __dummy);
            ((Internal*) __Instance)->vfptr0 = new global::System.IntPtr(__OriginalVTables[0]);
            var __slot = *(void**) ((IntPtr) __OriginalVTables[0] + 0 * 4);
            var ___dtor_0Delegate = (Delegates.Action_IntPtr) Marshal.GetDelegateForFunctionPointer(new IntPtr(__slot), typeof(Delegates.Action_IntPtr));
            ___dtor_0Delegate((__Instance + __PointerAdjustment));
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
        }

        public bool Init(wxString name, wxString shortName, wxString locale, bool bLoadDefault)
        {
            if (ReferenceEquals(name, null))
                throw new global::System.ArgumentNullException("name", "Cannot be null because it is a C++ reference (&).");
            var arg0 = name.__Instance;
            if (ReferenceEquals(shortName, null))
                throw new global::System.ArgumentNullException("shortName", "Cannot be null because it is a C++ reference (&).");
            var arg1 = shortName.__Instance;
            if (ReferenceEquals(locale, null))
                throw new global::System.ArgumentNullException("locale", "Cannot be null because it is a C++ reference (&).");
            var arg2 = locale.__Instance;
            var __ret = Internal.Init_0((__Instance + __PointerAdjustment), arg0, arg1, arg2, bLoadDefault);
            return __ret;
        }

        public bool Init(int language, int flags)
        {
            var __ret = Internal.Init_1((__Instance + __PointerAdjustment), language, flags);
            return __ret;
        }

        public bool IsOk()
        {
            var __ret = Internal.IsOk_0((__Instance + __PointerAdjustment));
            return __ret;
        }

        public wxString GetLocale()
        {
            var __ret = Internal.GetLocale_0((__Instance + __PointerAdjustment));
            wxString __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxString.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxString) wxString.NativeToManagedMap[__ret];
            else __result0 = wxString.__CreateInstance(__ret);
            return __result0;
        }

        public int GetLanguage()
        {
            var __ret = Internal.GetLanguage_0((__Instance + __PointerAdjustment));
            return __ret;
        }

        public wxString GetSysName()
        {
            var __ret = new wxString.Internal();
            Internal.GetSysName_0(new IntPtr(&__ret), (__Instance + __PointerAdjustment));
            return wxString.__CreateInstance(__ret);
        }

        public wxString GetCanonicalName()
        {
            var __ret = new wxString.Internal();
            Internal.GetCanonicalName_0(new IntPtr(&__ret), (__Instance + __PointerAdjustment));
            return wxString.__CreateInstance(__ret);
        }

        public bool AddCatalog(wxString domain)
        {
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg0 = domain.__Instance;
            var __ret = Internal.AddCatalog_0((__Instance + __PointerAdjustment), arg0);
            return __ret;
        }

        public bool AddCatalog(wxString domain, wxLanguage msgIdLanguage)
        {
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg0 = domain.__Instance;
            var arg1 = msgIdLanguage;
            var __ret = Internal.AddCatalog_1((__Instance + __PointerAdjustment), arg0, arg1);
            return __ret;
        }

        public bool AddCatalog(wxString domain, wxLanguage msgIdLanguage, wxString msgIdCharset)
        {
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg0 = domain.__Instance;
            var arg1 = msgIdLanguage;
            if (ReferenceEquals(msgIdCharset, null))
                throw new global::System.ArgumentNullException("msgIdCharset", "Cannot be null because it is a C++ reference (&).");
            var arg2 = msgIdCharset.__Instance;
            var __ret = Internal.AddCatalog_2((__Instance + __PointerAdjustment), arg0, arg1, arg2);
            return __ret;
        }

        public bool IsLoaded(wxString domain)
        {
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg0 = domain.__Instance;
            var __ret = Internal.IsLoaded_0((__Instance + __PointerAdjustment), arg0);
            return __ret;
        }

        public wxString GetString(wxString origString, wxString domain)
        {
            if (ReferenceEquals(origString, null))
                throw new global::System.ArgumentNullException("origString", "Cannot be null because it is a C++ reference (&).");
            var arg0 = origString.__Instance;
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg1 = domain.__Instance;
            var __ret = Internal.GetString_0((__Instance + __PointerAdjustment), arg0, arg1);
            wxString __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxString.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxString) wxString.NativeToManagedMap[__ret];
            else __result0 = wxString.__CreateInstance(__ret);
            return __result0;
        }

        public wxString GetString(wxString origString, wxString origString2, uint n, wxString domain)
        {
            if (ReferenceEquals(origString, null))
                throw new global::System.ArgumentNullException("origString", "Cannot be null because it is a C++ reference (&).");
            var arg0 = origString.__Instance;
            if (ReferenceEquals(origString2, null))
                throw new global::System.ArgumentNullException("origString2", "Cannot be null because it is a C++ reference (&).");
            var arg1 = origString2.__Instance;
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg3 = domain.__Instance;
            var __ret = Internal.GetString_1((__Instance + __PointerAdjustment), arg0, arg1, n, arg3);
            wxString __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxString.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxString) wxString.NativeToManagedMap[__ret];
            else __result0 = wxString.__CreateInstance(__ret);
            return __result0;
        }

        public wxString GetName()
        {
            var __ret = Internal.GetName_0((__Instance + __PointerAdjustment));
            wxString __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxString.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxString) wxString.NativeToManagedMap[__ret];
            else __result0 = wxString.__CreateInstance(__ret);
            return __result0;
        }

        public wxString GetHeaderValue(wxString header, wxString domain)
        {
            if (ReferenceEquals(header, null))
                throw new global::System.ArgumentNullException("header", "Cannot be null because it is a C++ reference (&).");
            var arg0 = header.__Instance;
            if (ReferenceEquals(domain, null))
                throw new global::System.ArgumentNullException("domain", "Cannot be null because it is a C++ reference (&).");
            var arg1 = domain.__Instance;
            var __ret = new wxString.Internal();
            Internal.GetHeaderValue_0(new IntPtr(&__ret), (__Instance + __PointerAdjustment), arg0, arg1);
            return wxString.__CreateInstance(__ret);
        }

        public static int GetSystemLanguage()
        {
            var __ret = Internal.GetSystemLanguage_0();
            return __ret;
        }

        public static wxFontEncoding GetSystemEncoding()
        {
            var __ret = Internal.GetSystemEncoding_0();
            return __ret;
        }

        public static wxString GetSystemEncodingName()
        {
            var __ret = new wxString.Internal();
            Internal.GetSystemEncodingName_0(new IntPtr(&__ret));
            return wxString.__CreateInstance(__ret);
        }

        public static wxString GetInfo(wxLocaleInfo index, wxLocaleCategory cat)
        {
            var arg0 = index;
            var arg1 = cat;
            var __ret = new wxString.Internal();
            Internal.GetInfo_0(new IntPtr(&__ret), arg0, arg1);
            return wxString.__CreateInstance(__ret);
        }

        public static wxString GetOSInfo(wxLocaleInfo index, wxLocaleCategory cat)
        {
            var arg0 = index;
            var arg1 = cat;
            var __ret = new wxString.Internal();
            Internal.GetOSInfo_0(new IntPtr(&__ret), arg0, arg1);
            return wxString.__CreateInstance(__ret);
        }

        public static void AddCatalogLookupPathPrefix(wxString prefix)
        {
            if (ReferenceEquals(prefix, null))
                throw new global::System.ArgumentNullException("prefix", "Cannot be null because it is a C++ reference (&).");
            var arg0 = prefix.__Instance;
            Internal.AddCatalogLookupPathPrefix_0(arg0);
        }

        public static bool IsAvailable(int lang)
        {
            var __ret = Internal.IsAvailable_0(lang);
            return __ret;
        }

        public static wxLanguageInfo GetLanguageInfo(int lang)
        {
            var __ret = Internal.GetLanguageInfo_0(lang);
            wxLanguageInfo __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxLanguageInfo.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxLanguageInfo) wxLanguageInfo.NativeToManagedMap[__ret];
            else __result0 = wxLanguageInfo.__CreateInstance(__ret);
            return __result0;
        }

        public static wxString GetLanguageName(int lang)
        {
            var __ret = new wxString.Internal();
            Internal.GetLanguageName_0(new IntPtr(&__ret), lang);
            return wxString.__CreateInstance(__ret);
        }

        public static wxString GetLanguageCanonicalName(int lang)
        {
            var __ret = new wxString.Internal();
            Internal.GetLanguageCanonicalName_0(new IntPtr(&__ret), lang);
            return wxString.__CreateInstance(__ret);
        }

        public static wxLanguageInfo FindLanguageInfo(wxString locale)
        {
            if (ReferenceEquals(locale, null))
                throw new global::System.ArgumentNullException("locale", "Cannot be null because it is a C++ reference (&).");
            var arg0 = locale.__Instance;
            var __ret = Internal.FindLanguageInfo_0(arg0);
            wxLanguageInfo __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxLanguageInfo.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxLanguageInfo) wxLanguageInfo.NativeToManagedMap[__ret];
            else __result0 = wxLanguageInfo.__CreateInstance(__ret);
            return __result0;
        }

        public static void AddLanguage(wxLanguageInfo info)
        {
            if (ReferenceEquals(info, null))
                throw new global::System.ArgumentNullException("info", "Cannot be null because it is a C++ reference (&).");
            var arg0 = info.__Instance;
            Internal.AddLanguage_0(arg0);
        }

        public static void CreateLanguagesDB()
        {
            Internal.CreateLanguagesDB_0();
        }

        public static void DestroyLanguagesDB()
        {
            Internal.DestroyLanguagesDB_0();
        }

        #region Virtual table interop

        // virtual ~wxLocale()
        private static Delegates.Action_IntPtr _dtor_0DelegateInstance;

        private static void _dtor_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxLocale) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            __target.Dispose(false);
        }

        private static void*[] __ManagedVTables;
        private static void*[] __ManagedVTablesDtorOnly;
        private static void*[] _Thunks;

        private void SetupVTables(bool destructorOnly = false)
        {
            if (__OriginalVTables != null)
                return;
            var native = (Internal*) __Instance.ToPointer();

            __OriginalVTables = new void*[] { ((Internal*) native)->vfptr0.ToPointer() };

            if (_Thunks == null)
            {
                _Thunks = new void*[1];
                _dtor_0DelegateInstance += _dtor_0DelegateHook;
                _Thunks[0] = Marshal.GetFunctionPointerForDelegate(_dtor_0DelegateInstance).ToPointer();
            }

            if (destructorOnly)
            {
                if (__ManagedVTablesDtorOnly == null)
                {
                    __ManagedVTablesDtorOnly = new void*[1];
                    var vtptr = Marshal.AllocHGlobal(4 * 4);
                    var vfptr0 = vtptr + 2 * 4;
                    __ManagedVTablesDtorOnly[0] = vfptr0.ToPointer();
                    *(void**)(vfptr0 + -8) = *(void**)(native->vfptr0 + -8);
                    *(void**)(vfptr0 + -4) = *(void**)(native->vfptr0 + -4);
                    *(void**)(vfptr0 + 0) = *(void**)(native->vfptr0 + 0);
                    *(void**)(vfptr0 + 4) = _Thunks[0];
                }

                native->vfptr0 = new IntPtr(__ManagedVTablesDtorOnly[0]);
            }
            else
            {
                if (__ManagedVTables == null)
                {
                    __ManagedVTables = new void*[1];
                    var vtptr = Marshal.AllocHGlobal(4 * 4);
                    var vfptr0 = vtptr + 2 * 4;
                    __ManagedVTables[0] = vfptr0.ToPointer();
                    *(void**)(vfptr0 + -8) = *(void**)(native->vfptr0 + -8);
                    *(void**)(vfptr0 + -4) = *(void**)(native->vfptr0 + -4);
                    *(void**)(vfptr0 + 0) = *(void**)(native->vfptr0 + 0);
                    *(void**)(vfptr0 + 4) = _Thunks[0];
                }

                native->vfptr0 = new IntPtr(__ManagedVTables[0]);
            }
        }

        #endregion
    }

    public unsafe partial class intl
    {
        public partial struct Internal
        {
            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_Z11wxGetLocalev")]
            internal static extern global::System.IntPtr wxGetLocale_0();
        }

        public static wxLocale wxGetLocale()
        {
            var __ret = Internal.wxGetLocale_0();
            wxLocale __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxLocale.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxLocale) wxLocale.NativeToManagedMap[__ret];
            else wxLocale.NativeToManagedMap[__ret] = __result0 = (wxLocale) wxLocale.__CreateInstance(__ret);
            return __result0;
        }
    }
}
