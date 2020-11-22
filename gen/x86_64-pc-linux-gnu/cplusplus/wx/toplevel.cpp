// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "toplevel.h"
#include "wx/event.h"
#include "wx/gdicmn.h"
#include "wx/object.h"
#include "wx/toplevel.h"
#include "wx/window.h"

#include <wx/eventfilter.h>
wxSharp::TopLevelWindow::DecorSize::DecorSize(::wxTopLevelWindowGTK::DecorSize* instance)
{
    __Instance = instance;
}

wxSharp::TopLevelWindow::DecorSize::~DecorSize()
{
}

wxSharp::TopLevelWindow::DecorSize::DecorSize()
{
    __ownsNativeInstance = true;
    __Instance = new ::wxTopLevelWindowGTK::DecorSize();
}

wxSharp::TopLevelWindow::DecorSize::DecorSize(const ::wxSharp::TopLevelWindow::DecorSize& _0)
{
    __ownsNativeInstance = true;
    auto &__arg0 = *(::wxTopLevelWindowGTK::DecorSize*)_0.__Instance;
    __Instance = new ::wxTopLevelWindowGTK::DecorSize(__arg0);
}

int wxSharp::TopLevelWindow::DecorSize::get_left()
{
    int __ret = ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->left;
    return __ret;
}


void wxSharp::TopLevelWindow::DecorSize::set_left(int value)
{
    ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->left = value;
}

int wxSharp::TopLevelWindow::DecorSize::get_right()
{
    int __ret = ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->right;
    return __ret;
}


void wxSharp::TopLevelWindow::DecorSize::set_right(int value)
{
    ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->right = value;
}

int wxSharp::TopLevelWindow::DecorSize::get_top()
{
    int __ret = ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->top;
    return __ret;
}


void wxSharp::TopLevelWindow::DecorSize::set_top(int value)
{
    ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->top = value;
}

int wxSharp::TopLevelWindow::DecorSize::get_bottom()
{
    int __ret = ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->bottom;
    return __ret;
}


void wxSharp::TopLevelWindow::DecorSize::set_bottom(int value)
{
    ((::wxTopLevelWindowGTK::DecorSize*)__Instance)->bottom = value;
}

wxSharp::TopLevelWindow::TopLevelWindow(::wxTopLevelWindow* instance)
{
    __Instance = instance;

    auto _instance = (wxTopLevelWindow*) __Instance;
    if (_instance->GetClientData() == nullptr)
        _instance->SetClientData(this);
}

wxSharp::TopLevelWindow::~TopLevelWindow()
{
}

wxSharp::TopLevelWindow::TopLevelWindow()
{
    __ownsNativeInstance = true;
    __Instance = new ::wxTopLevelWindow();

    auto _instance = (wxTopLevelWindow*) __Instance;
    if (_instance->GetClientData() == nullptr)
        _instance->SetClientData(this);
}

wxSharp::TopLevelWindow::TopLevelWindow(::wxSharp::Window* parent, int winid, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, long style, const char* name)
{
    __ownsNativeInstance = true;
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)winid;
    auto __arg2 = title;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg6 = name;
    __Instance = new ::wxTopLevelWindow(__arg0, __arg1, __arg2, __arg3, __arg4, style, __arg6);

    auto _instance = (wxTopLevelWindow*) __Instance;
    if (_instance->GetClientData() == nullptr)
        _instance->SetClientData(this);
}

bool wxSharp::TopLevelWindow::Create(::wxSharp::Window* parent, int id, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, long style, const char* name)
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

void wxSharp::TopLevelWindow::Maximize(bool maximize)
{
    ((::wxTopLevelWindow*)__Instance)->Maximize(maximize);
}

bool wxSharp::TopLevelWindow::IsMaximized() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsMaximized();
    return __ret;
}

void wxSharp::TopLevelWindow::Iconize(bool iconize)
{
    ((::wxTopLevelWindow*)__Instance)->Iconize(iconize);
}

bool wxSharp::TopLevelWindow::IsIconized() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsIconized();
    return __ret;
}

void wxSharp::TopLevelWindow::Restore()
{
    ((::wxTopLevelWindow*)__Instance)->Restore();
}

bool wxSharp::TopLevelWindow::EnableCloseButton(bool enable)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableCloseButton(enable);
    return __ret;
}

