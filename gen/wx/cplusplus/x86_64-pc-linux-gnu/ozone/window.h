// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/window.h>
#include "ozone/colour.h"
#include "ozone/event.h"
#include "ozone/gdicmn.h"

namespace Ozone
{
    class DC;
    class Event;
    class HelpEvent;
    class IdleEvent;
    class InitDialogEvent;
    class KeyEvent;
    class MouseEvent;
    class Object;
    class Sizer;
    class SysColourChangedEvent;
    class UpdateUIEvent;
    class VisualAttributes;
    class Window;
    class WindowList;
    class WindowListNode;
    enum class BackgroundStyle : unsigned int;
    enum class Border : unsigned int;
    enum class HitTest : unsigned int;
    enum class KeyType : unsigned int;
    enum class SendEventFlags : unsigned int;
    enum class ShowEffect : unsigned int;
    enum class TouchMode : unsigned int;
    enum class WindowVariant : unsigned int;
}

namespace Ozone
{
    enum class WindowVariant : unsigned int
    {
        NORMAL = 0,
        SMALL = 1,
        MINI = 2,
        LARGE = 3,
        MAX = 4
    };

    enum class ShowEffect : unsigned int
    {
        NONE = 0,
        ROLL_TO_LEFT = 1,
        ROLL_TO_RIGHT = 2,
        ROLL_TO_TOP = 3,
        ROLL_TO_BOTTOM = 4,
        SLIDE_TO_LEFT = 5,
        SLIDE_TO_RIGHT = 6,
        SLIDE_TO_TOP = 7,
        SLIDE_TO_BOTTOM = 8,
        BLEND = 9,
        EXPAND = 10,
        MAX = 11
    };

    enum class TouchMode : unsigned int
    {
        NONE = 0x0,
        VERTICAL_PAN_GESTURE = 0x1,
        HORIZONTAL_PAN_GESTURE = 0x2,
        PAN_GESTURES = 3,
        ZOOM_GESTURE = 0x4,
        ROTATE_GESTURE = 0x8,
        PRESS_GESTURES = 0x10,
        ALL_GESTURES = 0x1f
    };

    enum class SendEventFlags : unsigned int
    {
        POST = 1
    };

    class VisualAttributes
    {
    public:

        ::wxVisualAttributes* __Instance;

        void* __ExternalInstance;

        VisualAttributes(::wxVisualAttributes* instance, bool ownNativeInstance = false);

        VisualAttributes(const ::Ozone::VisualAttributes& _0);

        VisualAttributes();

        ~VisualAttributes();

        ::Ozone::Color get_colFg();

        void set_colFg(::Ozone::Color value);

        ::Ozone::Color get_colBg();

        void set_colBg(::Ozone::Color value);

    protected:

        bool __OwnsNativeInstance;
    };

    class WindowListNode
    {
    public:

        ::wxWindowListNode* __Instance;

        void* __ExternalInstance;

        WindowListNode(::wxWindowListNode* instance, bool ownNativeInstance = false);

        ~WindowListNode();

        ::Ozone::WindowListNode* GetNext() const;

        ::Ozone::WindowListNode* GetPrevious() const;

        ::Ozone::Window* GetData() const;

        void SetData(::Ozone::Window* data);

    protected:

        bool __OwnsNativeInstance;
    };

    class WindowList
    {
    public:

        ::wxWindowList* __Instance;

        void* __ExternalInstance;

        WindowList(::wxWindowList* instance, bool ownNativeInstance = false);

        WindowList(::Ozone::KeyType keyType);

        WindowList(const ::Ozone::WindowList& list);

        explicit WindowList(unsigned long n, ::Ozone::Window*const & v);

        ~WindowList();

        ::Ozone::WindowListNode* GetFirst() const;

        ::Ozone::WindowListNode* GetLast() const;

        ::Ozone::WindowListNode* Item(unsigned long index) const;

        ::Ozone::Window* operator[](unsigned long index) const;

        ::Ozone::WindowListNode* Append(long key, void* object);

        ::Ozone::WindowListNode* Append(wchar_t* key, void* object);

        ::Ozone::WindowListNode* DetachNode(::Ozone::WindowListNode* node);

        bool DeleteNode(::Ozone::WindowListNode* node);

        void Erase(::Ozone::WindowListNode* it);

        void resize(unsigned long n, ::Ozone::Window* v);

        unsigned long size() const;

