// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "ozone/panel.h"
#include "ozone/containr.h"
#include "ozone/event.h"
#include "ozone/gdicmn.h"
#include "ozone/object.h"
#include "ozone/panel.h"

#include <wx/eventfilter.h>

Ozone::Panel::Panel(::wxPanel* instance, bool ownNativeInstance)
    : Ozone::Window((::wxWindow*)instance, ownNativeInstance)
{
    __Instance = instance;

    auto __instance = (wxPanel*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

Ozone::Panel::~Panel()
{
}

Ozone::Panel::Panel()
    : Ozone::Window((::wxWindow*)nullptr)
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxPanel();

    auto __instance = (wxPanel*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

Ozone::Panel::Panel(::Ozone::Window* parent, int winid, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
    : Ozone::Window((::wxWindow*)nullptr)
{
    __OwnsNativeInstance = true;
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)winid;
    auto &__arg2 = *(::wxPoint*)pos.__Instance;
    auto &__arg3 = *(::wxSize*)size.__Instance;
    auto __arg5 = name;
    __Instance = new ::wxPanel(__arg0, __arg1, __arg2, __arg3, style, __arg5);

    auto __instance = (wxPanel*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

bool Ozone::Panel::Create(::Ozone::Window* parent, int winid, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
{
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)winid;
    auto &__arg2 = *(::wxPoint*)pos.__Instance;
    auto &__arg3 = *(::wxSize*)size.__Instance;
    auto __arg5 = name;
    bool __ret = ((::wxPanel*)__Instance)->Create(__arg0, __arg1, __arg2, __arg3, style, __arg5);
    return __ret;
}

void Ozone::Panel::InitDialog()
{
    ((::wxPanel*)__Instance)->InitDialog();
}

int Ozone::Panel::HandleEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();

    if(eventType == wxEVT_NAVIGATION_KEY)
    {
        if (!OnNavigationKey.empty())
        {
            wxNavigationKeyEvent* _event = wxStaticCast(&event, wxNavigationKeyEvent);
            Ozone::NavigationKeyEvent _e(_event);
            OnNavigationKey(_e);
        }
    }

    return Window::HandleEvent(event);
}