void wxSharp::TopLevelWindow::ShowWithoutActivating()
{
    ((::wxTopLevelWindow*)__Instance)->ShowWithoutActivating();
}

bool wxSharp::TopLevelWindow::ShowFullScreen(bool show, long style)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->ShowFullScreen(show, style);
    return __ret;
}

bool wxSharp::TopLevelWindow::IsFullScreen() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsFullScreen();
    return __ret;
}

void wxSharp::TopLevelWindow::RequestUserAttention(int flags)
{
    ((::wxTopLevelWindow*)__Instance)->RequestUserAttention(flags);
}

void wxSharp::TopLevelWindow::SetWindowStyleFlag(long style)
{
    ((::wxTopLevelWindow*)__Instance)->SetWindowStyleFlag(style);
}

bool wxSharp::TopLevelWindow::Show(bool show)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Show(show);
    return __ret;
}

void wxSharp::TopLevelWindow::Raise()
{
    ((::wxTopLevelWindow*)__Instance)->Raise();
}

bool wxSharp::TopLevelWindow::IsActive()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsActive();
    return __ret;
}

void wxSharp::TopLevelWindow::SetTitle(const char* title)
{
    auto __arg0 = title;
    ((::wxTopLevelWindow*)__Instance)->SetTitle(__arg0);
}

const char* wxSharp::TopLevelWindow::GetTitle() const
{
    ::wxString __ret = ((::wxTopLevelWindow*)__Instance)->GetTitle();
    return __ret.c_str();
}

void wxSharp::TopLevelWindow::SetLabel(const char* label)
{
    auto __arg0 = label;
    ((::wxTopLevelWindow*)__Instance)->SetLabel(__arg0);
}

const char* wxSharp::TopLevelWindow::GetLabel() const
{
    ::wxString __ret = ((::wxTopLevelWindow*)__Instance)->GetLabel();
    return __ret.c_str();
}

::wxSharp::VisualAttributes wxSharp::TopLevelWindow::GetDefaultAttributes() const
{
    ::wxVisualAttributes __ret = ((::wxTopLevelWindow*)__Instance)->GetDefaultAttributes();
    auto ____ret = new ::wxVisualAttributes(__ret);
    return ____ret;
}

bool wxSharp::TopLevelWindow::SetTransparent(unsigned char alpha)
{
    auto __arg0 = (::wxByte)(::wxUint8)alpha;
    bool __ret = ((::wxTopLevelWindow*)__Instance)->SetTransparent(__arg0);
    return __ret;
}

bool wxSharp::TopLevelWindow::CanSetTransparent()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->CanSetTransparent();
    return __ret;
}

void wxSharp::TopLevelWindow::AddGrab()
{
    ((::wxTopLevelWindow*)__Instance)->AddGrab();
}

void wxSharp::TopLevelWindow::RemoveGrab()
{
    ((::wxTopLevelWindow*)__Instance)->RemoveGrab();
}

bool wxSharp::TopLevelWindow::IsGrabbed() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsGrabbed();
    return __ret;
}

void wxSharp::TopLevelWindow::Refresh(bool eraseBackground, const ::wxSharp::Rect* rect)
{
    auto __arg1 = rect ? (::wxRect*)rect->__Instance : nullptr;
    ((::wxTopLevelWindow*)__Instance)->Refresh(eraseBackground, __arg1);
}

void wxSharp::TopLevelWindow::SetIconizeState(bool iconic)
{
    ((::wxTopLevelWindow*)__Instance)->SetIconizeState(iconic);
}

bool wxSharp::TopLevelWindow::IsAlwaysMaximized() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsAlwaysMaximized();
    return __ret;
}

bool wxSharp::TopLevelWindow::EnableFullScreenView(bool _0)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableFullScreenView(_0);
    return __ret;
}

bool wxSharp::TopLevelWindow::EnableMaximizeButton(bool _0)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableMaximizeButton(_0);
    return __ret;
}

bool wxSharp::TopLevelWindow::EnableMinimizeButton(bool _0)
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->EnableMinimizeButton(_0);
    return __ret;
}

bool wxSharp::TopLevelWindow::ShouldPreventAppExit() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->ShouldPreventAppExit();
    return __ret;
}

void wxSharp::TopLevelWindow::CentreOnScreen(int dir)
{
    ((::wxTopLevelWindow*)__Instance)->CentreOnScreen(dir);
}