        unsigned long max_size() const;

        bool empty() const;

        void push_front(::Ozone::Window*const & v);

        void pop_front();

        void push_back(::Ozone::Window*const & v);

        void pop_back();

        void assign(unsigned long n, ::Ozone::Window*const & v);

        void clear();

        void remove(::Ozone::Window*const & v);

        void reverse();

    protected:

        bool __OwnsNativeInstance;
    };

    class Window : public Ozone::EvtHandler
    {
    public:

        enum class ScrollDir : unsigned int
        {
            Horz = 0,
            Vert = 1,
            Max = 2
        };

        enum class NavigationKind : unsigned int
        {
            Tab = 0,
            Accel = 1
        };

        Window(::wxWindow* instance, bool ownNativeInstance = false);

        Window();

        Window(::Ozone::Window* parent, int id, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name);

        ~Window();

        fastdelegate::FastDelegate<void (::Ozone::ActivateEvent&)> OnActivate;

        fastdelegate::FastDelegate<void (::Ozone::ChildFocusEvent&)> OnChildFocus;

        fastdelegate::FastDelegate<void (::Ozone::ContextMenuEvent&)> OnContextMenu;

        fastdelegate::FastDelegate<void (::Ozone::HelpEvent&)> OnHelp;

        fastdelegate::FastDelegate<void (::Ozone::HelpEvent&)> OnHelpRange;

        fastdelegate::FastDelegate<void (::Ozone::EraseEvent&)> OnEraseBackground;

        fastdelegate::FastDelegate<void (::Ozone::FocusEvent&)> OnSetFocus;

        fastdelegate::FastDelegate<void (::Ozone::FocusEvent&)> OnKillFocus;

        fastdelegate::FastDelegate<void (::Ozone::IdleEvent&)> OnIdle;

        fastdelegate::FastDelegate<void (::Ozone::JoystickEvent&)> OnJoyButtonDown;

        fastdelegate::FastDelegate<void (::Ozone::JoystickEvent&)> OnJoyButtonUp;

        fastdelegate::FastDelegate<void (::Ozone::JoystickEvent&)> OnJoyMove;

        fastdelegate::FastDelegate<void (::Ozone::JoystickEvent&)> OnJoyZmove;

        fastdelegate::FastDelegate<void (::Ozone::KeyEvent&)> OnKeyDown;

        fastdelegate::FastDelegate<void (::Ozone::KeyEvent&)> OnKeyUp;

        fastdelegate::FastDelegate<void (::Ozone::KeyEvent&)> OnChar;

        fastdelegate::FastDelegate<void (::Ozone::KeyEvent&)> OnCharHook;

        fastdelegate::FastDelegate<void (::Ozone::MouseCaptureLostEvent&)> OnMouseCaptureLost;

        fastdelegate::FastDelegate<void (::Ozone::MouseCaptureChangedEvent&)> OnMouseCaptureChanged;

        fastdelegate::FastDelegate<void (::Ozone::MouseEvent&)> OnMouseAux1Down;

        fastdelegate::FastDelegate<void (::Ozone::MouseEvent&)> OnMouseAux1Up;

        fastdelegate::FastDelegate<void (::Ozone::MouseEvent&)> OnMouseAux1Dclick;

        fastdelegate::FastDelegate<void (::Ozone::MouseEvent&)> OnMouseAux2Down;

        fastdelegate::FastDelegate<void (::Ozone::MouseEvent&)> OnMouseAux2Up;

        fastdelegate::FastDelegate<void (::Ozone::MouseEvent&)> OnMouseAux2Dclick;

        fastdelegate::FastDelegate<void (::Ozone::PaintEvent&)> OnPaint;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinTop;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinBottom;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinLineup;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinLinedown;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinPageup;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinPagedown;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinThumbtrack;

        fastdelegate::FastDelegate<void (::Ozone::ScrollWinEvent&)> OnScrollwinThumbrelease;

        fastdelegate::FastDelegate<void (::Ozone::SetCursorEvent&)> OnSetCursor;

        fastdelegate::FastDelegate<void (::Ozone::SizeEvent&)> OnSize;

        fastdelegate::FastDelegate<void (::Ozone::SysColourChangedEvent&)> OnSysColourChanged;

        bool Create(::Ozone::Window* parent, int id, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name);

        virtual void Raise();

        virtual void Lower();

        virtual bool Show(bool show);

