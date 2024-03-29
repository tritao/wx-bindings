// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "ozone/dc.h"
#include "ozone/brush.h"
#include "ozone/colour.h"
#include "ozone/dc.h"
#include "ozone/dcclient.h"
#include "ozone/defs.h"
#include "ozone/gdicmn.h"
#include "ozone/graphics.h"
#include "ozone/pen.h"
#include "ozone/window.h"

#include <wx/eventfilter.h>

::Ozone::FontMetrics::FontMetrics(::wxFontMetrics* instance, bool ownNativeInstance)
    : __OwnsNativeInstance(ownNativeInstance)
{
    __Instance = instance;
}

::Ozone::FontMetrics::~FontMetrics()
{
}

Ozone::FontMetrics::FontMetrics()
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxFontMetrics();
}

Ozone::FontMetrics::FontMetrics(const ::Ozone::FontMetrics& _0)
{
    __OwnsNativeInstance = true;
    auto &__arg0 = *(::wxFontMetrics*)_0.__Instance;
    __Instance = new ::wxFontMetrics(__arg0);
}

int Ozone::FontMetrics::get_height()
{
    int __ret = ((::wxFontMetrics*)__Instance)->height;
    return __ret;
}


void Ozone::FontMetrics::set_height(int value)
{
    ((::wxFontMetrics*)__Instance)->height = value;
}

int Ozone::FontMetrics::get_ascent()
{
    int __ret = ((::wxFontMetrics*)__Instance)->ascent;
    return __ret;
}


void Ozone::FontMetrics::set_ascent(int value)
{
    ((::wxFontMetrics*)__Instance)->ascent = value;
}

int Ozone::FontMetrics::get_descent()
{
    int __ret = ((::wxFontMetrics*)__Instance)->descent;
    return __ret;
}


void Ozone::FontMetrics::set_descent(int value)
{
    ((::wxFontMetrics*)__Instance)->descent = value;
}

int Ozone::FontMetrics::get_internalLeading()
{
    int __ret = ((::wxFontMetrics*)__Instance)->internalLeading;
    return __ret;
}


void Ozone::FontMetrics::set_internalLeading(int value)
{
    ((::wxFontMetrics*)__Instance)->internalLeading = value;
}

int Ozone::FontMetrics::get_externalLeading()
{
    int __ret = ((::wxFontMetrics*)__Instance)->externalLeading;
    return __ret;
}


void Ozone::FontMetrics::set_externalLeading(int value)
{
    ((::wxFontMetrics*)__Instance)->externalLeading = value;
}

int Ozone::FontMetrics::get_averageWidth()
{
    int __ret = ((::wxFontMetrics*)__Instance)->averageWidth;
    return __ret;
}


void Ozone::FontMetrics::set_averageWidth(int value)
{
    ((::wxFontMetrics*)__Instance)->averageWidth = value;
}

::Ozone::DC::DC(::wxDC* instance, bool ownNativeInstance)
    : ::Ozone::Object((::wxObject*)instance, ownNativeInstance)
{
    __Instance = instance;
}

::Ozone::DC::~DC()
{
}

int Ozone::DC::GetResolution() const
{
    int __ret = ((::wxDC*)__Instance)->GetResolution();
    return __ret;
}

::Ozone::GraphicsContext* Ozone::DC::GetGraphicsContext() const
{
    ::wxGraphicsContext* __ret = ((::wxDC*)__Instance)->GetGraphicsContext();
    return (__ret == nullptr) ? nullptr : new Ozone::GraphicsContext((::wxGraphicsContext*)__ret);
}

void Ozone::DC::SetGraphicsContext(::Ozone::GraphicsContext* ctx)
{
    auto __arg0 = ctx ? (::wxGraphicsContext*)ctx->__Instance : nullptr;
    ((::wxDC*)__Instance)->SetGraphicsContext(__arg0);
}

void Ozone::DC::CopyAttributes(const ::Ozone::DC& dc)
{
    auto &__arg0 = *(::wxDC*)dc.__Instance;
    ((::wxDC*)__Instance)->CopyAttributes(__arg0);
}

