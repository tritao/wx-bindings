// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "dcclient.h"
#include "wx/dcclient.h"
#include "wx/window.h"

#include <wx/eventfilter.h>
wxSharp::WindowDC::WindowDC(::wxWindowDC* instance)
    : wxSharp::DC((::wxDC*)instance)
{
    __Instance = instance;
}

wxSharp::WindowDC::~WindowDC()
{
}

wxSharp::WindowDC::WindowDC(::wxSharp::Window* win)
    : wxSharp::DC((::wxDC*)nullptr)
{
    __ownsNativeInstance = true;
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    __Instance = new ::wxWindowDC(__arg0);
}

wxSharp::ClientDC::ClientDC(::wxClientDC* instance)
    : wxSharp::WindowDC((::wxWindowDC*)instance)
{
    __Instance = instance;
}

wxSharp::ClientDC::~ClientDC()
{
}

wxSharp::ClientDC::ClientDC(::wxSharp::Window* win)
    : wxSharp::WindowDC((::wxWindowDC*)nullptr)
{
    __ownsNativeInstance = true;
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    __Instance = new ::wxClientDC(__arg0);
}

wxSharp::PaintDC::PaintDC(::wxPaintDC* instance)
    : wxSharp::ClientDC((::wxClientDC*)instance)
{
    __Instance = instance;
}

wxSharp::PaintDC::~PaintDC()
{
}

wxSharp::PaintDC::PaintDC(::wxSharp::Window* win)
    : wxSharp::ClientDC((::wxClientDC*)nullptr)
{
    __ownsNativeInstance = true;
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    __Instance = new ::wxPaintDC(__arg0);
}

