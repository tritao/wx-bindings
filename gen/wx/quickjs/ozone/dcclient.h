// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

class WindowDC : public ::Ozone::Ozone::DC
{
public:

    WindowDC(::Ozone::WindowDC* instance, bool ownNativeInstance = false);

    WindowDC(::Ozone::Ozone::Window* win);

    WindowDC(const ::Ozone::Ozone::WindowDC& _0);

    ~WindowDC();
};

class ClientDC : public ::Ozone::Ozone::WindowDC
{
public:

    ClientDC(::Ozone::ClientDC* instance, bool ownNativeInstance = false);

    ClientDC(::Ozone::Ozone::Window* win);

    ClientDC(const ::Ozone::Ozone::ClientDC& _0);

    ~ClientDC();
};

class PaintDC : public ::Ozone::Ozone::ClientDC
{
public:

    PaintDC(::Ozone::PaintDC* instance, bool ownNativeInstance = false);

    PaintDC(::Ozone::Ozone::Window* win);

    PaintDC(const ::Ozone::Ozone::PaintDC& _0);

    ~PaintDC();
};
