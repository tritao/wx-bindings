// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "ozone/toplevel.h"
#include "ozone/event.h"
#include "ozone/gdicmn.h"
#include "ozone/object.h"
#include "ozone/toplevel.h"
#include "ozone/window.h"

#include <wx/eventfilter.h>

::Ozone::TopLevelWindow::TopLevelWindow(::wxTopLevelWindow* instance, bool ownNativeInstance)
    : ::Ozone::NonOwnedWindow((::wxNonOwnedWindow*)instance, ownNativeInstance)
{
    __Instance = instance;

    auto __instance = (wxTopLevelWindow*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

::Ozone::TopLevelWindow::~TopLevelWindow()
{
}

Ozone::TopLevelWindow::TopLevelWindow()
    : ::Ozone::NonOwnedWindow((::wxNonOwnedWindow*)nullptr)
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxTopLevelWindow();

    auto __instance = (wxTopLevelWindow*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

Ozone::TopLevelWindow::TopLevelWindow(::Ozone::Window* parent, int winid, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
    : ::Ozone::NonOwnedWindow((::wxNonOwnedWindow*)nullptr)
{
    __OwnsNativeInstance = true;
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)winid;
    auto __arg2 = title;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg6 = name;
    __Instance = new ::wxTopLevelWindow(__arg0, __arg1, __arg2, __arg3, __arg4, style, __arg6);

    auto __instance = (wxTopLevelWindow*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

bool Ozone::TopLevelWindow::Create(::Ozone::Window* parent, int id, const char* title, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
{
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)id;
    auto __arg2 = title;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg6 = name;
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Create(__arg0, __arg1, __arg2, __arg3, __arg4, style, __arg6);
    return __ret;
}

void Ozone::TopLevelWindow::Maximize(bool maximize)
{
    ((::wxTopLevelWindow*)__Instance)->Maximize(maximize);
}

bool Ozone::TopLevelWindow::IsMaximized() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsMaximized();
    return __ret;
}

void Ozone::TopLevelWindow::Iconize(bool iconize)
{
    ((::wxTopLevelWindow*)__Instance)->Iconize(iconize);
}

bool Ozone::TopLevelWindow::IsIconized() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsIconized();
    return __ret;
}

void Ozone::TopLevelWindow::Restore()
{
    ((::wxTopLevelWindow*)__Instance)->Restore();
}

bool Ozone::TopLevelWindow::EnableCloseButton(bool enable)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableCloseButton(enable);
    return __ret;
}

void Ozone::TopLevelWindow::ShowWithoutActivating()
{
    ((::wxTopLevelWindow*)__Instance)->ShowWithoutActivating();
}

bool Ozone::TopLevelWindow::ShowFullScreen(bool show, long style)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->ShowFullScreen(show, style);
    return __ret;
}

bool Ozone::TopLevelWindow::IsFullScreen() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsFullScreen();
    return __ret;
}

void Ozone::TopLevelWindow::RequestUserAttention(int flags)
{
    ((::wxTopLevelWindow*)__Instance)->RequestUserAttention(flags);
}

void Ozone::TopLevelWindow::SetWindowStyleFlag(long style)
{
    ((::wxTopLevelWindow*)__Instance)->SetWindowStyleFlag(style);
}

bool Ozone::TopLevelWindow::Show(bool show)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Show(show);
    return __ret;
}

void Ozone::TopLevelWindow::Raise()
{
    ((::wxTopLevelWindow*)__Instance)->Raise();
}

bool Ozone::TopLevelWindow::IsActive()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsActive();
    return __ret;
}

void Ozone::TopLevelWindow::SetTitle(const char* title)
{
    auto __arg0 = title;
    ((::wxTopLevelWindow*)__Instance)->SetTitle(__arg0);
}

const char* Ozone::TopLevelWindow::GetTitle() const
{
    ::wxString __ret = ((::wxTopLevelWindow*)__Instance)->GetTitle();
    return strdup(__ret.utf8_str().data());
}

void Ozone::TopLevelWindow::SetLabel(const char* label)
{
    auto __arg0 = label;
    ((::wxTopLevelWindow*)__Instance)->SetLabel(__arg0);
}

const char* Ozone::TopLevelWindow::GetLabel() const
{
    ::wxString __ret = ((::wxTopLevelWindow*)__Instance)->GetLabel();
    return strdup(__ret.utf8_str().data());
}

::Ozone::VisualAttributes Ozone::TopLevelWindow::GetDefaultAttributes() const
{
    ::wxVisualAttributes __ret = ((::wxTopLevelWindow*)__Instance)->GetDefaultAttributes();
    auto ____ret = new ::wxVisualAttributes(__ret);
    return ____ret;
}

