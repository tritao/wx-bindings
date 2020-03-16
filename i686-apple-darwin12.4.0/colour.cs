//----------------------------------------------------------------------------
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
//----------------------------------------------------------------------------
using System;
using System.Runtime.InteropServices;
using System.Security;

namespace wxSharp
{
    public unsafe partial class wxColour : wxColourBase, IDisposable
    {
        [StructLayout(LayoutKind.Explicit, Size = 16)]
        public new partial struct Internal
        {
            [FieldOffset(4)]
            public global::System.IntPtr m_refData;

            [FieldOffset(8)]
            internal wxCFRef.Internal m_cgColour;

            [FieldOffset(12)]
            public byte m_red;

            [FieldOffset(13)]
            public byte m_blue;

            [FieldOffset(14)]
            public byte m_green;

            [FieldOffset(15)]
            public byte m_alpha;

            [FieldOffset(0)]
            public global::System.IntPtr vfptr0;

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColourC2Ev")]
            internal static extern void ctor_0(global::System.IntPtr instance);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColourC2Ehhhh")]
            internal static extern void ctor_1(global::System.IntPtr instance, byte red, byte green, byte blue, byte alpha);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColourC2Em")]
            internal static extern void ctor_2(global::System.IntPtr instance, uint colRGB);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColourC2ERK8wxString")]
            internal static extern void ctor_3(global::System.IntPtr instance, global::System.IntPtr colourName);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColourC2EPKc")]
            internal static extern void ctor_4(global::System.IntPtr instance, global::System.IntPtr colourName);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColourC2ERKS_")]
            internal static extern void cctor_9(global::System.IntPtr instance, global::System.IntPtr _0);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxColoureqERKS_")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool OperatorEqualEqual_0(global::System.IntPtr instance, global::System.IntPtr colour);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZNK8wxColourneERKS_")]
            [return: MarshalAsAttribute(UnmanagedType.I1)]
            internal static extern bool OperatorExclaimEqual_0(global::System.IntPtr instance, global::System.IntPtr colour);

