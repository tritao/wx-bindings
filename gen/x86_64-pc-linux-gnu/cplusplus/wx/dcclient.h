// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/dcclient.h>
#include "wx/dc.h"

namespace wxSharp
{
    class ClientDC;
    class PaintDC;
    class Window;
    class WindowDC;
}

namespace wxSharp
{
    class WindowDC : public wxSharp::DC
    {
    public:

        WindowDC(::wxWindowDC* instance);

        WindowDC(::wxSharp::Window* win);

        ~WindowDC();
    };

    class ClientDC : public wxSharp::WindowDC
    {
    public:

        ClientDC(::wxClientDC* instance);

        ClientDC(::wxSharp::Window* win);

        ~ClientDC();
    };

    class PaintDC : public wxSharp::ClientDC
    {
    public:

        PaintDC(::wxPaintDC* instance);

        PaintDC(::wxSharp::Window* win);

        ~PaintDC();
    };
}