bool Ozone::TopLevelWindow::SetTransparent(unsigned char alpha)
{
    auto __arg0 = (::wxByte)(::wxUint8)alpha;
    bool __ret = ((::wxTopLevelWindow*)__Instance)->SetTransparent(__arg0);
    return __ret;
}

bool Ozone::TopLevelWindow::CanSetTransparent()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->CanSetTransparent();
    return __ret;
}

void Ozone::TopLevelWindow::AddGrab()
{
    ((::wxTopLevelWindow*)__Instance)->AddGrab();
}

void Ozone::TopLevelWindow::RemoveGrab()
{
    ((::wxTopLevelWindow*)__Instance)->RemoveGrab();
}

bool Ozone::TopLevelWindow::IsGrabbed() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsGrabbed();
    return __ret;
}

void Ozone::TopLevelWindow::Refresh(bool eraseBackground, const ::Ozone::Rect* rect)
{
    auto __arg1 = rect ? (::wxRect*)rect->__Instance : nullptr;
    ((::wxTopLevelWindow*)__Instance)->Refresh(eraseBackground, __arg1);
}

void Ozone::TopLevelWindow::SetIconizeState(bool iconic)
{
    ((::wxTopLevelWindow*)__Instance)->SetIconizeState(iconic);
}

bool Ozone::TopLevelWindow::IsAlwaysMaximized() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsAlwaysMaximized();
    return __ret;
}

bool Ozone::TopLevelWindow::EnableFullScreenView(bool _0)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableFullScreenView(_0);
    return __ret;
}

bool Ozone::TopLevelWindow::EnableMaximizeButton(bool _0)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableMaximizeButton(_0);
    return __ret;
}

bool Ozone::TopLevelWindow::EnableMinimizeButton(bool _0)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableMinimizeButton(_0);
    return __ret;
}

bool Ozone::TopLevelWindow::ShouldPreventAppExit() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->ShouldPreventAppExit();
    return __ret;
}

void Ozone::TopLevelWindow::CentreOnScreen(int dir)
{
    ((::wxTopLevelWindow*)__Instance)->CentreOnScreen(dir);
}

void Ozone::TopLevelWindow::CenterOnScreen(int dir)
{
    ((::wxTopLevelWindow*)__Instance)->CenterOnScreen(dir);
}

::Ozone::Size Ozone::TopLevelWindow::GetDefaultSize()
{
    ::wxSize __ret = ::wxTopLevelWindowBase::GetDefaultSize();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::Ozone::Window* Ozone::TopLevelWindow::GetDefaultItem() const
{
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->GetDefaultItem();
    return (__ret == nullptr) ? nullptr : new Ozone::Window((::wxWindow*)__ret);
}

::Ozone::Window* Ozone::TopLevelWindow::SetDefaultItem(::Ozone::Window* win)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->SetDefaultItem(__arg0);
    return (__ret == nullptr) ? nullptr : new Ozone::Window((::wxWindow*)__ret);
}

::Ozone::Window* Ozone::TopLevelWindow::GetTmpDefaultItem() const
{
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->GetTmpDefaultItem();
    return (__ret == nullptr) ? nullptr : new Ozone::Window((::wxWindow*)__ret);
}

::Ozone::Window* Ozone::TopLevelWindow::SetTmpDefaultItem(::Ozone::Window* win)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->SetTmpDefaultItem(__arg0);
    return (__ret == nullptr) ? nullptr : new Ozone::Window((::wxWindow*)__ret);
}

bool Ozone::TopLevelWindow::Destroy()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Destroy();
    return __ret;
}

bool Ozone::TopLevelWindow::IsTopLevel() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsTopLevel();
    return __ret;
}

bool Ozone::TopLevelWindow::IsTopNavigationDomain(::Ozone::Window::NavigationKind kind) const
{
    auto __arg0 = (::wxWindowBase::NavigationKind)kind;
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsTopNavigationDomain(__arg0);
    return __ret;
}

bool Ozone::TopLevelWindow::IsVisible() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsVisible();
    return __ret;
}

bool Ozone::TopLevelWindow::Layout()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Layout();
    return __ret;
}

void Ozone::TopLevelWindow::GetRectForTopLevelChildren(int* x, int* y, int* w, int* h)
{
    int* __arg0 = (int*)x;
    int* __arg1 = (int*)y;
    int* __arg2 = (int*)w;
    int* __arg3 = (int*)h;
    ((::wxTopLevelWindow*)__Instance)->GetRectForTopLevelChildren(__arg0, __arg1, __arg2, __arg3);
    x = __arg0;
    y = __arg1;
    w = __arg2;
    h = __arg3;
}

