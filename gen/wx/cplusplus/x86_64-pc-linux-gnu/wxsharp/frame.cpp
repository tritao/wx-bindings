// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "wxsharp/frame.h"
#include "wxsharp/event.h"
#include "wxsharp/frame.h"
#include "wxsharp/gdicmn.h"
#include "wxsharp/object.h"
#include "wxsharp/toplevel.h"
#include "wxsharp/window.h"

#include <wx/eventfilter.h>

wxSharp::Frame::Frame(::wxFrame* instance, bool ownNativeInstance)
    : wxSharp::TopLevelWindow((::wxTopLevelWindow*)instance, ownNativeInstance)
{
    __Instance = instance;

    auto __instance = (wxFrame*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

wxSharp::Frame::~Frame()
{
}

wxSharp::Frame::Frame()
    : wxSharp::TopLevelWindow((::wxTopLevelWindow*)nullptr)
{
    __ownsNativeInstance = true;
    __Instance = new ::wxFrame();

    auto __instance = (wxFrame*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

wxSharp::Frame::Frame(::wxSharp::Window* parent, int id, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, ::wxSharp::FrameStyle style, const char* name)
    : wxSharp::TopLevelWindow((::wxTopLevelWindow*)nullptr)
{
    __ownsNativeInstance = true;
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)id;
    auto __arg2 = title;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg5 = (long)style;
    auto __arg6 = name;
    __Instance = new ::wxFrame(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6);

    auto __instance = (wxFrame*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

bool wxSharp::Frame::Create(::wxSharp::Window* parent, int id, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, long style, const char* name)
{
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)id;
    auto __arg2 = title;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg6 = name;
    bool __ret = ((::wxFrame*)__Instance)->Create(__arg0, __arg1, __arg2, __arg3, __arg4, style, __arg6);
    return __ret;
}

bool wxSharp::Frame::ShowFullScreen(bool show, long style)
{
    bool __ret = ((::wxFrame*)__Instance)->ShowFullScreen(show, style);
    return __ret;
}

::wxSharp::Point wxSharp::Frame::GetClientAreaOrigin() const
{
    ::wxPoint __ret = ((::wxFrame*)__Instance)->GetClientAreaOrigin();
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

bool wxSharp::Frame::SendIdleEvents(::wxSharp::IdleEvent& event)
{
    auto &__arg0 = *(::wxIdleEvent*)event.__Instance;
    bool __ret = ((::wxFrame*)__Instance)->SendIdleEvents(__arg0);
    return __ret;
}

::wxSharp::Frame* wxSharp::Frame::New(::wxSharp::Window* parent, int winid, const char* title, const ::wxSharp::Point& pos, const ::wxSharp::Size& size, long style, const char* name)
{
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)winid;
    auto __arg2 = title;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg6 = name;
    ::wxFrame* __ret = ((::wxFrame*)__Instance)->New(__arg0, __arg1, __arg2, __arg3, __arg4, style, __arg6);
    return (__ret == nullptr) ? nullptr : new wxSharp::Frame((::wxFrame*)__ret);
}

bool wxSharp::Frame::ProcessCommand(int winid)
{
    bool __ret = ((::wxFrame*)__Instance)->ProcessCommand(winid);
    return __ret;
}

void wxSharp::Frame::SetStatusText(const char* text, int number)
{
    auto __arg0 = text;
    ((::wxFrame*)__Instance)->SetStatusText(__arg0, number);
}

void wxSharp::Frame::SetStatusWidths(int n, int widths_field[])
{
    auto __arg1 = nullptr;
    ((::wxFrame*)__Instance)->SetStatusWidths(n, __arg1);
}

void wxSharp::Frame::PushStatusText(const char* text, int number)
{
    auto __arg0 = text;
    ((::wxFrame*)__Instance)->PushStatusText(__arg0, number);
}

void wxSharp::Frame::PopStatusText(int number)
{
    ((::wxFrame*)__Instance)->PopStatusText(number);
}

void wxSharp::Frame::SetStatusBarPane(int n)
{
    ((::wxFrame*)__Instance)->SetStatusBarPane(n);
}

int wxSharp::Frame::GetStatusBarPane() const
{
    int __ret = ((::wxFrame*)__Instance)->GetStatusBarPane();
    return __ret;
}

void wxSharp::Frame::UpdateWindowUI(long flags)
{
    ((::wxFrame*)__Instance)->UpdateWindowUI(flags);
}

void wxSharp::Frame::OnInternalIdle()
{
    ((::wxFrame*)__Instance)->OnInternalIdle();
}

void wxSharp::Frame::DoGiveHelp(const char* text, bool show)
{
    auto __arg0 = text;
    ((::wxFrame*)__Instance)->DoGiveHelp(__arg0, show);
}

bool wxSharp::Frame::IsClientAreaChild(const ::wxSharp::Window* child) const
{
    auto __arg0 = child ? (::wxWindow*)child->__Instance : nullptr;
    bool __ret = ((::wxFrame*)__Instance)->IsClientAreaChild(__arg0);
    return __ret;
}

int wxSharp::Frame::HandleEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();

    if(eventType == wxEVT_CLOSE_WINDOW)
    {
        if (!OnClose.empty())
        {
            wxCloseEvent* _event = wxStaticCast(&event, wxCloseEvent);
            wxSharp::CloseEvent _e(_event);
            OnClose(_e);
        }
    }
    else if(eventType == wxEVT_ICONIZE)
    {
        if (!OnIconize.empty())
        {
            wxIconizeEvent* _event = wxStaticCast(&event, wxIconizeEvent);
            wxSharp::IconizeEvent _e(_event);
            OnIconize(_e);
        }
    }
    else if(eventType == wxEVT_MENU_OPEN)
    {
        if (!OnMenuOpen.empty())
        {
            wxMenuEvent* _event = wxStaticCast(&event, wxMenuEvent);
            wxSharp::MenuEvent _e(_event);
            OnMenuOpen(_e);
        }
    }
    else if(eventType == wxEVT_MENU_CLOSE)
    {
        if (!OnMenuClose.empty())
        {
            wxMenuEvent* _event = wxStaticCast(&event, wxMenuEvent);
            wxSharp::MenuEvent _e(_event);
            OnMenuClose(_e);
        }
    }
    else if(eventType == wxEVT_MENU_HIGHLIGHT)
    {
        if (!OnMenuHighlight.empty())
        {
            wxMenuEvent* _event = wxStaticCast(&event, wxMenuEvent);
            wxSharp::MenuEvent _e(_event);
            OnMenuHighlight(_e);
        }
    }
    else if(eventType == wxEVT_MENU_HIGHLIGHT)
    {
        if (!OnMenuHighlightAll.empty())
        {
            wxMenuEvent* _event = wxStaticCast(&event, wxMenuEvent);
            wxSharp::MenuEvent _e(_event);
            OnMenuHighlightAll(_e);
        }
    }

    return TopLevelWindow::HandleEvent(event);
}