::Ozone::Window* Ozone::DC::GetWindow() const
{
    ::wxWindow* __ret = ((::wxDC*)__Instance)->GetWindow();
    return (__ret == nullptr) ? nullptr : new Ozone::Window((::wxWindow*)__ret);
}

void* Ozone::DC::GetHandle() const
{
    void* __ret = ((::wxDC*)__Instance)->GetHandle();
    return __ret;
}

bool Ozone::DC::IsOk() const
{
    bool __ret = ((::wxDC*)__Instance)->IsOk();
    return __ret;
}

bool Ozone::DC::CanDrawBitmap() const
{
    bool __ret = ((::wxDC*)__Instance)->CanDrawBitmap();
    return __ret;
}

bool Ozone::DC::CanGetTextExtent() const
{
    bool __ret = ((::wxDC*)__Instance)->CanGetTextExtent();
    return __ret;
}

void Ozone::DC::GetSize(int* width, int* height) const
{
    int* __arg0 = (int*)width;
    int* __arg1 = (int*)height;
    ((::wxDC*)__Instance)->GetSize(__arg0, __arg1);
    width = __arg0;
    height = __arg1;
}

::Ozone::Size Ozone::DC::GetSize() const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->GetSize();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

void Ozone::DC::GetSizeMM(int* width, int* height) const
{
    int* __arg0 = (int*)width;
    int* __arg1 = (int*)height;
    ((::wxDC*)__Instance)->GetSizeMM(__arg0, __arg1);
    width = __arg0;
    height = __arg1;
}

::Ozone::Size Ozone::DC::GetSizeMM() const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->GetSizeMM();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

int Ozone::DC::GetDepth() const
{
    int __ret = ((::wxDC*)__Instance)->GetDepth();
    return __ret;
}

::Ozone::Size Ozone::DC::GetPPI() const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->GetPPI();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

double Ozone::DC::GetContentScaleFactor() const
{
    double __ret = ((::wxDC*)__Instance)->GetContentScaleFactor();
    return __ret;
}

bool Ozone::DC::StartDoc(const char* message)
{
    auto __arg0 = message;
    bool __ret = ((::wxDC*)__Instance)->StartDoc(__arg0);
    return __ret;
}

void Ozone::DC::EndDoc()
{
    ((::wxDC*)__Instance)->EndDoc();
}

void Ozone::DC::StartPage()
{
    ((::wxDC*)__Instance)->StartPage();
}

void Ozone::DC::EndPage()
{
    ((::wxDC*)__Instance)->EndPage();
}

void Ozone::DC::CalcBoundingBox(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->CalcBoundingBox(__arg0, __arg1);
}

void Ozone::DC::ResetBoundingBox()
{
    ((::wxDC*)__Instance)->ResetBoundingBox();
}

int Ozone::DC::MinX() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MinX();
    return __ret;
}

int Ozone::DC::MaxX() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MaxX();
    return __ret;
}

int Ozone::DC::MinY() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MinY();
    return __ret;
}

int Ozone::DC::MaxY() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MaxY();
    return __ret;
}

void Ozone::DC::SetPen(const ::Ozone::Pen& pen)
{
    auto &__arg0 = *(::wxPen*)pen.__Instance;
    ((::wxDC*)__Instance)->SetPen(__arg0);
}

void Ozone::DC::SetBrush(const ::Ozone::Brush& brush)
{
    auto &__arg0 = *(::wxBrush*)brush.__Instance;
    ((::wxDC*)__Instance)->SetBrush(__arg0);
}

void Ozone::DC::SetBackground(const ::Ozone::Brush& brush)
{
    auto &__arg0 = *(::wxBrush*)brush.__Instance;
    ((::wxDC*)__Instance)->SetBackground(__arg0);
}

void Ozone::DC::SetBackgroundMode(int mode)
{
    ((::wxDC*)__Instance)->SetBackgroundMode(mode);
}

int Ozone::DC::GetBackgroundMode() const
{
    int __ret = ((::wxDC*)__Instance)->GetBackgroundMode();
    return __ret;
}