void Ozone::TopLevelWindow::DoUpdateWindowUI(::Ozone::UpdateUIEvent& event)
{
    auto &__arg0 = *(::wxUpdateUIEvent*)event.__Instance;
    ((::wxTopLevelWindow*)__Instance)->DoUpdateWindowUI(__arg0);
}

void Ozone::TopLevelWindow::SetMinSize(const ::Ozone::Size& minSize)
{
    auto &__arg0 = *(::wxSize*)minSize.__Instance;
    ((::wxTopLevelWindow*)__Instance)->SetMinSize(__arg0);
}

void Ozone::TopLevelWindow::SetMaxSize(const ::Ozone::Size& maxSize)
{
    auto &__arg0 = *(::wxSize*)maxSize.__Instance;
    ((::wxTopLevelWindow*)__Instance)->SetMaxSize(__arg0);
}

void Ozone::TopLevelWindow::SetRepresentedFilename(const char* _0)
{
    auto __arg0 = _0;
    ((::wxTopLevelWindow*)__Instance)->SetRepresentedFilename(__arg0);
}

int Ozone::TopLevelWindow::HandleEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();

    if(eventType == wxEVT_MAXIMIZE)
    {
        if (!OnMaximize.empty())
        {
            wxMaximizeEvent* _event = wxStaticCast(&event, wxMaximizeEvent);
            Ozone::MaximizeEvent _e(_event);
            OnMaximize(_e);
        }
    }
    else if(eventType == wxEVT_MOVE)
    {
        if (!OnMove.empty())
        {
            wxMoveEvent* _event = wxStaticCast(&event, wxMoveEvent);
            Ozone::MoveEvent _e(_event);
            OnMove(_e);
        }
    }
    else if(eventType == wxEVT_MOVE_START)
    {
        if (!OnMoveStart.empty())
        {
            wxMoveEvent* _event = wxStaticCast(&event, wxMoveEvent);
            Ozone::MoveEvent _e(_event);
            OnMoveStart(_e);
        }
    }
    else if(eventType == wxEVT_MOVE_END)
    {
        if (!OnMoveEnd.empty())
        {
            wxMoveEvent* _event = wxStaticCast(&event, wxMoveEvent);
            Ozone::MoveEvent _e(_event);
            OnMoveEnd(_e);
        }
    }
    else if(eventType == wxEVT_SHOW)
    {
        if (!OnShow.empty())
        {
            wxShowEvent* _event = wxStaticCast(&event, wxShowEvent);
            Ozone::ShowEvent _e(_event);
            OnShow(_e);
        }
    }

    return NonOwnedWindow::HandleEvent(event);
}

bool Ozone::TopLevelWindow::get_m_fsIsShowing()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->m_fsIsShowing;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_fsIsShowing(bool value)
{
    ((::wxTopLevelWindow*)__Instance)->m_fsIsShowing = value;
}

int Ozone::TopLevelWindow::get_m_fsSaveGdkFunc()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkFunc;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_fsSaveGdkFunc(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkFunc = value;
}

int Ozone::TopLevelWindow::get_m_fsSaveGdkDecor()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkDecor;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_fsSaveGdkDecor(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkDecor = value;
}

::Ozone::Rect Ozone::TopLevelWindow::get_m_fsSaveFrame()
{
    ::wxRect __ret = ((::wxTopLevelWindow*)__Instance)->m_fsSaveFrame;
    auto ____ret = new ::wxRect(__ret);
    return ____ret;
}


void Ozone::TopLevelWindow::set_m_fsSaveFrame(::Ozone::Rect value)
{
    auto __arg0 = *(::wxRect*)value.__Instance;
    ((::wxTopLevelWindow*)__Instance)->m_fsSaveFrame = __arg0;
}

int Ozone::TopLevelWindow::get_m_gdkFunc()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_gdkFunc;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_gdkFunc(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_gdkFunc = value;
}

int Ozone::TopLevelWindow::get_m_gdkDecor()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_gdkDecor;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_gdkDecor(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_gdkDecor = value;
}

int Ozone::TopLevelWindow::get_m_urgency_hint()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_urgency_hint;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_urgency_hint(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_urgency_hint = value;
}

unsigned int Ozone::TopLevelWindow::get_m_netFrameExtentsTimerId()
{
    unsigned int __ret = ((::wxTopLevelWindow*)__Instance)->m_netFrameExtentsTimerId;
    return __ret;
}


void Ozone::TopLevelWindow::set_m_netFrameExtentsTimerId(unsigned int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_netFrameExtentsTimerId = value;
}