            [SuppressUnmanagedCodeSecurity]
            [DllImport("wxSharp", CallingConvention = global::System.Runtime.InteropServices.CallingConvention.Cdecl,
                EntryPoint="_ZN8wxColour14wxCreateObjectEv")]
            internal static extern global::System.IntPtr wxCreateObject_0();
        }

        public static new wxColour __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new wxColour(native.ToPointer(), skipVTables);
        }

        public static wxColour __CreateInstance(wxColour.Internal native, bool skipVTables = false)
        {
            return new wxColour(native, skipVTables);
        }

        private static void* __CopyValue(wxColour.Internal native)
        {
            var ret = Marshal.AllocHGlobal(16);
            wxColour.Internal.cctor_9(ret, new global::System.IntPtr(&native));
            return ret.ToPointer();
        }

        private wxColour(wxColour.Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected wxColour(void* native, bool skipVTables = false)
            : base((void*) null)
        {
            __PointerAdjustment = 0;
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
            if (skipVTables)
                __OriginalVTables = new void*[] { ((Internal*) native)->vfptr0.ToPointer() };
            else
                SetupVTables(true);
        }

        public wxColour()
            : this((void*) null)
        {
            __Instance = Marshal.AllocHGlobal(16);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            Internal.ctor_0((__Instance + __PointerAdjustment));
            SetupVTables(GetType().FullName == "wxSharp.wxColour");
        }

        public wxColour(byte red, byte green, byte blue, byte alpha)
            : this((void*) null)
        {
            __Instance = Marshal.AllocHGlobal(16);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            Internal.ctor_1((__Instance + __PointerAdjustment), red, green, blue, alpha);
            SetupVTables(GetType().FullName == "wxSharp.wxColour");
        }

        public wxColour(uint colRGB)
            : this((void*) null)
        {
            __Instance = Marshal.AllocHGlobal(16);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            Internal.ctor_2((__Instance + __PointerAdjustment), colRGB);
            SetupVTables(GetType().FullName == "wxSharp.wxColour");
        }

        public wxColour(wxString colourName)
            : this((void*) null)
        {
            __Instance = Marshal.AllocHGlobal(16);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(colourName, null))
                throw new global::System.ArgumentNullException("colourName", "Cannot be null because it is a C++ reference (&).");
            var arg0 = colourName.__Instance;
            Internal.ctor_3((__Instance + __PointerAdjustment), arg0);
            SetupVTables(GetType().FullName == "wxSharp.wxColour");
        }

        public wxColour(string colourName)
            : this((void*) null)
        {
            __Instance = Marshal.AllocHGlobal(16);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            var arg0 = Marshal.StringToHGlobalAnsi(colourName);
            Internal.ctor_4((__Instance + __PointerAdjustment), arg0);
            Marshal.FreeHGlobal(arg0);
            SetupVTables(GetType().FullName == "wxSharp.wxColour");
        }

        public wxColour(wxColour _0)
            : this((void*) null)
        {
            __Instance = Marshal.AllocHGlobal(16);
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            if (ReferenceEquals(_0, null))
                throw new global::System.ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
            var arg0 = _0.__Instance;
            Internal.cctor_9((__Instance + __PointerAdjustment), arg0);
            SetupVTables(GetType().FullName == "wxSharp.wxColour");
        }

        public override bool IsOk()
        {
            var __slot = *(void**) ((IntPtr) __OriginalVTables[0] + 10 * 4);
            var ___IsOk_0Delegate = (Delegates.Func_bool_IntPtr) Marshal.GetDelegateForFunctionPointer(new IntPtr(__slot), typeof(Delegates.Func_bool_IntPtr));
            var __ret = ___IsOk_0Delegate((__Instance + __PointerAdjustment));
            return __ret;
        }

        public override byte Red()
        {
            var __slot = *(void**) ((IntPtr) __OriginalVTables[0] + 5 * 4);
            var ___Red_0Delegate = (Delegates.Func_byte_IntPtr) Marshal.GetDelegateForFunctionPointer(new IntPtr(__slot), typeof(Delegates.Func_byte_IntPtr));
            var __ret = ___Red_0Delegate((__Instance + __PointerAdjustment));
            return __ret;
        }

        public override byte Green()
        {
            var __slot = *(void**) ((IntPtr) __OriginalVTables[0] + 6 * 4);
            var ___Green_0Delegate = (Delegates.Func_byte_IntPtr) Marshal.GetDelegateForFunctionPointer(new IntPtr(__slot), typeof(Delegates.Func_byte_IntPtr));
            var __ret = ___Green_0Delegate((__Instance + __PointerAdjustment));
            return __ret;
        }

        public override byte Blue()
        {
            var __slot = *(void**) ((IntPtr) __OriginalVTables[0] + 7 * 4);
            var ___Blue_0Delegate = (Delegates.Func_byte_IntPtr) Marshal.GetDelegateForFunctionPointer(new IntPtr(__slot), typeof(Delegates.Func_byte_IntPtr));
            var __ret = ___Blue_0Delegate((__Instance + __PointerAdjustment));
            return __ret;
        }

        public override byte Alpha()
        {
            return base.Alpha();
        }

        public static bool operator ==(wxColour __op, wxColour colour)
        {
            bool __opNull = ReferenceEquals(__op, null);
            bool colourNull = ReferenceEquals(colour, null);
            if (__opNull || colourNull)
                return __opNull && colourNull;
            var arg0 = __op.__Instance;
            var arg1 = colour.__Instance;
            var __ret = Internal.OperatorEqualEqual_0(arg0, arg1);
            return __ret;
        }

        public override bool Equals(object obj)
        {
            return this == obj as wxColour;
        }

        public override int GetHashCode()
        {
            if (__Instance == global::System.IntPtr.Zero)
                return global::System.IntPtr.Zero.GetHashCode();
            return (*(Internal*) __Instance).GetHashCode();
        }

        public static bool operator !=(wxColour __op, wxColour colour)
        {
            bool __opNull = ReferenceEquals(__op, null);
            bool colourNull = ReferenceEquals(colour, null);
            if (__opNull || colourNull)
                return !(__opNull && colourNull);
            var arg0 = __op.__Instance;
            var arg1 = colour.__Instance;
            var __ret = Internal.OperatorExclaimEqual_0(arg0, arg1);
            return __ret;
        }

        protected override void InitRGBA(byte r, byte g, byte b, byte a)
        {
            var __slot = *(void**) ((IntPtr) __OriginalVTables[0] + 11 * 4);
            var ___InitRGBA_0Delegate = (Delegates.Action_IntPtr_byte_byte_byte_byte) Marshal.GetDelegateForFunctionPointer(new IntPtr(__slot), typeof(Delegates.Action_IntPtr_byte_byte_byte_byte));
            ___InitRGBA_0Delegate((__Instance + __PointerAdjustment), r, g, b, a);
        }

        public override wxClassInfo GetClassInfo()
        {
            return base.GetClassInfo();
        }

        public static wxObject wxCreateObject()
        {
            var __ret = Internal.wxCreateObject_0();
            wxObject __result0;
            if (__ret == IntPtr.Zero) __result0 = null;
            else if (wxObject.NativeToManagedMap.ContainsKey(__ret))
                __result0 = (wxObject) wxObject.NativeToManagedMap[__ret];
            else wxObject.NativeToManagedMap[__ret] = __result0 = (wxObject) wxObject.__CreateInstance(__ret);
            return __result0;
        }

        public static wxClassInfo ms_classInfo
        {
            get
            {
                var __ptr = (wxClassInfo.Internal*)CppSharp.SymbolResolver.ResolveSymbol("wxSharp", "_ZN8wxColour12ms_classInfoE");
                return wxClassInfo.__CreateInstance(*__ptr);
            }
        }

        #region Virtual table interop

        // 
        private static Delegates.Func_IntPtr_IntPtr _GetClassInfo_0DelegateInstance;

        private static global::System.IntPtr _GetClassInfo_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.GetClassInfo();
            return ReferenceEquals(__ret, null) ? global::System.IntPtr.Zero : __ret.__Instance;
        }

        // wxColour
        private static Delegates.Action_IntPtr _dtor_0DelegateInstance;

        private static void _dtor_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            __target.Dispose(false);
        }

        // wxObjectRefData *CreateRefData() const
        private static Delegates.Func_IntPtr_IntPtr _CreateRefData_0DelegateInstance;

        private static global::System.IntPtr _CreateRefData_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.CreateRefData();
            return ReferenceEquals(__ret, null) ? global::System.IntPtr.Zero : __ret.__Instance;
        }

        // wxObjectRefData *CloneRefData(const wxObjectRefData *data) const
        private static Delegates.Func_IntPtr_IntPtr_IntPtr _CloneRefData_0DelegateInstance;

        private static global::System.IntPtr _CloneRefData_0DelegateHook(global::System.IntPtr instance, global::System.IntPtr data)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            wxRefCounter __result0;
            if (data == IntPtr.Zero) __result0 = null;
            else if (wxRefCounter.NativeToManagedMap.ContainsKey(data))
                __result0 = (wxRefCounter) wxRefCounter.NativeToManagedMap[data];
            else __result0 = (wxRefCounter) wxRefCounter.__CreateInstance(data, skipVTables: true);
            var __ret = __target.CloneRefData(__result0);
            return ReferenceEquals(__ret, null) ? global::System.IntPtr.Zero : __ret.__Instance;
        }

        // ChannelType Red() const
        private static Delegates.Func_byte_IntPtr _Red_0DelegateInstance;

        private static byte _Red_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.Red();
            return __ret;
        }

        // ChannelType Green() const
        private static Delegates.Func_byte_IntPtr _Green_0DelegateInstance;

        private static byte _Green_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.Green();
            return __ret;
        }

        // ChannelType Blue() const
        private static Delegates.Func_byte_IntPtr _Blue_0DelegateInstance;

        private static byte _Blue_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.Blue();
            return __ret;
        }

        // ChannelType Alpha() const
        private static Delegates.Func_byte_IntPtr _Alpha_0DelegateInstance;

        private static byte _Alpha_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.Alpha();
            return __ret;
        }

        // wxString GetAsString(long flags = wxC2S_NAME | wxC2S_CSS_SYNTAX) const
        private static Delegates.Action_IntPtr_IntPtr_int _GetAsString_0DelegateInstance;

        private static void _GetAsString_0DelegateHook(global::System.IntPtr @return, global::System.IntPtr instance, int flags)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.GetAsString(flags);
            *(wxString.Internal*) @return = ReferenceEquals(__ret, null) ? new wxString.Internal() : *(wxString.Internal*) (__ret.__Instance);
        }

        // bool IsOk() const
        private static Delegates.Func_bool_IntPtr _IsOk_0DelegateInstance;

        private static bool _IsOk_0DelegateHook(global::System.IntPtr instance)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            var __ret = __target.IsOk();
            return __ret;
        }

        // void InitRGBA(ChannelType r, ChannelType g, ChannelType b, ChannelType a)
        private static Delegates.Action_IntPtr_byte_byte_byte_byte _InitRGBA_0DelegateInstance;

        private static void _InitRGBA_0DelegateHook(global::System.IntPtr instance, byte r, byte g, byte b, byte a)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            __target.InitRGBA(r, g, b, a);
        }

        // bool FromString(const wxString& s)
        private static Delegates.Func_bool_IntPtr_IntPtr _FromString_0DelegateInstance;

        private static bool _FromString_0DelegateHook(global::System.IntPtr instance, global::System.IntPtr s)
        {
            if (!NativeToManagedMap.ContainsKey(instance))
                throw new global::System.Exception("No managed instance was found");

            var __target = (wxColour) NativeToManagedMap[instance];
            if (__target.__ownsNativeInstance)
                __target.SetupVTables();
            wxString __result0;
            if (s == IntPtr.Zero) __result0 = null;
            else if (wxString.NativeToManagedMap.ContainsKey(s))
                __result0 = (wxString) wxString.NativeToManagedMap[s];
            else __result0 = wxString.__CreateInstance(s);
            var __ret = __target.FromString(__result0);
            return __ret;
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
                _Thunks = new void*[12];
                _GetClassInfo_0DelegateInstance += _GetClassInfo_0DelegateHook;
                _Thunks[0] = Marshal.GetFunctionPointerForDelegate(_GetClassInfo_0DelegateInstance).ToPointer();
                _dtor_0DelegateInstance += _dtor_0DelegateHook;
                _Thunks[1] = Marshal.GetFunctionPointerForDelegate(_dtor_0DelegateInstance).ToPointer();
                _CreateRefData_0DelegateInstance += _CreateRefData_0DelegateHook;
                _Thunks[2] = Marshal.GetFunctionPointerForDelegate(_CreateRefData_0DelegateInstance).ToPointer();
                _CloneRefData_0DelegateInstance += _CloneRefData_0DelegateHook;
                _Thunks[3] = Marshal.GetFunctionPointerForDelegate(_CloneRefData_0DelegateInstance).ToPointer();
                _Red_0DelegateInstance += _Red_0DelegateHook;
                _Thunks[4] = Marshal.GetFunctionPointerForDelegate(_Red_0DelegateInstance).ToPointer();
                _Green_0DelegateInstance += _Green_0DelegateHook;
                _Thunks[5] = Marshal.GetFunctionPointerForDelegate(_Green_0DelegateInstance).ToPointer();
                _Blue_0DelegateInstance += _Blue_0DelegateHook;
                _Thunks[6] = Marshal.GetFunctionPointerForDelegate(_Blue_0DelegateInstance).ToPointer();
                _Alpha_0DelegateInstance += _Alpha_0DelegateHook;
                _Thunks[7] = Marshal.GetFunctionPointerForDelegate(_Alpha_0DelegateInstance).ToPointer();
                _GetAsString_0DelegateInstance += _GetAsString_0DelegateHook;
                _Thunks[8] = Marshal.GetFunctionPointerForDelegate(_GetAsString_0DelegateInstance).ToPointer();
                _IsOk_0DelegateInstance += _IsOk_0DelegateHook;
                _Thunks[9] = Marshal.GetFunctionPointerForDelegate(_IsOk_0DelegateInstance).ToPointer();
                _InitRGBA_0DelegateInstance += _InitRGBA_0DelegateHook;
                _Thunks[10] = Marshal.GetFunctionPointerForDelegate(_InitRGBA_0DelegateInstance).ToPointer();
                _FromString_0DelegateInstance += _FromString_0DelegateHook;
                _Thunks[11] = Marshal.GetFunctionPointerForDelegate(_FromString_0DelegateInstance).ToPointer();
            }

            if (destructorOnly)
            {
                if (__ManagedVTablesDtorOnly == null)
                {
                    __ManagedVTablesDtorOnly = new void*[1];
                    var vtptr = Marshal.AllocHGlobal(15 * 4);
                    var vfptr0 = vtptr + 2 * 4;
                    __ManagedVTablesDtorOnly[0] = vfptr0.ToPointer();
                    *(void**)(vfptr0 + -8) = *(void**)(native->vfptr0 + -8);
                    *(void**)(vfptr0 + -4) = *(void**)(native->vfptr0 + -4);
                    *(void**)(vfptr0 + 0) = *(void**)(native->vfptr0 + 0);
                    *(void**)(vfptr0 + 4) = *(void**)(native->vfptr0 + 4);
                    *(void**)(vfptr0 + 8) = _Thunks[1];
                    *(void**)(vfptr0 + 12) = *(void**)(native->vfptr0 + 12);
                    *(void**)(vfptr0 + 16) = *(void**)(native->vfptr0 + 16);
                    *(void**)(vfptr0 + 20) = *(void**)(native->vfptr0 + 20);
                    *(void**)(vfptr0 + 24) = *(void**)(native->vfptr0 + 24);
                    *(void**)(vfptr0 + 28) = *(void**)(native->vfptr0 + 28);
                    *(void**)(vfptr0 + 32) = *(void**)(native->vfptr0 + 32);
                    *(void**)(vfptr0 + 36) = *(void**)(native->vfptr0 + 36);
                    *(void**)(vfptr0 + 40) = *(void**)(native->vfptr0 + 40);
                    *(void**)(vfptr0 + 44) = *(void**)(native->vfptr0 + 44);
                    *(void**)(vfptr0 + 48) = *(void**)(native->vfptr0 + 48);
                }

                native->vfptr0 = new IntPtr(__ManagedVTablesDtorOnly[0]);
            }
            else
            {
                if (__ManagedVTables == null)
                {
                    __ManagedVTables = new void*[1];
                    var vtptr = Marshal.AllocHGlobal(15 * 4);
                    var vfptr0 = vtptr + 2 * 4;
                    __ManagedVTables[0] = vfptr0.ToPointer();
                    *(void**)(vfptr0 + -8) = *(void**)(native->vfptr0 + -8);
                    *(void**)(vfptr0 + -4) = *(void**)(native->vfptr0 + -4);
                    *(void**)(vfptr0 + 0) = _Thunks[0];
                    *(void**)(vfptr0 + 4) = *(void**)(native->vfptr0 + 4);
                    *(void**)(vfptr0 + 8) = _Thunks[1];
                    *(void**)(vfptr0 + 12) = _Thunks[2];
                    *(void**)(vfptr0 + 16) = _Thunks[3];
                    *(void**)(vfptr0 + 20) = _Thunks[4];
                    *(void**)(vfptr0 + 24) = _Thunks[5];
                    *(void**)(vfptr0 + 28) = _Thunks[6];
                    *(void**)(vfptr0 + 32) = _Thunks[7];
                    *(void**)(vfptr0 + 36) = _Thunks[8];
                    *(void**)(vfptr0 + 40) = _Thunks[9];
                    *(void**)(vfptr0 + 44) = _Thunks[10];
                    *(void**)(vfptr0 + 48) = _Thunks[11];
                }

                native->vfptr0 = new IntPtr(__ManagedVTables[0]);
            }
        }

        #endregion
    }
}