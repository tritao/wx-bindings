// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "containr.h"
#include "wx/containr.h"

#include <wx/eventfilter.h>
wxSharp::ControlContainer::ControlContainer(::wxControlContainer* instance)
{
    __Instance = instance;
}

wxSharp::ControlContainer::~ControlContainer()
{
}

wxSharp::ControlContainer::ControlContainer(const ::wxSharp::ControlContainer& _0)
{
    __ownsNativeInstance = true;
    auto &__arg0 = *(::wxControlContainer*)_0.__Instance;
    __Instance = new ::wxControlContainer(__arg0);
}

wxSharp::ControlContainer::ControlContainer()
{
    __ownsNativeInstance = true;
    __Instance = new ::wxControlContainer();
}

void wxSharp::ControlContainer::SetContainerWindow(::wxSharp::Window* winParent)
{
    auto __arg0 = winParent ? (::wxWindow*)winParent->__Instance : nullptr;
    ((::wxControlContainer*)__Instance)->SetContainerWindow(__arg0);
}

void wxSharp::ControlContainer::DisableSelfFocus()
{
    ((::wxControlContainer*)__Instance)->DisableSelfFocus();
}

void wxSharp::ControlContainer::EnableSelfFocus()
{
    ((::wxControlContainer*)__Instance)->EnableSelfFocus();
}

bool wxSharp::ControlContainer::DoSetFocus()
{
    bool __ret = ((::wxControlContainer*)__Instance)->DoSetFocus();
    return __ret;
}

bool wxSharp::ControlContainer::AcceptsFocus() const
{
    bool __ret = ((::wxControlContainer*)__Instance)->AcceptsFocus();
    return __ret;
}

bool wxSharp::ControlContainer::AcceptsFocusRecursively() const
{
    bool __ret = ((::wxControlContainer*)__Instance)->AcceptsFocusRecursively();
    return __ret;
}

bool wxSharp::ControlContainer::AcceptsFocusFromKeyboard() const
{
    bool __ret = ((::wxControlContainer*)__Instance)->AcceptsFocusFromKeyboard();
    return __ret;
}

bool wxSharp::ControlContainer::UpdateCanFocusChildren()
{
    bool __ret = ((::wxControlContainer*)__Instance)->UpdateCanFocusChildren();
    return __ret;
}

