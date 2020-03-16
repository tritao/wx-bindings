//----------------------------------------------------------------------------
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
//----------------------------------------------------------------------------
using System;
using System.Runtime.InteropServices;
using System.Security;

namespace wxSharp
{
    public unsafe static partial class wxFormatStringArgumentFinder
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe static partial class wxFormatStringSpecifierNonPodType
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe static partial class wxFormatStringSpecifier
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe partial class wxArgNormalizer
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe partial class wxArgNormalizerWchar
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe partial class wxArgNormalizerWithBuffer
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe partial class wxArgNormalizerNarrowChar
    {
        [StructLayout(LayoutKind.Explicit, Size = 0)]
        public partial struct Internal
        {
        }
    }

    public unsafe partial class wxFormatString : IDisposable
    {
        [StructLayout(LayoutKind.Explicit, Size = 20)]
        public partial struct Internal
        {
            [FieldOffset(0)]
            internal wxScopedCharTypeBuffer.Internal m_convertedWChar;

            [FieldOffset(4)]
            internal wxScopedCharTypeBuffer.Internal m_char;

            [FieldOffset(8)]
            internal wxScopedCharTypeBuffer.Internal m_wchar;

            [FieldOffset(12)]
            public global::System.IntPtr m_str;

            [FieldOffset(16)]
            public global::System.IntPtr m_cstr;

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxFormatStringC2EPKc")]
            internal static extern void ctor_0(global::System.IntPtr instance, global::System.IntPtr str);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxFormatStringC2ERK8wxString")]
            internal static extern void ctor_2(global::System.IntPtr instance, global::System.IntPtr str);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxFormatStringC2ERK10wxCStrData")]
            internal static extern void ctor_3(global::System.IntPtr instance, global::System.IntPtr str);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxFormatStringC2ERKS_")]
            internal static extern void cctor_6(global::System.IntPtr instance, global::System.IntPtr _0);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN14wxFormatStringD2Ev")]
            internal static extern void dtor_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK14wxFormatString15GetArgumentTypeEj")]
            internal static extern wxFormatString.ArgumentType GetArgumentType_0(global::System.IntPtr instance, uint n);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK14wxFormatString13InputAsStringEv")]
            internal static extern void InputAsString_0(global::System.IntPtr @return, global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK14wxFormatStringcvPKwEv")]
            internal static extern global::System.IntPtr OperatorConversion_0(global::System.IntPtr instance);
        }

        public enum ArgumentType : uint
        {
            Arg_Unused = 0,
            Arg_Char = 0x1,
            Arg_Pointer = 0x2,
            Arg_String = 0x6,
            Arg_Int = 0x9,
            Arg_LongInt = 9,
            Arg_LongLongInt = 0x20,
            Arg_Double = 0x40,
            Arg_LongDouble = 0x80,
            Arg_Size_t = 9,
            Arg_IntPtr = 0x200,
            Arg_ShortIntPtr = 0x400,
            Arg_LongIntPtr = 0x800,
            Arg_Unknown = 0x8000
        }

        public global::System.IntPtr __Instance { get; protected set; }

        protected int __PointerAdjustment;
        public static readonly System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxFormatString> NativeToManagedMap = new System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxFormatString>();
        protected void*[] __OriginalVTables;

        protected bool __ownsNativeInstance;

        public static wxFormatString __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new wxFormatString(native.ToPointer(), skipVTables);
        }

        public static wxFormatString __CreateInstance(wxFormatString.Internal native, bool skipVTables = false)
        {
            return new wxFormatString(native, skipVTables);
        }

        private static void* __CopyValue(wxFormatString.Internal native)
        {
            var ret = Marshal.AllocHGlobal(20);
            wxFormatString.Internal.cctor_6(ret, new global::System.IntPtr(&native));
            return ret.ToPointer();
        }

        private wxFormatString(wxFormatString.Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected wxFormatString(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
        }

        public wxFormatString(string str)
        {
            __Instance = Marshal.AllocHGlobal(20);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            var arg0 = Marshal.StringToHGlobalAnsi(str);
            Internal.ctor_0((__Instance + __PointerAdjustment), arg0);
            Marshal.FreeHGlobal(arg0);
        }

        public wxFormatString(wxString str)
        {
            __Instance = Marshal.AllocHGlobal(20);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(str, null))
                throw new global::System.ArgumentNullException("str", "Cannot be null because it is a C++ reference (&).");
            var arg0 = str.__Instance;
            Internal.ctor_2((__Instance + __PointerAdjustment), arg0);
        }

