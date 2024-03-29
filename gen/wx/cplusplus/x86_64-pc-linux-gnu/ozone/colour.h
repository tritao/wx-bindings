// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/colour.h>

namespace Ozone
{
    class Color;
    class Object;
    enum class C2S : unsigned int;
}

namespace Ozone
{
    enum class C2S : unsigned int
    {
        C2S_NAME = 1,
        C2S_CSS_SYNTAX = 2,
        C2S_HTML_SYNTAX = 4
    };

    class Color
    {
    public:

        ::wxColour* __Instance;

        void* __ExternalInstance;

        Color(::wxColour* instance, bool ownNativeInstance = false);

        Color();

        Color(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);

        Color(unsigned long colRGB);

        Color(const char* colourName);

        Color(const wchar_t* colourName);

        Color(const ::Ozone::Color& _0);

        ~Color();

        bool operator==(const ::Ozone::Color& col) const;

        bool operator!=(const ::Ozone::Color& col) const;

        virtual unsigned char Red() const;

        virtual unsigned char Green() const;

        virtual unsigned char Blue() const;

        virtual unsigned char Alpha() const;

        void Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);

        bool Set(const char* str);

        void Set(unsigned long colRGB);

        virtual bool IsSolid() const;

        virtual const char* GetAsString(long flags) const;

        void SetRGB(unsigned int colRGB);

        void SetRGBA(unsigned int colRGBA);

        unsigned int GetRGB() const;

        unsigned int GetRGBA() const;

        double GetLuminance() const;

        ::Ozone::Color ChangeLightness(int ialpha) const;

        static void MakeMono(unsigned char* r, unsigned char* g, unsigned char* b, bool on);

        static void MakeDisabled(unsigned char* r, unsigned char* g, unsigned char* b, unsigned char brightness);

        static void MakeGrey(unsigned char* r, unsigned char* g, unsigned char* b);

        static void MakeGrey(unsigned char* r, unsigned char* g, unsigned char* b, double weight_r, double weight_g, double weight_b);

        static unsigned char AlphaBlend(unsigned char fg, unsigned char bg, double alpha);

        static void ChangeLightness(unsigned char* r, unsigned char* g, unsigned char* b, int ialpha);

    protected:

        bool __OwnsNativeInstance;
    };

    // unsigned char ALPHA_OPAQUE

    // unsigned char ALPHA_TRANSPARENT
}
