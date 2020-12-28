// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

class ControlContainer
{
public:

    ControlContainer(::Ozone::ControlContainer* instance, bool ownNativeInstance = false);

    ControlContainer(const ::Ozone::Ozone::ControlContainer& _0);

    ControlContainer();

    ~ControlContainer();

    void SetContainerWindow(::Ozone::Ozone::Window* winParent);

    void DisableSelfFocus();

    void EnableSelfFocus();

    bool DoSetFocus();

    bool AcceptsFocus() const;

    bool AcceptsFocusRecursively() const;

    bool AcceptsFocusFromKeyboard() const;

    bool UpdateCanFocusChildren();

protected:

    bool __OwnsNativeInstance;
};