// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "ozone/colour.h"
#include "ozone/colour.h"
#include "ozone/object.h"

#include <wx/eventfilter.h>

Ozone::Color::Color(::wxColour* instance, bool ownNativeInstance)
    : __OwnsNativeInstance(ownNativeInstance)
{
    __Instance = instance;
}

Ozone::Color::~Color()
{
}

Ozone::Color::Color()
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxColour();
}

Ozone::Color::Color(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
    __OwnsNativeInstance = true;
    auto __arg0 = (::wxColourBase::ChannelType)red;
    auto __arg1 = (::wxColourBase::ChannelType)green;
    auto __arg2 = (::wxColourBase::ChannelType)blue;
    auto __arg3 = (::wxColourBase::ChannelType)alpha;
    __Instance = new ::wxColour(__arg0, __arg1, __arg2, __arg3);
}

Ozone::Color::Color(unsigned long colRGB)
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxColour(colRGB);
}

Ozone::Color::Color(const char* colourName)
{
    __OwnsNativeInstance = true;
    auto __arg0 = colourName;
    __Instance = new ::wxColour(__arg0);
}

Ozone::Color::Color(const wchar_t* colourName)
{
    __OwnsNativeInstance = true;
    auto __arg0 = (const wchar_t*)colourName;
    __Instance = new ::wxColour(__arg0);
}

bool Ozone::Color::operator==(const ::Ozone::Color& col) const
{
    auto &__arg0 = *(::wxColour*)col.__Instance;
    bool __ret = ((::wxColour*)__Instance)->operator==(__arg0);
    return __ret;
}

bool Ozone::Color::operator!=(const ::Ozone::Color& col) const
{
    auto &__arg0 = *(::wxColour*)col.__Instance;
    bool __ret = ((::wxColour*)__Instance)->operator!=(__arg0);
    return __ret;
}

unsigned char Ozone::Color::Red() const
{
    unsigned char __ret = ((::wxColour*)__Instance)->Red();
    return __ret;
}

unsigned char Ozone::Color::Green() const
{
    unsigned char __ret = ((::wxColour*)__Instance)->Green();
    return __ret;
}

unsigned char Ozone::Color::Blue() const
{
    unsigned char __ret = ((::wxColour*)__Instance)->Blue();
    return __ret;
}

unsigned char Ozone::Color::Alpha() const
{
    unsigned char __ret = ((::wxColour*)__Instance)->Alpha();
    return __ret;
}

Ozone::Color::Color(const ::Ozone::Color& _0)
{
    __OwnsNativeInstance = true;
    auto &__arg0 = *(::wxColour*)_0.__Instance;
    __Instance = new ::wxColour(__arg0);
}

void Ozone::Color::Set(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
    auto __arg0 = (::wxColourBase::ChannelType)red;
    auto __arg1 = (::wxColourBase::ChannelType)green;
    auto __arg2 = (::wxColourBase::ChannelType)blue;
    auto __arg3 = (::wxColourBase::ChannelType)alpha;
    ((::wxColour*)__Instance)->Set(__arg0, __arg1, __arg2, __arg3);
}

bool Ozone::Color::Set(const char* str)
{
    auto __arg0 = str;
    bool __ret = ((::wxColour*)__Instance)->Set(__arg0);
    return __ret;
}

void Ozone::Color::Set(unsigned long colRGB)
{
    ((::wxColour*)__Instance)->Set(colRGB);
}

bool Ozone::Color::IsSolid() const
{
    bool __ret = ((::wxColour*)__Instance)->IsSolid();
    return __ret;
}

const char* Ozone::Color::GetAsString(long flags) const
{
    ::wxString __ret = ((::wxColour*)__Instance)->GetAsString(flags);
    return __ret.c_str();
}

void Ozone::Color::SetRGB(unsigned int colRGB)
{
    auto __arg0 = (::wxUint32)colRGB;
    ((::wxColour*)__Instance)->SetRGB(__arg0);
}

void Ozone::Color::SetRGBA(unsigned int colRGBA)
{
    auto __arg0 = (::wxUint32)colRGBA;
    ((::wxColour*)__Instance)->SetRGBA(__arg0);
}

unsigned int Ozone::Color::GetRGB() const
{
    ::wxUint32 __ret = ((::wxColour*)__Instance)->GetRGB();
    return __ret;
}

unsigned int Ozone::Color::GetRGBA() const
{
    ::wxUint32 __ret = ((::wxColour*)__Instance)->GetRGBA();
    return __ret;
}

double Ozone::Color::GetLuminance() const
{
    double __ret = ((::wxColour*)__Instance)->GetLuminance();
    return __ret;
}

void Ozone::Color::MakeMono(unsigned char* r, unsigned char* g, unsigned char* b, bool on)
{
    auto __arg0 = (unsigned char*)r;
    auto __arg1 = (unsigned char*)g;
    auto __arg2 = (unsigned char*)b;
    ::wxColourBase::MakeMono(__arg0, __arg1, __arg2, on);
}

void Ozone::Color::MakeDisabled(unsigned char* r, unsigned char* g, unsigned char* b, unsigned char brightness)
{
    auto __arg0 = (unsigned char*)r;
    auto __arg1 = (unsigned char*)g;
    auto __arg2 = (unsigned char*)b;
    ::wxColourBase::MakeDisabled(__arg0, __arg1, __arg2, brightness);
}

void Ozone::Color::MakeGrey(unsigned char* r, unsigned char* g, unsigned char* b)
{
    auto __arg0 = (unsigned char*)r;
    auto __arg1 = (unsigned char*)g;
    auto __arg2 = (unsigned char*)b;
    ::wxColourBase::MakeGrey(__arg0, __arg1, __arg2);
}

void Ozone::Color::MakeGrey(unsigned char* r, unsigned char* g, unsigned char* b, double weight_r, double weight_g, double weight_b)
{
    auto __arg0 = (unsigned char*)r;
    auto __arg1 = (unsigned char*)g;
    auto __arg2 = (unsigned char*)b;
    ::wxColourBase::MakeGrey(__arg0, __arg1, __arg2, weight_r, weight_g, weight_b);
}

unsigned char Ozone::Color::AlphaBlend(unsigned char fg, unsigned char bg, double alpha)
{
    unsigned char __ret = ::wxColourBase::AlphaBlend(fg, bg, alpha);
    return __ret;
}

void Ozone::Color::ChangeLightness(unsigned char* r, unsigned char* g, unsigned char* b, int ialpha)
{
    auto __arg0 = (unsigned char*)r;
    auto __arg1 = (unsigned char*)g;
    auto __arg2 = (unsigned char*)b;
    ::wxColourBase::ChangeLightness(__arg0, __arg1, __arg2, ialpha);
}

::Ozone::Color Ozone::Color::ChangeLightness(int ialpha) const
{
    ::wxColour __ret = ((::wxColour*)__Instance)->ChangeLightness(ialpha);
    auto ____ret = new ::wxColour(__ret);
    return ____ret;
}