        public wxFormatString(wxCStrData str)
        {
            __Instance = Marshal.AllocHGlobal(20);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(str, null))
                throw new global::System.ArgumentNullException("str", "Cannot be null because it is a C++ reference (&).");
            var arg0 = str.__Instance;
            Internal.ctor_3((__Instance + __PointerAdjustment), arg0);
        }

        public wxFormatString(wxFormatString _0)
        {
            __Instance = Marshal.AllocHGlobal(20);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(_0, null))
                throw new global::System.ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
            var arg0 = _0.__Instance;
            Internal.cctor_6((__Instance + __PointerAdjustment), arg0);
        }

        public void Dispose()
        {
            Dispose(disposing: true);
        }

        protected virtual void Dispose(bool disposing)
        {
            wxFormatString __dummy;
            NativeToManagedMap.TryRemove(__Instance, out __dummy);
            Internal.dtor_0((__Instance + __PointerAdjustment));
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
        }

        public wxFormatString.ArgumentType GetArgumentType(uint n)
        {
            var __ret = Internal.GetArgumentType_0((__Instance + __PointerAdjustment), n);
            return __ret;
        }

        public wxString InputAsString()
        {
            var __ret = new wxString.Internal();
            Internal.InputAsString_0(new IntPtr(&__ret), (__Instance + __PointerAdjustment));
            return wxString.__CreateInstance(__ret);
        }

        public static implicit operator string(wxFormatString __op)
        {
            if (ReferenceEquals(__op, null))
                throw new global::System.ArgumentNullException("__op", "Cannot be null because it is a C++ reference (&).");
            var arg0 = __op.__Instance;
            var __ret = Internal.OperatorConversion_0(arg0);
            return CppSharp.Runtime.Helpers.MarshalEncodedString(__ret, System.Text.Encoding.UTF32);
        }
    }

    public unsafe partial class wxFormatStringArgument : IDisposable
    {
        [StructLayout(LayoutKind.Explicit, Size = 4)]
        public partial struct Internal
        {
            [FieldOffset(0)]
            public global::System.IntPtr m_str;

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN22wxFormatStringArgumentC2EPK14wxFormatString")]
            internal static extern void ctor_0(global::System.IntPtr instance, global::System.IntPtr s);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN22wxFormatStringArgumentC2ERKS_")]
            internal static extern void cctor_1(global::System.IntPtr instance, global::System.IntPtr _0);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK22wxFormatStringArgumentcvPK14wxFormatStringEv")]
            internal static extern global::System.IntPtr OperatorConversion_0(global::System.IntPtr instance);
        }

        public global::System.IntPtr __Instance { get; protected set; }

        protected int __PointerAdjustment;
        public static readonly System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxFormatStringArgument> NativeToManagedMap = new System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxFormatStringArgument>();
        protected void*[] __OriginalVTables;

        protected bool __ownsNativeInstance;

        public static wxFormatStringArgument __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new wxFormatStringArgument(native.ToPointer(), skipVTables);
        }

        public static wxFormatStringArgument __CreateInstance(wxFormatStringArgument.Internal native, bool skipVTables = false)
        {
            return new wxFormatStringArgument(native, skipVTables);
        }

        private static void* __CopyValue(wxFormatStringArgument.Internal native)
        {
            var ret = Marshal.AllocHGlobal(4);
            *(wxFormatStringArgument.Internal*) ret = native;
            return ret.ToPointer();
        }

        private wxFormatStringArgument(wxFormatStringArgument.Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected wxFormatStringArgument(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
        }

        public wxFormatStringArgument(wxFormatString s)
        {
            __Instance = Marshal.AllocHGlobal(4);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            var arg0 = ReferenceEquals(s, null) ? global::System.IntPtr.Zero : s.__Instance;
            Internal.ctor_0((__Instance + __PointerAdjustment), arg0);
        }

        public wxFormatStringArgument(wxFormatStringArgument _0)
        {
            __Instance = Marshal.AllocHGlobal(4);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            *((wxFormatStringArgument.Internal*) __Instance) = *((wxFormatStringArgument.Internal*) _0.__Instance);
        }

        public void Dispose()
        {
            Dispose(disposing: true);
        }

        protected virtual void Dispose(bool disposing)
        {
            wxFormatStringArgument __dummy;
            NativeToManagedMap.TryRemove(__Instance, out __dummy);
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
        }

        public static implicit operator wxFormatString(wxFormatStringArgument __op)
        {
            if (ReferenceEquals(__op, null))
                throw new global::System.ArgumentNullException("__op", "Cannot be null because it is a C++ reference (&).");
            var arg0 = __op.__Instance;
            var __ret = Internal.OperatorConversion_0(arg0);
            wxFormatString __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxFormatString.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxFormatString) wxFormatString.NativeToManagedMap[__ret];
            else __result0 = wxFormatString.__CreateInstance(__ret);
            return __result0;
        }

        public wxFormatString m_str
        {
            get
            {
                wxFormatString __result0;
                if (((Internal*) __Instance)->m_str == IntPtr.Zero) __result0 = null;
                else if (wxFormatString.NativeToManagedMap.ContainsKey(((Internal*) __Instance)->m_str))
                    __result0 = (wxFormatString) wxFormatString.NativeToManagedMap[((Internal*) __Instance)->m_str];
                else __result0 = wxFormatString.__CreateInstance(((Internal*) __Instance)->m_str);
                return __result0;
            }

            set
            {
                ((Internal*) __Instance)->m_str = ReferenceEquals(value, null) ? global::System.IntPtr.Zero : value.__Instance;
            }
        }
    }

    public unsafe partial class wxArgNormalizedString : IDisposable
    {
        [StructLayout(LayoutKind.Explicit, Size = 4)]
        public partial struct Internal
        {
            [FieldOffset(0)]
            public global::System.IntPtr m_ptr;

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN21wxArgNormalizedStringC2EPKv")]
            internal static extern void ctor_0(global::System.IntPtr instance, global::System.IntPtr ptr);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN21wxArgNormalizedStringC2ERKS_")]
            internal static extern void cctor_1(global::System.IntPtr instance, global::System.IntPtr _0);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK21wxArgNormalizedString7IsValidEv")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool IsValid_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK21wxArgNormalizedStringcvbEv")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool OperatorConversion_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK21wxArgNormalizedString9GetStringEv")]
            internal static extern void GetString_0(global::System.IntPtr @return, global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK21wxArgNormalizedStringcv8wxStringEv")]
            internal static extern void OperatorConversion_1(global::System.IntPtr @return, global::System.IntPtr instance);
        }

        public global::System.IntPtr __Instance { get; protected set; }

        protected int __PointerAdjustment;
        public static readonly System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxArgNormalizedString> NativeToManagedMap = new System.Collections.Concurrent.ConcurrentDictionary<IntPtr, wxArgNormalizedString>();
        protected void*[] __OriginalVTables;

        protected bool __ownsNativeInstance;

        public static wxArgNormalizedString __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new wxArgNormalizedString(native.ToPointer(), skipVTables);
        }

        public static wxArgNormalizedString __CreateInstance(wxArgNormalizedString.Internal native, bool skipVTables = false)
        {
            return new wxArgNormalizedString(native, skipVTables);
        }

        private static void* __CopyValue(wxArgNormalizedString.Internal native)
        {
            var ret = Marshal.AllocHGlobal(4);
            *(wxArgNormalizedString.Internal*) ret = native;
            return ret.ToPointer();
        }

        private wxArgNormalizedString(wxArgNormalizedString.Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected wxArgNormalizedString(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
        }

        public wxArgNormalizedString(global::System.IntPtr ptr)
        {
            __Instance = Marshal.AllocHGlobal(4);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            var arg0 = ptr;
            Internal.ctor_0((__Instance + __PointerAdjustment), arg0);
        }

        public wxArgNormalizedString(wxArgNormalizedString _0)
        {
            __Instance = Marshal.AllocHGlobal(4);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            *((wxArgNormalizedString.Internal*) __Instance) = *((wxArgNormalizedString.Internal*) _0.__Instance);
        }

        public void Dispose()
        {
            Dispose(disposing: true);
        }

        protected virtual void Dispose(bool disposing)
        {
            wxArgNormalizedString __dummy;
            NativeToManagedMap.TryRemove(__Instance, out __dummy);
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
        }

        public bool IsValid()
        {
            var __ret = Internal.IsValid_0((__Instance + __PointerAdjustment));
            return __ret;
        }

        public static implicit operator bool(wxArgNormalizedString __op)
        {
            if (ReferenceEquals(__op, null))
                throw new global::System.ArgumentNullException("__op", "Cannot be null because it is a C++ reference (&).");
            var arg0 = __op.__Instance;
            var __ret = Internal.OperatorConversion_0(arg0);
            return __ret;
        }

        public wxString GetString()
        {
            var __ret = new wxString.Internal();
            Internal.GetString_0(new IntPtr(&__ret), (__Instance + __PointerAdjustment));
            return wxString.__CreateInstance(__ret);
        }

        public static implicit operator wxString(wxArgNormalizedString __op)
        {
            if (ReferenceEquals(__op, null))
                throw new global::System.ArgumentNullException("__op", "Cannot be null because it is a C++ reference (&).");
            var arg0 = __op.__Instance;
            var __ret = new wxString.Internal();
            Internal.OperatorConversion_1(new IntPtr(&__ret), arg0);
            return wxString.__CreateInstance(__ret);
        }
    }
}