        virtual bool IsShown() const;

        virtual bool IsRetained() const;

        virtual void SetFocus();

        virtual void SetCanFocus(bool canFocus);

        virtual void WarpPointer(int x, int y);

        virtual bool EnableTouchEvents(int eventsMask);

        virtual void Refresh(bool eraseBackground, const ::Ozone::Rect* rect);

        virtual void Update();

        virtual void ClearBackground();

        virtual bool SetBackgroundColour(const ::Ozone::Color& colour);

        virtual bool SetForegroundColour(const ::Ozone::Color& colour);

        virtual bool SetBackgroundStyle(::Ozone::BackgroundStyle style);

        virtual bool IsTransparentBackgroundSupported(const char* reason) const;

        virtual int GetCharHeight() const;

        virtual int GetCharWidth() const;

        virtual double GetContentScaleFactor() const;

        virtual double GetDPIScaleFactor() const;

        virtual void SetScrollbar(int orient, int pos, int thumbVisible, int range, bool refresh);

        virtual void SetScrollPos(int orient, int pos, bool refresh);

        virtual int GetScrollPos(int orient) const;

        virtual int GetScrollThumb(int orient) const;

        virtual int GetScrollRange(int orient) const;

        virtual void ScrollWindow(int dx, int dy, const ::Ozone::Rect* rect);

        virtual bool ScrollLines(int lines);

        virtual bool ScrollPages(int pages);

        virtual int AdjustForLayoutDirection(int x, int width, int widthTotal) const;

        virtual bool DoIsExposed(int x, int y) const;

        virtual bool DoIsExposed(int x, int y, int w, int h) const;

        virtual void SetDoubleBuffered(bool on);

        virtual bool IsDoubleBuffered() const;

        virtual void SetLabel(const char* label);

        virtual const char* GetLabel() const;

        virtual void OnInternalIdle();

        bool PreCreation(::Ozone::Window* parent, const ::Ozone::Point& pos, const ::Ozone::Size& size);

        void PostCreation();

        void DoAddChild(::Ozone::Window* child);

        bool IsOfStandardClass() const;

        bool Close(bool force);

        virtual bool Destroy();

        bool DestroyChildren();

        bool IsBeingDeleted() const;

        virtual void SetName(const char* name);

        virtual const char* GetName() const;

        void SetWindowVariant(::Ozone::WindowVariant variant);

        ::Ozone::WindowVariant GetWindowVariant() const;

        virtual void SetId(int winid);

        int GetId() const;

        void SetSize(int x, int y, int width, int height, int sizeFlags);

        void SetSize(int width, int height);

        void SetSize(const ::Ozone::Size& size);

        void SetSize(const ::Ozone::Rect& rect, int sizeFlags);

        void Move(int x, int y, int flags);

        void Move(const ::Ozone::Point& pt, int flags);

        void SetPosition(const ::Ozone::Point& pt);

        void SetClientSize(int width, int height);

        void SetClientSize(const ::Ozone::Size& size);

        void SetClientSize(const ::Ozone::Rect& rect);

        void GetPosition(int* x, int* y) const;

        ::Ozone::Point GetPosition() const;

        void GetScreenPosition(int* x, int* y) const;

        ::Ozone::Point GetScreenPosition() const;

        void GetSize(int* w, int* h) const;

        ::Ozone::Size GetSize() const;

        void GetClientSize(int* w, int* h) const;

        ::Ozone::Size GetClientSize() const;

        ::Ozone::Rect GetRect() const;

        ::Ozone::Rect GetScreenRect() const;

        virtual ::Ozone::Point GetClientAreaOrigin() const;

        ::Ozone::Rect GetClientRect() const;

        virtual ::Ozone::Size ClientToWindowSize(const ::Ozone::Size& size) const;

        virtual ::Ozone::Size WindowToClientSize(const ::Ozone::Size& size) const;

        ::Ozone::Size GetBestSize() const;

        void GetBestSize(int* w, int* h) const;

        int GetBestHeight(int width) const;

        int GetBestWidth(int height) const;

        void InvalidateBestSize();

        void CacheBestSize(const ::Ozone::Size& size) const;

        virtual ::Ozone::Size GetEffectiveMinSize() const;

        void SetInitialSize(const ::Ozone::Size& size);

        void Centre(int dir);

        void Center(int dir);

        void CentreOnParent(int dir);

