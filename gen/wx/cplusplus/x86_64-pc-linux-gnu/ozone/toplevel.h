// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/toplevel.h>
#include "ozone/gdicmn.h"
#include "ozone/nonownedwnd.h"
#include "ozone/window.h"

namespace Ozone
{
    class ActivateEvent;
    class CloseEvent;
    class Event;
    class Object;
    class Point;
    class SizeEvent;
    class TopLevelWindow;
    class UpdateUIEvent;
    class Window;
    enum class FrameStyle;
    enum class FullscreenMode : unsigned int;
    enum class UserAttention : unsigned int;
}

namespace Ozone
{
    enum class FullscreenMode : unsigned int
    {
        NOMENUBAR = 0x1,
        NOTOOLBAR = 0x2,
        NOSTATUSBAR = 0x4,
        NOBORDER = 0x8,
        NOCAPTION = 0x10,
        ALL = 31
    };

    enum class UserAttention : unsigned int
    {
        INFO = 1,
        ERROR = 2
    };

    enum class FrameStyle
    {
        CENTRE = 1,
        FRAME_NO_TASKBAR = 2,
        FRAME_TOOL_WINDOW = 4,
        FRAME_FLOAT_ON_PARENT = 8,
        FRAME_SHAPED = 16,
        RESIZE_BORDER = 64,
        TINY_CAPTION = 128,
        MAXIMIZE_BOX = 512,
        MINIMIZE_BOX = 1024,
        SYSTEM_MENU = 2048,
        CLOSE_BOX = 4096,
        MAXIMIZE = 8192,
        ICONIZE = 16384,
        MINIMIZE = 16384,
        STAY_ON_TOP = 32768,
        CLIP_CHILDREN = 4194304,
        CAPTION = 536870912,
        DEFAULT_FRAME_STYLE = 541072960
    };

    class TopLevelWindow : public ::Ozone::NonOwnedWindow
    {
    public:

        void* __ExternalInstance;

        TopLevelWindow(::wxTopLevelWindow* instance, bool ownNativeInstance = false);

        TopLevelWindow();

        TopLevelWindow(::Ozone::Window* parent, int winid, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name);

        ~TopLevelWindow();

        fastdelegate::FastDelegate<void (::Ozone::MaximizeEvent&)> OnMaximize;

        fastdelegate::FastDelegate<void (::Ozone::MoveEvent&)> OnMove;

        fastdelegate::FastDelegate<void (::Ozone::MoveEvent&)> OnMoveStart;

        fastdelegate::FastDelegate<void (::Ozone::MoveEvent&)> OnMoveEnd;

        fastdelegate::FastDelegate<void (::Ozone::ShowEvent&)> OnShow;

        bool Create(::Ozone::Window* parent, int id, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name);

        virtual void Maximize(bool maximize);

        virtual bool IsMaximized() const;

        virtual void Iconize(bool iconize);

        virtual bool IsIconized() const;

        virtual void Restore();

        virtual bool EnableCloseButton(bool enable);

        virtual void ShowWithoutActivating();

        virtual bool ShowFullScreen(bool show, long style);

        virtual bool IsFullScreen() const;

        virtual void RequestUserAttention(int flags);

        virtual void SetWindowStyleFlag(long style) override;

        virtual bool Show(bool show) override;

        virtual void Raise() override;

        virtual bool IsActive();

        virtual void SetTitle(const char* title);

        virtual const char* GetTitle() const;

        virtual void SetLabel(const char* label) override;

        virtual const char* GetLabel() const override;

        virtual ::Ozone::VisualAttributes GetDefaultAttributes() const override;

        virtual bool SetTransparent(unsigned char alpha) override;

        virtual bool CanSetTransparent() override;

        virtual void AddGrab();

        virtual void RemoveGrab();

        virtual bool IsGrabbed() const;

        virtual void Refresh(bool eraseBackground, const ::Ozone::Rect* rect) override;

        void SetIconizeState(bool iconic);

        virtual bool IsAlwaysMaximized() const;

        virtual bool EnableFullScreenView(bool _0);

        virtual bool EnableMaximizeButton(bool _0);

        virtual bool EnableMinimizeButton(bool _0);

        virtual bool ShouldPreventAppExit() const;

        void CentreOnScreen(int dir);

        void CenterOnScreen(int dir);

        ::Ozone::Window* GetDefaultItem() const;

        ::Ozone::Window* SetDefaultItem(::Ozone::Window* win);

        ::Ozone::Window* GetTmpDefaultItem() const;

        ::Ozone::Window* SetTmpDefaultItem(::Ozone::Window* win);

        virtual bool Destroy() override;

        virtual bool IsTopLevel() const override;

        virtual bool IsTopNavigationDomain(::Ozone::Window::NavigationKind kind) const override;

        virtual bool IsVisible() const;

        virtual bool Layout() override;

        virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h);

        virtual void DoUpdateWindowUI(::Ozone::UpdateUIEvent& event) override;

        virtual void SetMinSize(const ::Ozone::Size& minSize) override;

        virtual void SetMaxSize(const ::Ozone::Size& maxSize) override;

        virtual void SetRepresentedFilename(const char* _0);

        virtual int HandleEvent(::wxEvent& event) override;

        bool get_m_fsIsShowing();

        void set_m_fsIsShowing(bool value);

        int get_m_fsSaveGdkFunc();

        void set_m_fsSaveGdkFunc(int value);

        int get_m_fsSaveGdkDecor();

        void set_m_fsSaveGdkDecor(int value);

        ::Ozone::Rect get_m_fsSaveFrame();

        void set_m_fsSaveFrame(::Ozone::Rect value);

        int get_m_gdkFunc();

        void set_m_gdkFunc(int value);

        int get_m_gdkDecor();

        void set_m_gdkDecor(int value);

        int get_m_urgency_hint();

        void set_m_urgency_hint(int value);

        unsigned int get_m_netFrameExtentsTimerId();

        void set_m_netFrameExtentsTimerId(unsigned int value);

        static ::Ozone::Size GetDefaultSize();
    };

    // char[] FrameNameStr
}
