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
#include "wx/nonownedwnd.h"
#include "wx/window.h"

namespace wxSharp
{
    class ActivateEvent;
    class CloseEvent;
    class Event;
    class Object;
    class Point;
    class Rect;
    class Size;
    class SizeEvent;
    class TopLevelWindow;
    class UpdateUIEvent;
    class VisualAttributes;
    class Window;
    enum class FrameStyle;
    enum class FullscreenMode : unsigned int;
    enum class UserAttention : unsigned int;
}

namespace wxSharp
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
        CAPTION = 536870912,
        CLIP_CHILDREN = 4194304,
        FRAME_SHAPED = 16,
        STAY_ON_TOP = 32768,
        MINIMIZE = 0,
        MAXIMIZE = 8192,
        CLOSE_BOX = 4096,
        SYSTEM_MENU = 2048,
        MINIMIZE_BOX = 1024,
        MAXIMIZE_BOX = 512,
        RESIZE_BORDER = 64,
        DEFAULT_FRAME_STYLE = 541072960
    };

    class TopLevelWindow : public wxSharp::NonOwnedWindow
    {
    public:

        class DecorSize
        {
        public:

            ::wxTopLevelWindow::DecorSize* __Instance;

            DecorSize(::wxTopLevelWindow::DecorSize* instance, bool ownNativeInstance = false);

            DecorSize();

            DecorSize(const ::wxSharp::TopLevelWindow::DecorSize& _0);

            ~DecorSize();

            int get_left();

            void set_left(int value);

            int get_right();

            void set_right(int value);

            int get_top();

            void set_top(int value);

            int get_bottom();

            void set_bottom(int value);

        protected:
            bool __ownsNativeInstance;
        };

        TopLevelWindow(::wxTopLevelWindow* instance, bool ownNativeInstance = false);

        TopLevelWindow();

        TopLevelWindow(::wxSharp::Window* parent, int winid, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, long style, const char* name);

        ~TopLevelWindow();

        fastdelegate::FastDelegate<void (::wxSharp::MaximizeEvent&)> OnMaximize;

        fastdelegate::FastDelegate<void (::wxSharp::MoveEvent&)> OnMove;

        fastdelegate::FastDelegate<void (::wxSharp::MoveEvent&)> OnMoveStart;

        fastdelegate::FastDelegate<void (::wxSharp::MoveEvent&)> OnMoveEnd;

        fastdelegate::FastDelegate<void (::wxSharp::ShowEvent&)> OnShow;

        bool Create(::wxSharp::Window* parent, int id, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, long style, const char* name);

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

        virtual ::wxSharp::VisualAttributes GetDefaultAttributes() const override;

        virtual bool SetTransparent(unsigned char alpha) override;

        virtual bool CanSetTransparent() override;

        virtual void AddGrab();

        virtual void RemoveGrab();

        virtual bool IsGrabbed() const;

        virtual void Refresh(bool eraseBackground, const ::wxSharp::Rect* rect) override;

        void SetIconizeState(bool iconic);

        virtual bool IsAlwaysMaximized() const;

        virtual bool EnableFullScreenView(bool _0);

        virtual bool EnableMaximizeButton(bool _0);

        virtual bool EnableMinimizeButton(bool _0);

        virtual bool ShouldPreventAppExit() const;

        void CentreOnScreen(int dir);

        void CenterOnScreen(int dir);

        ::wxSharp::Window* GetDefaultItem() const;

        ::wxSharp::Window* SetDefaultItem(::wxSharp::Window* win);

        ::wxSharp::Window* GetTmpDefaultItem() const;

        ::wxSharp::Window* SetTmpDefaultItem(::wxSharp::Window* win);

        virtual bool Destroy() override;

        virtual bool IsTopLevel() const override;

        virtual bool IsTopNavigationDomain(::wxSharp::Window::NavigationKind kind) const override;

        virtual bool IsVisible() const;

        virtual bool Layout() override;

        virtual void GetRectForTopLevelChildren(int* x, int* y, int* w, int* h);

        void OnActivate(::wxSharp::ActivateEvent& _0);

        virtual void DoUpdateWindowUI(::wxSharp::UpdateUIEvent& event) override;

        virtual void SetMinSize(const ::wxSharp::Size& minSize) override;

        virtual void SetMaxSize(const ::wxSharp::Size& maxSize) override;

        virtual void SetRepresentedFilename(const char* _0);

        virtual int HandleEvent(::wxEvent& event) override;

        bool get_m_fsIsShowing();

        void set_m_fsIsShowing(bool value);

        int get_m_fsSaveGdkFunc();

        void set_m_fsSaveGdkFunc(int value);

        int get_m_fsSaveGdkDecor();

        void set_m_fsSaveGdkDecor(int value);

        ::wxSharp::Rect get_m_fsSaveFrame();

        void set_m_fsSaveFrame(::wxSharp::Rect value);

        int get_m_gdkFunc();

        void set_m_gdkFunc(int value);

        int get_m_gdkDecor();

        void set_m_gdkDecor(int value);

        ::wxSharp::TopLevelWindow::DecorSize get_m_decorSize();

        void set_m_decorSize(::wxSharp::TopLevelWindow::DecorSize value);

        int get_m_urgency_hint();

        void set_m_urgency_hint(int value);

        unsigned int get_m_netFrameExtentsTimerId();

        void set_m_netFrameExtentsTimerId(unsigned int value);

        static ::wxSharp::Size GetDefaultSize();
    };
}