        void CenterOnParent(int dir);

        virtual void Fit();

        virtual void FitInside();

        virtual void SetSizeHints(int minW, int minH, int maxW, int maxH, int incW, int incH);

        void SetSizeHints(const ::Ozone::Size& minSize, const ::Ozone::Size& maxSize, const ::Ozone::Size& incSize);

        virtual void SetMinSize(const ::Ozone::Size& minSize);

        virtual void SetMaxSize(const ::Ozone::Size& maxSize);

        virtual void SetMinClientSize(const ::Ozone::Size& size);

        virtual void SetMaxClientSize(const ::Ozone::Size& size);

        virtual ::Ozone::Size GetMinSize() const;

        virtual ::Ozone::Size GetMaxSize() const;

        virtual ::Ozone::Size GetMinClientSize() const;

        virtual ::Ozone::Size GetMaxClientSize() const;

        int GetMinWidth() const;

        int GetMinHeight() const;

        int GetMaxWidth() const;

        int GetMaxHeight() const;

        void SetVirtualSize(const ::Ozone::Size& size);

        void SetVirtualSize(int x, int y);

        ::Ozone::Size GetVirtualSize() const;

        void GetVirtualSize(int* x, int* y) const;

        virtual void DoSetVirtualSize(int x, int y);

        virtual ::Ozone::Size DoGetVirtualSize() const;

        virtual ::Ozone::Size GetBestVirtualSize() const;

        virtual ::Ozone::Size GetWindowBorderSize() const;

        virtual bool InformFirstDirection(int direction, int size, int availableOtherDir);

        virtual void SendSizeEvent(int flags);

        void SendSizeEventToParent(int flags);

        void PostSizeEvent();

        void PostSizeEventToParent();

        virtual bool BeginRepositioningChildren();

        virtual void EndRepositioningChildren();

        bool Hide();

        virtual bool ShowWithEffect(::Ozone::ShowEffect _0, unsigned int _1);

        virtual bool HideWithEffect(::Ozone::ShowEffect _0, unsigned int _1);

        virtual bool Enable(bool enable);

        bool Disable();

        bool IsEnabled() const;

        virtual bool IsThisEnabled() const;

        virtual bool IsShownOnScreen() const;

        virtual void SetWindowStyleFlag(long style);

        virtual long GetWindowStyleFlag() const;

        void SetWindowStyle(long style);

        long GetWindowStyle() const;

        bool HasFlag(int flag) const;

        bool ToggleWindowStyle(int flag);

        virtual void SetExtraStyle(long exStyle);

        long GetExtraStyle() const;

        bool HasExtraStyle(int exFlag) const;

        virtual void SetThemeEnabled(bool enableTheme);

        virtual bool GetThemeEnabled() const;

        virtual void SetFocusFromKbd();

        virtual bool HasFocus() const;

        virtual bool AcceptsFocus() const;

        virtual bool AcceptsFocusRecursively() const;

        virtual bool AcceptsFocusFromKeyboard() const;

        void DisableFocusFromKeyboard();

        virtual bool CanBeFocused() const;

        bool IsFocusable() const;

        bool CanAcceptFocus() const;

        bool CanAcceptFocusFromKeyboard() const;

        virtual void EnableVisibleFocus(bool _0);

        bool NavigateIn(int flags);

        bool Navigate(int flags);

        bool HandleAsNavigationKey(const ::Ozone::KeyEvent& event);

        void MoveBeforeInTabOrder(::Ozone::Window* win);

        void MoveAfterInTabOrder(::Ozone::Window* win);

        ::Ozone::Window* GetPrevSibling() const;

        ::Ozone::Window* GetNextSibling() const;

        ::Ozone::Window* GetParent() const;

        ::Ozone::Window* GetGrandParent() const;

        virtual bool IsTopLevel() const;

        virtual bool IsClientAreaChild(const ::Ozone::Window* _0) const;

        ::Ozone::Window* FindWindow(long winid) const;

        ::Ozone::Window* FindWindow(const char* name) const;

        ::Ozone::EvtHandler* GetEventHandler() const;

        void SetEventHandler(::Ozone::EvtHandler* handler);

        void PushEventHandler(::Ozone::EvtHandler* handler);

        ::Ozone::EvtHandler* PopEventHandler(bool deleteHandler);

        bool RemoveEventHandler(::Ozone::EvtHandler* handler);