void Ozone::DC::SetTextForeground(const ::Ozone::Color& colour)
{
    auto &__arg0 = *(::wxColour*)colour.__Instance;
    ((::wxDC*)__Instance)->SetTextForeground(__arg0);
}

void Ozone::DC::SetTextBackground(const ::Ozone::Color& colour)
{
    auto &__arg0 = *(::wxColour*)colour.__Instance;
    ((::wxDC*)__Instance)->SetTextBackground(__arg0);
}

void Ozone::DC::SetLogicalFunction(::Ozone::RasterOperationMode function)
{
    auto __arg0 = (::wxRasterOperationMode)function;
    ((::wxDC*)__Instance)->SetLogicalFunction(__arg0);
}

::Ozone::RasterOperationMode Ozone::DC::GetLogicalFunction() const
{
    ::wxRasterOperationMode __ret = ((::wxDC*)__Instance)->GetLogicalFunction();
    return (::Ozone::RasterOperationMode)__ret;
}

int Ozone::DC::GetCharHeight() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->GetCharHeight();
    return __ret;
}

int Ozone::DC::GetCharWidth() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->GetCharWidth();
    return __ret;
}

::Ozone::FontMetrics Ozone::DC::GetFontMetrics() const
{
    ::wxFontMetrics __ret = ((::wxDC*)__Instance)->GetFontMetrics();
    auto ____ret = new ::wxFontMetrics(__ret);
    return ____ret;
}

