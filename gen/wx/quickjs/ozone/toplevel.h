// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

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

class TopLevelWindow : public Ozone::Ozone::NonOwnedWindow
{
public:

    TopLevelWindow(::Ozone::TopLevelWindow* instance, bool ownNativeInstance = false);

    TopLevelWindow();

    TopLevelWindow(::Ozone::Ozone::Window* parent, int winid, const char* title, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

    TopLevelWindow(const ::Ozone::Ozone::TopLevelWindow& _0);

    ~TopLevelWindow();

    bool Create(::Ozone::Ozone::Window* parent, int id, const char* title, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

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

    virtual ::Ozone::Ozone::VisualAttributes GetDefaultAttributes() const override;

    virtual bool SetTransparent(unsigned char alpha) override;

    virtual bool CanSetTransparent() override;

    virtual void AddGrab();

    virtual void RemoveGrab();

    virtual bool IsGrabbed() const;

    virtual void Refresh(bool eraseBackground, const ::Ozone::Ozone::Rect* rect) override;

    void SetIconizeState(bool iconic);

    virtual bool IsAlwaysMaximized() const;

    virtual bool EnableFullScreenView(bool _0);

    virtual bool EnableMaximizeButton(bool _0);

    virtual bool EnableMinimizeButton(bool _0);

    virtual bool ShouldPreventAppExit() const;

    void CentreOnScreen(int dir);

    void CenterOnScreen(int dir);

    ::Ozone::Ozone::Window* GetDefaultItem() const;

    ::Ozone::Ozone::Window* SetDefaultItem(::Ozone::Ozone::Window* win);

    ::Ozone::Ozone::Window* GetTmpDefaultItem() const;

    ::Ozone::Ozone::Window* SetTmpDefaultItem(::Ozone::Ozone::Window* win);

    virtual bool Destroy() override;

    virtual bool IsTopLevel() const override;

    virtual bool IsTopNavigationDomain(::Ozone::Ozone::Window::NavigationKind kind) const override;

    virtual bool IsVisible() const;

    virtual bool Layout() override;

    void OnActivate(::Ozone::Ozone::ActivateEvent& _0);

    virtual void DoUpdateWindowUI(::Ozone::Ozone::UpdateUIEvent& event) override;

    virtual void SetMinSize(const ::Ozone::Ozone::Size& minSize) override;

    virtual void SetMaxSize(const ::Ozone::Ozone::Size& maxSize) override;

    virtual void SetRepresentedFilename(const char* _0);

    bool get_m_fsIsShowing();

    void set_m_fsIsShowing(bool value);

    int get_m_fsSaveGdkFunc();

    void set_m_fsSaveGdkFunc(int value);

    int get_m_fsSaveGdkDecor();

    void set_m_fsSaveGdkDecor(int value);

    ::Ozone::Ozone::Rect get_m_fsSaveFrame();

    void set_m_fsSaveFrame(::Ozone::Ozone::Rect value);

    int get_m_gdkFunc();

    void set_m_gdkFunc(int value);

    int get_m_gdkDecor();

    void set_m_gdkDecor(int value);

    int get_m_urgency_hint();

    void set_m_urgency_hint(int value);

    unsigned int get_m_netFrameExtentsTimerId();

    void set_m_netFrameExtentsTimerId(unsigned int value);

    static ::Ozone::Ozone::Size GetDefaultSize();
};