        bool ProcessWindowEvent(::Ozone::Event& event);

        bool ProcessWindowEventLocally(::Ozone::Event& event);

        bool HandleWindowEvent(::Ozone::Event& event) const;

        virtual void SetNextHandler(::Ozone::EvtHandler* handler) override;

        virtual void SetPreviousHandler(::Ozone::EvtHandler* handler) override;

        virtual bool Validate();

        virtual bool TransferDataToWindow();

        virtual bool TransferDataFromWindow();

        virtual void InitDialog();

        virtual bool RegisterHotKey(int hotkeyId, int modifiers, int keycode);

        virtual bool UnregisterHotKey(int hotkeyId);

        virtual ::Ozone::Size GetDPI() const;

        ::Ozone::Size FromDIP(const ::Ozone::Size& sz) const;

        ::Ozone::Point FromDIP(const ::Ozone::Point& pt) const;

        int FromDIP(int d) const;

        ::Ozone::Size ToDIP(const ::Ozone::Size& sz) const;

        ::Ozone::Point ToDIP(const ::Ozone::Point& pt) const;

        int ToDIP(int d) const;

        ::Ozone::Point ConvertPixelsToDialog(const ::Ozone::Point& pt) const;

        ::Ozone::Point ConvertDialogToPixels(const ::Ozone::Point& pt) const;

        ::Ozone::Size ConvertPixelsToDialog(const ::Ozone::Size& sz) const;

        ::Ozone::Size ConvertDialogToPixels(const ::Ozone::Size& sz) const;

        void CaptureMouse();

        void ReleaseMouse();

        virtual bool HasCapture() const;

        void RefreshRect(const ::Ozone::Rect& rect, bool eraseBackground);

        void Freeze();

        void Thaw();

        bool IsFrozen() const;

        virtual void PrepareDC(::Ozone::DC& _0);

        ::Ozone::Rect GetUpdateClientRect() const;

        bool IsExposed(int x, int y) const;

        bool IsExposed(int x, int y, int w, int h) const;

        bool IsExposed(const ::Ozone::Point& pt) const;

        bool IsExposed(const ::Ozone::Rect& rect) const;

        virtual ::Ozone::VisualAttributes GetDefaultAttributes() const;

        void SetOwnBackgroundColour(const ::Ozone::Color& colour);

        ::Ozone::Color GetBackgroundColour() const;

        bool InheritsBackgroundColour() const;

        bool UseBgCol() const;

        bool UseBackgroundColour() const;

        void SetOwnForegroundColour(const ::Ozone::Color& colour);

        ::Ozone::Color GetForegroundColour() const;

        bool UseForegroundColour() const;

        bool InheritsForegroundColour() const;

        ::Ozone::BackgroundStyle GetBackgroundStyle() const;

        virtual bool HasTransparentBackground();

        ::Ozone::Size GetTextExtent(const char* string) const;

        void ClientToScreen(int* x, int* y) const;

        void ScreenToClient(int* x, int* y) const;

        ::Ozone::Point ClientToScreen(const ::Ozone::Point& pt) const;

        ::Ozone::Point ScreenToClient(const ::Ozone::Point& pt) const;

        ::Ozone::HitTest HitTest(int x, int y) const;

        ::Ozone::HitTest HitTest(const ::Ozone::Point& pt) const;

        ::Ozone::Border GetBorder(long flags) const;

        ::Ozone::Border GetBorder() const;

        virtual void UpdateWindowUI(long flags);

        virtual void DoUpdateWindowUI(::Ozone::UpdateUIEvent& event);

        virtual bool HasMultiplePages() const;

        virtual bool CanScroll(int orient) const;

        bool HasScrollbar(int orient) const;

        bool LineUp();

        bool LineDown();

        bool PageUp();

        bool PageDown();

        virtual void AlwaysShowScrollbars(bool _0, bool _1);

        virtual bool IsScrollbarAlwaysShown(int _0) const;

        void SetHelpText(const char* text);

        virtual const char* GetHelpTextAtPoint(const ::Ozone::Point& pt, ::Ozone::HelpEvent::Source origin) const;

        const char* GetHelpText() const;

        void SetToolTip(const char* tip);

        void UnsetToolTip();

        const char* GetToolTipText() const;

        virtual void DragAcceptFiles(bool accept);

        ::Ozone::WindowList* GetConstraintsInvolvedIn() const;

        void DeleteRelatedConstraints();

