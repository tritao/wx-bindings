// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/nonownedwnd.h>
#include "wx/window.h"

namespace wxSharp
{
    class GraphicsPath;
    class NonOwnedWindow;
}

namespace wxSharp
{
    class NonOwnedWindow : public wxSharp::Window
    {
    public:

        NonOwnedWindow(::wxNonOwnedWindow* instance);

        NonOwnedWindow();

        ~NonOwnedWindow();

        bool SetShape(const ::wxSharp::GraphicsPath& path);

        virtual void InheritAttributes() override;
    };
}