void wxSharp::TopLevelWindow::CenterOnScreen(int dir)
{
    ((::wxTopLevelWindow*)__Instance)->CenterOnScreen(dir);
}

::wxSharp::Size wxSharp::TopLevelWindow::GetDefaultSize()
{
    ::wxSize __ret = ::wxTopLevelWindowBase::GetDefaultSize();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::wxSharp::Window* wxSharp::TopLevelWindow::GetDefaultItem() const
{
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->GetDefaultItem();
    return (__ret == nullptr) ? nullptr : new wxSharp::Window((::wxWindow*)__ret);
}

::wxSharp::Window* wxSharp::TopLevelWindow::SetDefaultItem(::wxSharp::Window* win)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->SetDefaultItem(__arg0);
    return (__ret == nullptr) ? nullptr : new wxSharp::Window((::wxWindow*)__ret);
}

::wxSharp::Window* wxSharp::TopLevelWindow::GetTmpDefaultItem() const
{
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->GetTmpDefaultItem();
    return (__ret == nullptr) ? nullptr : new wxSharp::Window((::wxWindow*)__ret);
}

::wxSharp::Window* wxSharp::TopLevelWindow::SetTmpDefaultItem(::wxSharp::Window* win)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    ::wxWindow* __ret = ((::wxTopLevelWindow*)__Instance)->SetTmpDefaultItem(__arg0);
    return (__ret == nullptr) ? nullptr : new wxSharp::Window((::wxWindow*)__ret);
}

bool wxSharp::TopLevelWindow::Destroy()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Destroy();
    return __ret;
}

bool wxSharp::TopLevelWindow::IsTopLevel() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsTopLevel();
    return __ret;
}

bool wxSharp::TopLevelWindow::IsTopNavigationDomain(::wxSharp::Window::NavigationKind kind) const
{
    auto __arg0 = (::wxWindowBase::NavigationKind)kind;
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsTopNavigationDomain(__arg0);
    return __ret;
}

bool wxSharp::TopLevelWindow::IsVisible() const
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->IsVisible();
    return __ret;
}

bool wxSharp::TopLevelWindow::Layout()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->Layout();
    return __ret;
}

void wxSharp::TopLevelWindow::OnCloseWindow(::wxSharp::CloseEvent& event)
{
    auto &__arg0 = *(::wxCloseEvent*)event.__Instance;
    ((::wxTopLevelWindow*)__Instance)->OnCloseWindow(__arg0);
}

void wxSharp::TopLevelWindow::OnSize(::wxSharp::SizeEvent& _0)
{
    auto &__arg0 = *(::wxSizeEvent*)_0.__Instance;
    ((::wxTopLevelWindow*)__Instance)->OnSize(__arg0);
}

void wxSharp::TopLevelWindow::GetRectForTopLevelChildren(int* x, int* y, int* w, int* h)
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

void wxSharp::TopLevelWindow::OnActivate(::wxSharp::ActivateEvent& _0)
{
    auto &__arg0 = *(::wxActivateEvent*)_0.__Instance;
    ((::wxTopLevelWindow*)__Instance)->OnActivate(__arg0);
}

void wxSharp::TopLevelWindow::DoUpdateWindowUI(::wxSharp::UpdateUIEvent& event)
{
    auto &__arg0 = *(::wxUpdateUIEvent*)event.__Instance;
    ((::wxTopLevelWindow*)__Instance)->DoUpdateWindowUI(__arg0);
}

void wxSharp::TopLevelWindow::SetMinSize(const ::wxSharp::Size& minSize)
{
    auto &__arg0 = *(::wxSize*)minSize.__Instance;
    ((::wxTopLevelWindow*)__Instance)->SetMinSize(__arg0);
}

void wxSharp::TopLevelWindow::SetMaxSize(const ::wxSharp::Size& maxSize)
{
    auto &__arg0 = *(::wxSize*)maxSize.__Instance;
    ((::wxTopLevelWindow*)__Instance)->SetMaxSize(__arg0);
}

void wxSharp::TopLevelWindow::SetRepresentedFilename(const char* _0)
{
    auto __arg0 = _0;
    ((::wxTopLevelWindow*)__Instance)->SetRepresentedFilename(__arg0);
}