::Ozone::Size Ozone::DC::GetTextExtent(const char* string) const
{
    auto __arg0 = string;
    ::wxSize __ret = ((::wxDC*)__Instance)->GetTextExtent(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::Ozone::Size Ozone::DC::GetMultiLineTextExtent(const char* string) const
{
    auto __arg0 = string;
    ::wxSize __ret = ((::wxDC*)__Instance)->GetMultiLineTextExtent(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

void Ozone::DC::Clear()
{
    ((::wxDC*)__Instance)->Clear();
}

void Ozone::DC::SetClippingRegion(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->SetClippingRegion(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::SetClippingRegion(const ::Ozone::Point& pt, const ::Ozone::Size& sz)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->SetClippingRegion(__arg0, __arg1);
}

void Ozone::DC::SetClippingRegion(const ::Ozone::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->SetClippingRegion(__arg0);
}

void Ozone::DC::DestroyClippingRegion()
{
    ((::wxDC*)__Instance)->DestroyClippingRegion();
}

bool Ozone::DC::GetClippingBox(int* x, int* y, int* w, int* h) const
{
    int* __arg0 = (::wxCoord*)x;
    int* __arg1 = (::wxCoord*)y;
    int* __arg2 = (::wxCoord*)w;
    int* __arg3 = (::wxCoord*)h;
    bool __ret = ((::wxDC*)__Instance)->GetClippingBox(__arg0, __arg1, __arg2, __arg3);
    x = __arg0;
    y = __arg1;
    w = __arg2;
    h = __arg3;
    return __ret;
}

bool Ozone::DC::GetClippingBox(::Ozone::Rect& rect) const
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    bool __ret = ((::wxDC*)__Instance)->GetClippingBox(__arg0);
    return __ret;
}

int Ozone::DC::DeviceToLogicalX(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalX(__arg0);
    return __ret;
}

int Ozone::DC::DeviceToLogicalY(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalY(__arg0);
    return __ret;
}

int Ozone::DC::DeviceToLogicalXRel(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalXRel(__arg0);
    return __ret;
}

int Ozone::DC::DeviceToLogicalYRel(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalYRel(__arg0);
    return __ret;
}

::Ozone::Point Ozone::DC::DeviceToLogical(const ::Ozone::Point& pt) const
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ::wxPoint __ret = ((::wxDC*)__Instance)->DeviceToLogical(__arg0);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::Ozone::Point Ozone::DC::DeviceToLogical(int x, int y) const
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ::wxPoint __ret = ((::wxDC*)__Instance)->DeviceToLogical(__arg0, __arg1);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::Ozone::Size Ozone::DC::DeviceToLogicalRel(const ::Ozone::Size& dim) const
{
    auto &__arg0 = *(::wxSize*)dim.__Instance;
    ::wxSize __ret = ((::wxDC*)__Instance)->DeviceToLogicalRel(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::Ozone::Size Ozone::DC::DeviceToLogicalRel(int x, int y) const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->DeviceToLogicalRel(x, y);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

int Ozone::DC::LogicalToDeviceX(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceX(__arg0);
    return __ret;
}

int Ozone::DC::LogicalToDeviceY(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceY(__arg0);
    return __ret;
}

int Ozone::DC::LogicalToDeviceXRel(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceXRel(__arg0);
    return __ret;
}

int Ozone::DC::LogicalToDeviceYRel(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceYRel(__arg0);
    return __ret;
}

::Ozone::Point Ozone::DC::LogicalToDevice(const ::Ozone::Point& pt) const
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ::wxPoint __ret = ((::wxDC*)__Instance)->LogicalToDevice(__arg0);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::Ozone::Point Ozone::DC::LogicalToDevice(int x, int y) const
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ::wxPoint __ret = ((::wxDC*)__Instance)->LogicalToDevice(__arg0, __arg1);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::Ozone::Size Ozone::DC::LogicalToDeviceRel(const ::Ozone::Size& dim) const
{
    auto &__arg0 = *(::wxSize*)dim.__Instance;
    ::wxSize __ret = ((::wxDC*)__Instance)->LogicalToDeviceRel(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::Ozone::Size Ozone::DC::LogicalToDeviceRel(int x, int y) const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->LogicalToDeviceRel(x, y);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

void Ozone::DC::SetMapMode(::Ozone::MappingMode mode)
{
    auto __arg0 = (::wxMappingMode)mode;
    ((::wxDC*)__Instance)->SetMapMode(__arg0);
}

::Ozone::MappingMode Ozone::DC::GetMapMode() const
{
    ::wxMappingMode __ret = ((::wxDC*)__Instance)->GetMapMode();
    return (::Ozone::MappingMode)__ret;
}

void Ozone::DC::SetUserScale(double x, double y)
{
    ((::wxDC*)__Instance)->SetUserScale(x, y);
}

void Ozone::DC::GetUserScale(double* x, double* y) const
{
    double* __arg0 = (double*)x;
    double* __arg1 = (double*)y;
    ((::wxDC*)__Instance)->GetUserScale(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

void Ozone::DC::SetLogicalScale(double x, double y)
{
    ((::wxDC*)__Instance)->SetLogicalScale(x, y);
}

void Ozone::DC::GetLogicalScale(double* x, double* y) const
{
    double* __arg0 = (double*)x;
    double* __arg1 = (double*)y;
    ((::wxDC*)__Instance)->GetLogicalScale(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

void Ozone::DC::SetLogicalOrigin(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->SetLogicalOrigin(__arg0, __arg1);
}

void Ozone::DC::GetLogicalOrigin(int* x, int* y) const
{
    int* __arg0 = (::wxCoord*)x;
    int* __arg1 = (::wxCoord*)y;
    ((::wxDC*)__Instance)->GetLogicalOrigin(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

::Ozone::Point Ozone::DC::GetLogicalOrigin() const
{
    ::wxPoint __ret = ((::wxDC*)__Instance)->GetLogicalOrigin();
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

void Ozone::DC::SetDeviceOrigin(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->SetDeviceOrigin(__arg0, __arg1);
}

void Ozone::DC::GetDeviceOrigin(int* x, int* y) const
{
    int* __arg0 = (::wxCoord*)x;
    int* __arg1 = (::wxCoord*)y;
    ((::wxDC*)__Instance)->GetDeviceOrigin(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

::Ozone::Point Ozone::DC::GetDeviceOrigin() const
{
    ::wxPoint __ret = ((::wxDC*)__Instance)->GetDeviceOrigin();
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

void Ozone::DC::SetAxisOrientation(bool xLeftRight, bool yBottomUp)
{
    ((::wxDC*)__Instance)->SetAxisOrientation(xLeftRight, yBottomUp);
}

bool Ozone::DC::CanUseTransformMatrix() const
{
    bool __ret = ((::wxDC*)__Instance)->CanUseTransformMatrix();
    return __ret;
}

void Ozone::DC::ResetTransformMatrix()
{
    ((::wxDC*)__Instance)->ResetTransformMatrix();
}

void Ozone::DC::SetDeviceLocalOrigin(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->SetDeviceLocalOrigin(__arg0, __arg1);
}

bool Ozone::DC::FloodFill(int x, int y, const ::Ozone::Color& col, ::Ozone::FloodFillStyle style)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto &__arg2 = *(::wxColour*)col.__Instance;
    auto __arg3 = (::wxFloodFillStyle)style;
    bool __ret = ((::wxDC*)__Instance)->FloodFill(__arg0, __arg1, __arg2, __arg3);
    return __ret;
}

bool Ozone::DC::FloodFill(const ::Ozone::Point& pt, const ::Ozone::Color& col, ::Ozone::FloodFillStyle style)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxColour*)col.__Instance;
    auto __arg2 = (::wxFloodFillStyle)style;
    bool __ret = ((::wxDC*)__Instance)->FloodFill(__arg0, __arg1, __arg2);
    return __ret;
}

void Ozone::DC::GradientFillConcentric(const ::Ozone::Rect& rect, const ::Ozone::Color& initialColour, const ::Ozone::Color& destColour)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    auto &__arg1 = *(::wxColour*)initialColour.__Instance;
    auto &__arg2 = *(::wxColour*)destColour.__Instance;
    ((::wxDC*)__Instance)->GradientFillConcentric(__arg0, __arg1, __arg2);
}

void Ozone::DC::GradientFillConcentric(const ::Ozone::Rect& rect, const ::Ozone::Color& initialColour, const ::Ozone::Color& destColour, const ::Ozone::Point& circleCenter)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    auto &__arg1 = *(::wxColour*)initialColour.__Instance;
    auto &__arg2 = *(::wxColour*)destColour.__Instance;
    auto &__arg3 = *(::wxPoint*)circleCenter.__Instance;
    ((::wxDC*)__Instance)->GradientFillConcentric(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::GradientFillLinear(const ::Ozone::Rect& rect, const ::Ozone::Color& initialColour, const ::Ozone::Color& destColour, ::Ozone::Direction nDirection)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    auto &__arg1 = *(::wxColour*)initialColour.__Instance;
    auto &__arg2 = *(::wxColour*)destColour.__Instance;
    auto __arg3 = (::wxDirection)nDirection;
    ((::wxDC*)__Instance)->GradientFillLinear(__arg0, __arg1, __arg2, __arg3);
}

bool Ozone::DC::GetPixel(int x, int y, ::Ozone::Color* col) const
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = col ? (::wxColour*)col->__Instance : nullptr;
    bool __ret = ((::wxDC*)__Instance)->GetPixel(__arg0, __arg1, __arg2);
    return __ret;
}

bool Ozone::DC::GetPixel(const ::Ozone::Point& pt, ::Ozone::Color* col) const
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto __arg1 = col ? (::wxColour*)col->__Instance : nullptr;
    bool __ret = ((::wxDC*)__Instance)->GetPixel(__arg0, __arg1);
    return __ret;
}

void Ozone::DC::DrawLine(int x1, int y1, int x2, int y2)
{
    auto __arg0 = (::wxCoord)x1;
    auto __arg1 = (::wxCoord)y1;
    auto __arg2 = (::wxCoord)x2;
    auto __arg3 = (::wxCoord)y2;
    ((::wxDC*)__Instance)->DrawLine(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::DrawLine(const ::Ozone::Point& pt1, const ::Ozone::Point& pt2)
{
    auto &__arg0 = *(::wxPoint*)pt1.__Instance;
    auto &__arg1 = *(::wxPoint*)pt2.__Instance;
    ((::wxDC*)__Instance)->DrawLine(__arg0, __arg1);
}

void Ozone::DC::CrossHair(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->CrossHair(__arg0, __arg1);
}

void Ozone::DC::CrossHair(const ::Ozone::Point& pt)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->CrossHair(__arg0);
}

void Ozone::DC::DrawArc(int x1, int y1, int x2, int y2, int xc, int yc)
{
    auto __arg0 = (::wxCoord)x1;
    auto __arg1 = (::wxCoord)y1;
    auto __arg2 = (::wxCoord)x2;
    auto __arg3 = (::wxCoord)y2;
    auto __arg4 = (::wxCoord)xc;
    auto __arg5 = (::wxCoord)yc;
    ((::wxDC*)__Instance)->DrawArc(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5);
}

void Ozone::DC::DrawArc(const ::Ozone::Point& pt1, const ::Ozone::Point& pt2, const ::Ozone::Point& centre)
{
    auto &__arg0 = *(::wxPoint*)pt1.__Instance;
    auto &__arg1 = *(::wxPoint*)pt2.__Instance;
    auto &__arg2 = *(::wxPoint*)centre.__Instance;
    ((::wxDC*)__Instance)->DrawArc(__arg0, __arg1, __arg2);
}

void Ozone::DC::DrawCheckMark(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawCheckMark(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::DrawCheckMark(const ::Ozone::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawCheckMark(__arg0);
}

void Ozone::DC::DrawEllipticArc(int x, int y, int w, int h, double sa, double ea)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)w;
    auto __arg3 = (::wxCoord)h;
    ((::wxDC*)__Instance)->DrawEllipticArc(__arg0, __arg1, __arg2, __arg3, sa, ea);
}

void Ozone::DC::DrawEllipticArc(const ::Ozone::Point& pt, const ::Ozone::Size& sz, double sa, double ea)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawEllipticArc(__arg0, __arg1, sa, ea);
}

void Ozone::DC::DrawPoint(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->DrawPoint(__arg0, __arg1);
}

void Ozone::DC::DrawPoint(const ::Ozone::Point& pt)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->DrawPoint(__arg0);
}

void Ozone::DC::DrawLines(int n, ::Ozone::Point points[], int xoffset, int yoffset)
{
    auto __arg1 = nullptr;
    auto __arg2 = (::wxCoord)xoffset;
    auto __arg3 = (::wxCoord)yoffset;
    ((::wxDC*)__Instance)->DrawLines(n, __arg1, __arg2, __arg3);
}

void Ozone::DC::DrawLines(const ::Ozone::PointList* list, int xoffset, int yoffset)
{
    auto __arg0 = list ? (::wxPointList*)list->__Instance : nullptr;
    auto __arg1 = (::wxCoord)xoffset;
    auto __arg2 = (::wxCoord)yoffset;
    ((::wxDC*)__Instance)->DrawLines(__arg0, __arg1, __arg2);
}

void Ozone::DC::DrawPolygon(int n, ::Ozone::Point points[], int xoffset, int yoffset, ::Ozone::PolygonFillMode fillStyle)
{
    auto __arg1 = nullptr;
    auto __arg2 = (::wxCoord)xoffset;
    auto __arg3 = (::wxCoord)yoffset;
    auto __arg4 = (::wxPolygonFillMode)fillStyle;
    ((::wxDC*)__Instance)->DrawPolygon(n, __arg1, __arg2, __arg3, __arg4);
}

void Ozone::DC::DrawPolygon(const ::Ozone::PointList* list, int xoffset, int yoffset, ::Ozone::PolygonFillMode fillStyle)
{
    auto __arg0 = list ? (::wxPointList*)list->__Instance : nullptr;
    auto __arg1 = (::wxCoord)xoffset;
    auto __arg2 = (::wxCoord)yoffset;
    auto __arg3 = (::wxPolygonFillMode)fillStyle;
    ((::wxDC*)__Instance)->DrawPolygon(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::DrawPolyPolygon(int n, int count[], ::Ozone::Point points[], int xoffset, int yoffset, ::Ozone::PolygonFillMode fillStyle)
{
    auto __arg1 = nullptr;
    auto __arg2 = nullptr;
    auto __arg3 = (::wxCoord)xoffset;
    auto __arg4 = (::wxCoord)yoffset;
    auto __arg5 = (::wxPolygonFillMode)fillStyle;
    ((::wxDC*)__Instance)->DrawPolyPolygon(n, __arg1, __arg2, __arg3, __arg4, __arg5);
}

void Ozone::DC::DrawRectangle(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawRectangle(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::DrawRectangle(const ::Ozone::Point& pt, const ::Ozone::Size& sz)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawRectangle(__arg0, __arg1);
}

void Ozone::DC::DrawRectangle(const ::Ozone::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawRectangle(__arg0);
}

void Ozone::DC::DrawRoundedRectangle(int x, int y, int width, int height, double radius)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawRoundedRectangle(__arg0, __arg1, __arg2, __arg3, radius);
}

void Ozone::DC::DrawRoundedRectangle(const ::Ozone::Point& pt, const ::Ozone::Size& sz, double radius)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawRoundedRectangle(__arg0, __arg1, radius);
}

void Ozone::DC::DrawRoundedRectangle(const ::Ozone::Rect& r, double radius)
{
    auto &__arg0 = *(::wxRect*)r.__Instance;
    ((::wxDC*)__Instance)->DrawRoundedRectangle(__arg0, radius);
}

void Ozone::DC::DrawCircle(int x, int y, int radius)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)radius;
    ((::wxDC*)__Instance)->DrawCircle(__arg0, __arg1, __arg2);
}

void Ozone::DC::DrawCircle(const ::Ozone::Point& pt, int radius)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto __arg1 = (::wxCoord)radius;
    ((::wxDC*)__Instance)->DrawCircle(__arg0, __arg1);
}

void Ozone::DC::DrawEllipse(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawEllipse(__arg0, __arg1, __arg2, __arg3);
}

void Ozone::DC::DrawEllipse(const ::Ozone::Point& pt, const ::Ozone::Size& sz)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawEllipse(__arg0, __arg1);
}

void Ozone::DC::DrawEllipse(const ::Ozone::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawEllipse(__arg0);
}

void Ozone::DC::DrawText(const char* text, int x, int y)
{
    auto __arg0 = text;
    auto __arg1 = (::wxCoord)x;
    auto __arg2 = (::wxCoord)y;
    ((::wxDC*)__Instance)->DrawText(__arg0, __arg1, __arg2);
}

void Ozone::DC::DrawText(const char* text, const ::Ozone::Point& pt)
{
    auto __arg0 = text;
    auto &__arg1 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->DrawText(__arg0, __arg1);
}

void Ozone::DC::DrawRotatedText(const char* text, int x, int y, double angle)
{
    auto __arg0 = text;
    auto __arg1 = (::wxCoord)x;
    auto __arg2 = (::wxCoord)y;
    ((::wxDC*)__Instance)->DrawRotatedText(__arg0, __arg1, __arg2, angle);
}

void Ozone::DC::DrawRotatedText(const char* text, const ::Ozone::Point& pt, double angle)
{
    auto __arg0 = text;
    auto &__arg1 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->DrawRotatedText(__arg0, __arg1, angle);
}

void Ozone::DC::DrawLabel(const char* text, const ::Ozone::Rect& rect, int alignment, int indexAccel)
{
    auto __arg0 = text;
    auto &__arg1 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawLabel(__arg0, __arg1, alignment, indexAccel);
}

bool Ozone::DC::Blit(int xdest, int ydest, int width, int height, ::Ozone::DC* source, int xsrc, int ysrc, ::Ozone::RasterOperationMode rop, bool useMask, int xsrcMask, int ysrcMask)
{
    auto __arg0 = (::wxCoord)xdest;
    auto __arg1 = (::wxCoord)ydest;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    auto __arg4 = source ? (::wxDC*)source->__Instance : nullptr;
    auto __arg5 = (::wxCoord)xsrc;
    auto __arg6 = (::wxCoord)ysrc;
    auto __arg7 = (::wxRasterOperationMode)rop;
    auto __arg9 = (::wxCoord)xsrcMask;
    auto __arg10 = (::wxCoord)ysrcMask;
    bool __ret = ((::wxDC*)__Instance)->Blit(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7, useMask, __arg9, __arg10);
    return __ret;
}

bool Ozone::DC::Blit(const ::Ozone::Point& destPt, const ::Ozone::Size& sz, ::Ozone::DC* source, const ::Ozone::Point& srcPt, ::Ozone::RasterOperationMode rop, bool useMask, const ::Ozone::Point& srcPtMask)
{
    auto &__arg0 = *(::wxPoint*)destPt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    auto __arg2 = source ? (::wxDC*)source->__Instance : nullptr;
    auto &__arg3 = *(::wxPoint*)srcPt.__Instance;
    auto __arg4 = (::wxRasterOperationMode)rop;
    auto &__arg6 = *(::wxPoint*)srcPtMask.__Instance;
    bool __ret = ((::wxDC*)__Instance)->Blit(__arg0, __arg1, __arg2, __arg3, __arg4, useMask, __arg6);
    return __ret;
}

bool Ozone::DC::StretchBlit(int dstX, int dstY, int dstWidth, int dstHeight, ::Ozone::DC* source, int srcX, int srcY, int srcWidth, int srcHeight, ::Ozone::RasterOperationMode rop, bool useMask, int srcMaskX, int srcMaskY)
{
    auto __arg0 = (::wxCoord)dstX;
    auto __arg1 = (::wxCoord)dstY;
    auto __arg2 = (::wxCoord)dstWidth;
    auto __arg3 = (::wxCoord)dstHeight;
    auto __arg4 = source ? (::wxDC*)source->__Instance : nullptr;
    auto __arg5 = (::wxCoord)srcX;
    auto __arg6 = (::wxCoord)srcY;
    auto __arg7 = (::wxCoord)srcWidth;
    auto __arg8 = (::wxCoord)srcHeight;
    auto __arg9 = (::wxRasterOperationMode)rop;
    auto __arg11 = (::wxCoord)srcMaskX;
    auto __arg12 = (::wxCoord)srcMaskY;
    bool __ret = ((::wxDC*)__Instance)->StretchBlit(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7, __arg8, __arg9, useMask, __arg11, __arg12);
    return __ret;
}

bool Ozone::DC::StretchBlit(const ::Ozone::Point& dstPt, const ::Ozone::Size& dstSize, ::Ozone::DC* source, const ::Ozone::Point& srcPt, const ::Ozone::Size& srcSize, ::Ozone::RasterOperationMode rop, bool useMask, const ::Ozone::Point& srcMaskPt)
{
    auto &__arg0 = *(::wxPoint*)dstPt.__Instance;
    auto &__arg1 = *(::wxSize*)dstSize.__Instance;
    auto __arg2 = source ? (::wxDC*)source->__Instance : nullptr;
    auto &__arg3 = *(::wxPoint*)srcPt.__Instance;
    auto &__arg4 = *(::wxSize*)srcSize.__Instance;
    auto __arg5 = (::wxRasterOperationMode)rop;
    auto &__arg7 = *(::wxPoint*)srcMaskPt.__Instance;
    bool __ret = ((::wxDC*)__Instance)->StretchBlit(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, useMask, __arg7);
    return __ret;
}

void Ozone::DC::DrawSpline(int x1, int y1, int x2, int y2, int x3, int y3)
{
    auto __arg0 = (::wxCoord)x1;
    auto __arg1 = (::wxCoord)y1;
    auto __arg2 = (::wxCoord)x2;
    auto __arg3 = (::wxCoord)y2;
    auto __arg4 = (::wxCoord)x3;
    auto __arg5 = (::wxCoord)y3;
    ((::wxDC*)__Instance)->DrawSpline(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5);
}

void Ozone::DC::DrawSpline(int n, ::Ozone::Point points[])
{
    auto __arg1 = nullptr;
    ((::wxDC*)__Instance)->DrawSpline(n, __arg1);
}

void Ozone::DC::DrawSpline(const ::Ozone::PointList* points)
{
    auto __arg0 = points ? (::wxPointList*)points->__Instance : nullptr;
    ((::wxDC*)__Instance)->DrawSpline(__arg0);
}

