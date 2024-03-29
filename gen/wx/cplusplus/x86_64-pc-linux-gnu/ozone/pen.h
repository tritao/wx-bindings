// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/pen.h>
#include "ozone/colour.h"
#include "ozone/gdicmn.h"

namespace Ozone
{
    class Object;
    class Pen;
    class PenInfo;
    class PenInfoBase;
    class PenList;
    enum class PenCap;
    enum class PenJoin;
    enum class PenStyle;
}

namespace Ozone
{
    enum class PenStyle
    {
        INVALID = -1,
        SOLID = 100,
        DOT = 101,
        LONG_DASH = 102,
        SHORT_DASH = 103,
        DOT_DASH = 104,
        USER_DASH = 105,
        TRANSPARENT = 106,
        STIPPLE_MASK_OPAQUE = 107,
        STIPPLE_MASK = 108,
        STIPPLE = 110,
        BDIAGONAL_HATCH = 111,
        CROSSDIAG_HATCH = 112,
        FDIAGONAL_HATCH = 113,
        CROSS_HATCH = 114,
        HORIZONTAL_HATCH = 115,
        VERTICAL_HATCH = 116,
        FIRST_HATCH = 111,
        LAST_HATCH = 116
    };

    enum class PenJoin
    {
        INVALID = -1,
        BEVEL = 120,
        MITER = 121,
        ROUND = 122
    };

    enum class PenCap
    {
        INVALID = -1,
        ROUND = 130,
        PROJECTING = 131,
        BUTT = 132
    };

    class PenInfo
    {
    public:

        ::wxPenInfo* __Instance;

        void* __ExternalInstance;

        PenInfo(::wxPenInfo* instance, bool ownNativeInstance = false);

        explicit PenInfo(const ::Ozone::Color& colour, int width, ::Ozone::PenStyle style);

        PenInfo(const ::Ozone::PenInfo& _0);

        ~PenInfo();

        int GetWidth() const;

        ::Ozone::Color GetColour() const;

        ::Ozone::PenStyle GetStyle() const;

        ::Ozone::PenJoin GetJoin() const;

        ::Ozone::PenCap GetCap() const;

        int GetDashes(signed char** ptr) const;

        int GetDashCount() const;

        signed char* GetDash() const;

        bool IsTransparent() const;

    protected:

        bool __OwnsNativeInstance;
    };

    class Pen
    {
    public:

        ::wxPen* __Instance;

        void* __ExternalInstance;

        Pen(::wxPen* instance, bool ownNativeInstance = false);

        Pen();

        Pen(const ::Ozone::Color& colour, int width, ::Ozone::PenStyle style);

        Pen(const ::Ozone::PenInfo& info);

        Pen(const ::Ozone::Pen& _0);

        ~Pen();

        bool operator==(const ::Ozone::Pen& pen) const;

        bool operator!=(const ::Ozone::Pen& pen) const;

        virtual void SetColour(const ::Ozone::Color& colour);

        virtual void SetColour(unsigned char red, unsigned char green, unsigned char blue);

        virtual void SetCap(::Ozone::PenCap capStyle);

        virtual void SetJoin(::Ozone::PenJoin joinStyle);

        virtual void SetStyle(::Ozone::PenStyle style);

        virtual void SetWidth(int width);

        virtual void SetDashes(int number_of_dashes, signed char* dash);

        virtual ::Ozone::Color GetColour() const;

        virtual ::Ozone::PenCap GetCap() const;

        virtual ::Ozone::PenJoin GetJoin() const;

        virtual ::Ozone::PenStyle GetStyle() const;

        virtual int GetWidth() const;

        virtual int GetDashes(signed char** ptr) const;

        int GetDashCount() const;

        signed char* GetDash() const;

        bool IsTransparent() const;

        bool IsNonTransparent() const;

    protected:

        bool __OwnsNativeInstance;
    };

    class PenList : public ::Ozone::GDIObjListBase
    {
    public:

        void* __ExternalInstance;

        PenList(::wxPenList* instance, bool ownNativeInstance = false);

        PenList(const ::Ozone::PenList& _0);

        PenList();

        ~PenList();

        ::Ozone::Pen* FindOrCreatePen(const ::Ozone::Color& colour, int width, ::Ozone::PenStyle style);
    };
}
