// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

class Panel : public Ozone::Ozone::Window
{
public:

    Panel(::Ozone::Panel* instance, bool ownNativeInstance = false);

    Panel();

    Panel(::Ozone::Ozone::Window* parent, int winid, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

    Panel(const ::Ozone::Ozone::Panel& _0);

    ~Panel();

    bool Create(::Ozone::Ozone::Window* parent, int winid, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

    virtual void InitDialog() override;
};