int wxSharp::TopLevelWindow::HandleEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();

    if(eventType == wxEVT_MAXIMIZE)
    {
        if (!OnMaximize.empty())
        {
            wxMaximizeEvent* _event = wxStaticCast(&event, wxMaximizeEvent);
            wxSharp::MaximizeEvent _e(_event);
            OnMaximize(_e);
        }
    }
    else if(eventType == wxEVT_MOVE)
    {
        if (!OnMove.empty())
        {
            wxMoveEvent* _event = wxStaticCast(&event, wxMoveEvent);
            wxSharp::MoveEvent _e(_event);
            OnMove(_e);
        }
    }
    else if(eventType == wxEVT_MOVE_START)
    {
        if (!OnMoveStart.empty())
        {
            wxMoveEvent* _event = wxStaticCast(&event, wxMoveEvent);
            wxSharp::MoveEvent _e(_event);
            OnMoveStart(_e);
        }
    }
    else if(eventType == wxEVT_MOVE_END)
    {
        if (!OnMoveEnd.empty())
        {
            wxMoveEvent* _event = wxStaticCast(&event, wxMoveEvent);
            wxSharp::MoveEvent _e(_event);
            OnMoveEnd(_e);
        }
    }
    else if(eventType == wxEVT_SHOW)
    {
        if (!OnShow.empty())
        {
            wxShowEvent* _event = wxStaticCast(&event, wxShowEvent);
            wxSharp::ShowEvent _e(_event);
            OnShow(_e);
        }
    }

    return NonOwnedWindow::HandleEvent(event);
}

bool wxSharp::TopLevelWindow::get_m_fsIsShowing()
{
    bool __ret = ((::wxTopLevelWindow*)__Instance)->m_fsIsShowing;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_fsIsShowing(bool value)
{
    ((::wxTopLevelWindow*)__Instance)->m_fsIsShowing = value;
}

int wxSharp::TopLevelWindow::get_m_fsSaveGdkFunc()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkFunc;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_fsSaveGdkFunc(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkFunc = value;
}

int wxSharp::TopLevelWindow::get_m_fsSaveGdkDecor()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkDecor;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_fsSaveGdkDecor(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_fsSaveGdkDecor = value;
}

::wxSharp::Rect wxSharp::TopLevelWindow::get_m_fsSaveFrame()
{
    ::wxRect __ret = ((::wxTopLevelWindow*)__Instance)->m_fsSaveFrame;
    auto ____ret = new ::wxRect(__ret);
    return ____ret;
}


void wxSharp::TopLevelWindow::set_m_fsSaveFrame(::wxSharp::Rect value)
{
    auto __arg0 = *(::wxRect*)value.__Instance;
    ((::wxTopLevelWindow*)__Instance)->m_fsSaveFrame = __arg0;
}

int wxSharp::TopLevelWindow::get_m_gdkFunc()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_gdkFunc;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_gdkFunc(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_gdkFunc = value;
}

int wxSharp::TopLevelWindow::get_m_gdkDecor()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_gdkDecor;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_gdkDecor(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_gdkDecor = value;
}

::wxSharp::TopLevelWindow::DecorSize wxSharp::TopLevelWindow::get_m_decorSize()
{
    ::wxTopLevelWindow::DecorSize __ret = ((::wxTopLevelWindow*)__Instance)->m_decorSize;
    auto ____ret = new ::wxTopLevelWindowGTK::DecorSize(__ret);
    return ____ret;
}


void wxSharp::TopLevelWindow::set_m_decorSize(::wxSharp::TopLevelWindow::DecorSize value)
{
    auto __arg0 = *(::wxTopLevelWindowGTK::DecorSize*)value.__Instance;
    ((::wxTopLevelWindow*)__Instance)->m_decorSize = __arg0;
}

int wxSharp::TopLevelWindow::get_m_urgency_hint()
{
    int __ret = ((::wxTopLevelWindow*)__Instance)->m_urgency_hint;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_urgency_hint(int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_urgency_hint = value;
}

unsigned int wxSharp::TopLevelWindow::get_m_netFrameExtentsTimerId()
{
    unsigned int __ret = ((::wxTopLevelWindow*)__Instance)->m_netFrameExtentsTimerId;
    return __ret;
}


void wxSharp::TopLevelWindow::set_m_netFrameExtentsTimerId(unsigned int value)
{
    ((::wxTopLevelWindow*)__Instance)->m_netFrameExtentsTimerId = value;
}