        void ResetConstraints();

        virtual void SetConstraintSizes(bool recurse);

        virtual bool LayoutPhase1(int* noChanges);

        virtual bool LayoutPhase2(int* noChanges);

        virtual bool DoPhase(int phase);

        virtual void SetSizeConstraint(int x, int y, int w, int h);

        virtual void MoveConstraint(int x, int y);

        virtual void GetSizeConstraint(int* w, int* h) const;

        virtual void GetClientSizeConstraint(int* w, int* h) const;

        virtual void GetPositionConstraint(int* x, int* y) const;

        void SetAutoLayout(bool autoLayout);

        bool GetAutoLayout() const;

        virtual bool Layout();

        void SetSizer(::Ozone::Sizer* sizer, bool deleteOld);

        void SetSizerAndFit(::Ozone::Sizer* sizer, bool deleteOld);

        ::Ozone::Sizer* GetSizer() const;

        void SetContainingSizer(::Ozone::Sizer* sizer);

        ::Ozone::Sizer* GetContainingSizer() const;

        virtual bool SetTransparent(unsigned char _0);

        virtual bool CanSetTransparent();

        void OnInitDialog(::Ozone::InitDialogEvent& event);

        void OnMiddleClick(::Ozone::MouseEvent& event);

        virtual bool SendIdleEvents(::Ozone::IdleEvent& event);

        bool WXSendContextMenuEvent(const ::Ozone::Point& posInScreenCoords);

        virtual void DissociateHandle();

        bool HasCustomPalette() const;

        ::Ozone::Window* GetAncestorWithCustomPalette() const;

        virtual void InheritAttributes();

        virtual bool ShouldInheritColours() const;

        virtual bool CanBeOutsideClientArea() const;

        virtual bool CanApplyThemeBorder() const;

        virtual ::Ozone::Window* GetMainWindowOfCompositeControl();

        virtual bool IsTopNavigationDomain(::Ozone::Window::NavigationKind _0) const;

        virtual int HandleEvent(::wxEvent& event) override;

        int get_m_x();

        void set_m_x(int value);

        int get_m_y();

        void set_m_y(int value);

        int get_m_width();

        void set_m_width(int value);

        int get_m_height();

        void set_m_height(int value);

        int get_m_clientWidth();

        void set_m_clientWidth(int value);

        int get_m_clientHeight();

        void set_m_clientHeight(int value);

        bool get_m_useCachedClientSize();

        void set_m_useCachedClientSize(bool value);

        bool get_m_isGtkPositionValid();

        void set_m_isGtkPositionValid(bool value);

        const char* get_m_gtkLabel();

        void set_m_gtkLabel(const char* value);

        bool get_m_noExpose();

        void set_m_noExpose(bool value);

        bool get_m_nativeSizeEvent();

        void set_m_nativeSizeEvent(bool value);

        bool get_m_isScrolling();

        void set_m_isScrolling(bool value);

        bool get_m_clipPaintRegion();

        void set_m_clipPaintRegion(bool value);

        bool get_m_dirtyTabOrder();

        void set_m_dirtyTabOrder(bool value);

        bool get_m_mouseButtonDown();

        void set_m_mouseButtonDown(bool value);

        bool get_m_showOnIdle();

        void set_m_showOnIdle(bool value);

        bool get_m_needCursorReset();

        void set_m_needCursorReset(bool value);

        static ::Ozone::Window::ScrollDir ScrollDirFromOrient(int orient);

        static int OrientFromScrollDir(::Ozone::Window::ScrollDir dir);

        static int NewControlId(int count);

        static void UnreserveControlId(int id, int count);

        static ::Ozone::Window* FindFocus();

        static ::Ozone::Window* DoFindFocus();

        static ::Ozone::Window* FindWindowById(long winid, const ::Ozone::Window* parent);

        static ::Ozone::Window* FindWindowByName(const char* name, const ::Ozone::Window* parent);

        static ::Ozone::Window* FindWindowByLabel(const char* label, const ::Ozone::Window* parent);

        static ::Ozone::Window* GetCapture();

        static ::Ozone::VisualAttributes GetClassDefaultAttributes(::Ozone::WindowVariant variant);
    };

    ::Ozone::Window* FindWindowAtPointer(::Ozone::Point& pt);
    ::Ozone::Point GetMousePosition();
    ::Ozone::Window* GetActiveWindow();
}
