// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "dc.h"
#include "wx/brush.h"
#include "wx/colour.h"
#include "wx/dc.h"
#include "wx/dcclient.h"
#include "wx/defs.h"
#include "wx/gdicmn.h"
#include "wx/graphics.h"
#include "wx/pen.h"
#include "wx/window.h"

#include <wx/eventfilter.h>
wxSharp::FontMetrics::FontMetrics(::wxFontMetrics* instance)
{
    __Instance = instance;
}

wxSharp::FontMetrics::~FontMetrics()
{
}

wxSharp::FontMetrics::FontMetrics()
{
    __ownsNativeInstance = true;
    __Instance = new ::wxFontMetrics();
}

wxSharp::FontMetrics::FontMetrics(const ::wxSharp::FontMetrics& _0)
{
    __ownsNativeInstance = true;
    auto &__arg0 = *(::wxFontMetrics*)_0.__Instance;
    __Instance = new ::wxFontMetrics(__arg0);
}

int wxSharp::FontMetrics::get_height()
{
    int __ret = ((::wxFontMetrics*)__Instance)->height;
    return __ret;
}


void wxSharp::FontMetrics::set_height(int value)
{
    ((::wxFontMetrics*)__Instance)->height = value;
}

int wxSharp::FontMetrics::get_ascent()
{
    int __ret = ((::wxFontMetrics*)__Instance)->ascent;
    return __ret;
}


void wxSharp::FontMetrics::set_ascent(int value)
{
    ((::wxFontMetrics*)__Instance)->ascent = value;
}

int wxSharp::FontMetrics::get_descent()
{
    int __ret = ((::wxFontMetrics*)__Instance)->descent;
    return __ret;
}


void wxSharp::FontMetrics::set_descent(int value)
{
    ((::wxFontMetrics*)__Instance)->descent = value;
}

int wxSharp::FontMetrics::get_internalLeading()
{
    int __ret = ((::wxFontMetrics*)__Instance)->internalLeading;
    return __ret;
}


void wxSharp::FontMetrics::set_internalLeading(int value)
{
    ((::wxFontMetrics*)__Instance)->internalLeading = value;
}

int wxSharp::FontMetrics::get_externalLeading()
{
    int __ret = ((::wxFontMetrics*)__Instance)->externalLeading;
    return __ret;
}


void wxSharp::FontMetrics::set_externalLeading(int value)
{
    ((::wxFontMetrics*)__Instance)->externalLeading = value;
}

int wxSharp::FontMetrics::get_averageWidth()
{
    int __ret = ((::wxFontMetrics*)__Instance)->averageWidth;
    return __ret;
}


void wxSharp::FontMetrics::set_averageWidth(int value)
{
    ((::wxFontMetrics*)__Instance)->averageWidth = value;
}

wxSharp::DC::DC(::wxDC* instance)
    : wxSharp::Object((::wxObject*)instance)
{
    __Instance = instance;
}

wxSharp::DC::~DC()
{
}

void wxSharp::DC::CopyAttributes(const ::wxSharp::DC& dc)
{
    auto &__arg0 = *(::wxDC*)dc.__Instance;
    ((::wxDC*)__Instance)->CopyAttributes(__arg0);
}

::wxSharp::Window* wxSharp::DC::GetWindow() const
{
    ::wxWindow* __ret = ((::wxDC*)__Instance)->GetWindow();
    return (__ret == nullptr) ? nullptr : new wxSharp::Window((::wxWindow*)__ret);
}

void* wxSharp::DC::GetHandle() const
{
    void* __ret = ((::wxDC*)__Instance)->GetHandle();
    return __ret;
}

bool wxSharp::DC::IsOk() const
{
    bool __ret = ((::wxDC*)__Instance)->IsOk();
    return __ret;
}

bool wxSharp::DC::CanDrawBitmap() const
{
    bool __ret = ((::wxDC*)__Instance)->CanDrawBitmap();
    return __ret;
}

bool wxSharp::DC::CanGetTextExtent() const
{
    bool __ret = ((::wxDC*)__Instance)->CanGetTextExtent();
    return __ret;
}

void wxSharp::DC::GetSize(int* width, int* height) const
{
    int* __arg0 = (int*)width;
    int* __arg1 = (int*)height;
    ((::wxDC*)__Instance)->GetSize(__arg0, __arg1);
    width = __arg0;
    height = __arg1;
}

::wxSharp::Size wxSharp::DC::GetSize() const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->GetSize();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

void wxSharp::DC::GetSizeMM(int* width, int* height) const
{
    int* __arg0 = (int*)width;
    int* __arg1 = (int*)height;
    ((::wxDC*)__Instance)->GetSizeMM(__arg0, __arg1);
    width = __arg0;
    height = __arg1;
}

::wxSharp::Size wxSharp::DC::GetSizeMM() const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->GetSizeMM();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

int wxSharp::DC::GetDepth() const
{
    int __ret = ((::wxDC*)__Instance)->GetDepth();
    return __ret;
}

::wxSharp::Size wxSharp::DC::GetPPI() const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->GetPPI();
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

int wxSharp::DC::GetResolution() const
{
    int __ret = ((::wxDC*)__Instance)->GetResolution();
    return __ret;
}

double wxSharp::DC::GetContentScaleFactor() const
{
    double __ret = ((::wxDC*)__Instance)->GetContentScaleFactor();
    return __ret;
}

bool wxSharp::DC::StartDoc(const char* message)
{
    auto __arg0 = message;
    bool __ret = ((::wxDC*)__Instance)->StartDoc(__arg0);
    return __ret;
}

void wxSharp::DC::EndDoc()
{
    ((::wxDC*)__Instance)->EndDoc();
}

void wxSharp::DC::StartPage()
{
    ((::wxDC*)__Instance)->StartPage();
}

void wxSharp::DC::EndPage()
{
    ((::wxDC*)__Instance)->EndPage();
}

void wxSharp::DC::CalcBoundingBox(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->CalcBoundingBox(__arg0, __arg1);
}

void wxSharp::DC::ResetBoundingBox()
{
    ((::wxDC*)__Instance)->ResetBoundingBox();
}

int wxSharp::DC::MinX() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MinX();
    return __ret;
}

int wxSharp::DC::MaxX() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MaxX();
    return __ret;
}

int wxSharp::DC::MinY() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MinY();
    return __ret;
}

int wxSharp::DC::MaxY() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->MaxY();
    return __ret;
}

void wxSharp::DC::SetPen(const ::wxSharp::Pen& pen)
{
    auto &__arg0 = *(::wxPen*)pen.__Instance;
    ((::wxDC*)__Instance)->SetPen(__arg0);
}

void wxSharp::DC::SetBrush(const ::wxSharp::Brush& brush)
{
    auto &__arg0 = *(::wxBrush*)brush.__Instance;
    ((::wxDC*)__Instance)->SetBrush(__arg0);
}

void wxSharp::DC::SetBackground(const ::wxSharp::Brush& brush)
{
    auto &__arg0 = *(::wxBrush*)brush.__Instance;
    ((::wxDC*)__Instance)->SetBackground(__arg0);
}

void wxSharp::DC::SetBackgroundMode(int mode)
{
    ((::wxDC*)__Instance)->SetBackgroundMode(mode);
}

int wxSharp::DC::GetBackgroundMode() const
{
    int __ret = ((::wxDC*)__Instance)->GetBackgroundMode();
    return __ret;
}

void wxSharp::DC::SetTextForeground(const ::wxSharp::Color& colour)
{
    auto &__arg0 = *(::wxColour*)colour.__Instance;
    ((::wxDC*)__Instance)->SetTextForeground(__arg0);
}

void wxSharp::DC::SetTextBackground(const ::wxSharp::Color& colour)
{
    auto &__arg0 = *(::wxColour*)colour.__Instance;
    ((::wxDC*)__Instance)->SetTextBackground(__arg0);
}

void wxSharp::DC::SetLogicalFunction(::wxSharp::RasterOperationMode function)
{
    auto __arg0 = (::wxRasterOperationMode)function;
    ((::wxDC*)__Instance)->SetLogicalFunction(__arg0);
}

::wxSharp::RasterOperationMode wxSharp::DC::GetLogicalFunction() const
{
    ::wxRasterOperationMode __ret = ((::wxDC*)__Instance)->GetLogicalFunction();
    return (::wxSharp::RasterOperationMode)__ret;
}

int wxSharp::DC::GetCharHeight() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->GetCharHeight();
    return __ret;
}

int wxSharp::DC::GetCharWidth() const
{
    ::wxCoord __ret = ((::wxDC*)__Instance)->GetCharWidth();
    return __ret;
}

::wxSharp::FontMetrics wxSharp::DC::GetFontMetrics() const
{
    ::wxFontMetrics __ret = ((::wxDC*)__Instance)->GetFontMetrics();
    auto ____ret = new ::wxFontMetrics(__ret);
    return ____ret;
}

::wxSharp::Size wxSharp::DC::GetTextExtent(const char* string) const
{
    auto __arg0 = string;
    ::wxSize __ret = ((::wxDC*)__Instance)->GetTextExtent(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::wxSharp::Size wxSharp::DC::GetMultiLineTextExtent(const char* string) const
{
    auto __arg0 = string;
    ::wxSize __ret = ((::wxDC*)__Instance)->GetMultiLineTextExtent(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

void wxSharp::DC::Clear()
{
    ((::wxDC*)__Instance)->Clear();
}

void wxSharp::DC::SetClippingRegion(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->SetClippingRegion(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::SetClippingRegion(const ::wxSharp::Point& pt, const ::wxSharp::Size& sz)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->SetClippingRegion(__arg0, __arg1);
}

void wxSharp::DC::SetClippingRegion(const ::wxSharp::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->SetClippingRegion(__arg0);
}

void wxSharp::DC::DestroyClippingRegion()
{
    ((::wxDC*)__Instance)->DestroyClippingRegion();
}

bool wxSharp::DC::GetClippingBox(int* x, int* y, int* w, int* h) const
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

bool wxSharp::DC::GetClippingBox(::wxSharp::Rect& rect) const
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    bool __ret = ((::wxDC*)__Instance)->GetClippingBox(__arg0);
    return __ret;
}

int wxSharp::DC::DeviceToLogicalX(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalX(__arg0);
    return __ret;
}

int wxSharp::DC::DeviceToLogicalY(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalY(__arg0);
    return __ret;
}

int wxSharp::DC::DeviceToLogicalXRel(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalXRel(__arg0);
    return __ret;
}

int wxSharp::DC::DeviceToLogicalYRel(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->DeviceToLogicalYRel(__arg0);
    return __ret;
}

::wxSharp::Point wxSharp::DC::DeviceToLogical(const ::wxSharp::Point& pt) const
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ::wxPoint __ret = ((::wxDC*)__Instance)->DeviceToLogical(__arg0);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::wxSharp::Point wxSharp::DC::DeviceToLogical(int x, int y) const
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ::wxPoint __ret = ((::wxDC*)__Instance)->DeviceToLogical(__arg0, __arg1);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::wxSharp::Size wxSharp::DC::DeviceToLogicalRel(const ::wxSharp::Size& dim) const
{
    auto &__arg0 = *(::wxSize*)dim.__Instance;
    ::wxSize __ret = ((::wxDC*)__Instance)->DeviceToLogicalRel(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::wxSharp::Size wxSharp::DC::DeviceToLogicalRel(int x, int y) const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->DeviceToLogicalRel(x, y);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

int wxSharp::DC::LogicalToDeviceX(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceX(__arg0);
    return __ret;
}

int wxSharp::DC::LogicalToDeviceY(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceY(__arg0);
    return __ret;
}

int wxSharp::DC::LogicalToDeviceXRel(int x) const
{
    auto __arg0 = (::wxCoord)x;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceXRel(__arg0);
    return __ret;
}

int wxSharp::DC::LogicalToDeviceYRel(int y) const
{
    auto __arg0 = (::wxCoord)y;
    ::wxCoord __ret = ((::wxDC*)__Instance)->LogicalToDeviceYRel(__arg0);
    return __ret;
}

::wxSharp::Point wxSharp::DC::LogicalToDevice(const ::wxSharp::Point& pt) const
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ::wxPoint __ret = ((::wxDC*)__Instance)->LogicalToDevice(__arg0);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::wxSharp::Point wxSharp::DC::LogicalToDevice(int x, int y) const
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ::wxPoint __ret = ((::wxDC*)__Instance)->LogicalToDevice(__arg0, __arg1);
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

::wxSharp::Size wxSharp::DC::LogicalToDeviceRel(const ::wxSharp::Size& dim) const
{
    auto &__arg0 = *(::wxSize*)dim.__Instance;
    ::wxSize __ret = ((::wxDC*)__Instance)->LogicalToDeviceRel(__arg0);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

::wxSharp::Size wxSharp::DC::LogicalToDeviceRel(int x, int y) const
{
    ::wxSize __ret = ((::wxDC*)__Instance)->LogicalToDeviceRel(x, y);
    auto ____ret = new ::wxSize(__ret);
    return ____ret;
}

void wxSharp::DC::SetMapMode(::wxSharp::MappingMode mode)
{
    auto __arg0 = (::wxMappingMode)mode;
    ((::wxDC*)__Instance)->SetMapMode(__arg0);
}

::wxSharp::MappingMode wxSharp::DC::GetMapMode() const
{
    ::wxMappingMode __ret = ((::wxDC*)__Instance)->GetMapMode();
    return (::wxSharp::MappingMode)__ret;
}

void wxSharp::DC::SetUserScale(double x, double y)
{
    ((::wxDC*)__Instance)->SetUserScale(x, y);
}

void wxSharp::DC::GetUserScale(double* x, double* y) const
{
    double* __arg0 = (double*)x;
    double* __arg1 = (double*)y;
    ((::wxDC*)__Instance)->GetUserScale(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

void wxSharp::DC::SetLogicalScale(double x, double y)
{
    ((::wxDC*)__Instance)->SetLogicalScale(x, y);
}

void wxSharp::DC::GetLogicalScale(double* x, double* y) const
{
    double* __arg0 = (double*)x;
    double* __arg1 = (double*)y;
    ((::wxDC*)__Instance)->GetLogicalScale(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

void wxSharp::DC::SetLogicalOrigin(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->SetLogicalOrigin(__arg0, __arg1);
}

void wxSharp::DC::GetLogicalOrigin(int* x, int* y) const
{
    int* __arg0 = (::wxCoord*)x;
    int* __arg1 = (::wxCoord*)y;
    ((::wxDC*)__Instance)->GetLogicalOrigin(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

::wxSharp::Point wxSharp::DC::GetLogicalOrigin() const
{
    ::wxPoint __ret = ((::wxDC*)__Instance)->GetLogicalOrigin();
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

void wxSharp::DC::SetDeviceOrigin(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->SetDeviceOrigin(__arg0, __arg1);
}

void wxSharp::DC::GetDeviceOrigin(int* x, int* y) const
{
    int* __arg0 = (::wxCoord*)x;
    int* __arg1 = (::wxCoord*)y;
    ((::wxDC*)__Instance)->GetDeviceOrigin(__arg0, __arg1);
    x = __arg0;
    y = __arg1;
}

::wxSharp::Point wxSharp::DC::GetDeviceOrigin() const
{
    ::wxPoint __ret = ((::wxDC*)__Instance)->GetDeviceOrigin();
    auto ____ret = new ::wxPoint(__ret);
    return ____ret;
}

void wxSharp::DC::SetAxisOrientation(bool xLeftRight, bool yBottomUp)
{
    ((::wxDC*)__Instance)->SetAxisOrientation(xLeftRight, yBottomUp);
}

bool wxSharp::DC::CanUseTransformMatrix() const
{
    bool __ret = ((::wxDC*)__Instance)->CanUseTransformMatrix();
    return __ret;
}

void wxSharp::DC::ResetTransformMatrix()
{
    ((::wxDC*)__Instance)->ResetTransformMatrix();
}

void wxSharp::DC::SetDeviceLocalOrigin(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->SetDeviceLocalOrigin(__arg0, __arg1);
}

bool wxSharp::DC::FloodFill(int x, int y, const ::wxSharp::Color& col, ::wxSharp::FloodFillStyle style)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto &__arg2 = *(::wxColour*)col.__Instance;
    auto __arg3 = (::wxFloodFillStyle)style;
    bool __ret = ((::wxDC*)__Instance)->FloodFill(__arg0, __arg1, __arg2, __arg3);
    return __ret;
}

bool wxSharp::DC::FloodFill(const ::wxSharp::Point& pt, const ::wxSharp::Color& col, ::wxSharp::FloodFillStyle style)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxColour*)col.__Instance;
    auto __arg2 = (::wxFloodFillStyle)style;
    bool __ret = ((::wxDC*)__Instance)->FloodFill(__arg0, __arg1, __arg2);
    return __ret;
}

void wxSharp::DC::GradientFillConcentric(const ::wxSharp::Rect& rect, const ::wxSharp::Color& initialColour, const ::wxSharp::Color& destColour)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    auto &__arg1 = *(::wxColour*)initialColour.__Instance;
    auto &__arg2 = *(::wxColour*)destColour.__Instance;
    ((::wxDC*)__Instance)->GradientFillConcentric(__arg0, __arg1, __arg2);
}

void wxSharp::DC::GradientFillConcentric(const ::wxSharp::Rect& rect, const ::wxSharp::Color& initialColour, const ::wxSharp::Color& destColour, const ::wxSharp::Point& circleCenter)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    auto &__arg1 = *(::wxColour*)initialColour.__Instance;
    auto &__arg2 = *(::wxColour*)destColour.__Instance;
    auto &__arg3 = *(::wxPoint*)circleCenter.__Instance;
    ((::wxDC*)__Instance)->GradientFillConcentric(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::GradientFillLinear(const ::wxSharp::Rect& rect, const ::wxSharp::Color& initialColour, const ::wxSharp::Color& destColour, ::wxSharp::Direction nDirection)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    auto &__arg1 = *(::wxColour*)initialColour.__Instance;
    auto &__arg2 = *(::wxColour*)destColour.__Instance;
    auto __arg3 = (::wxDirection)nDirection;
    ((::wxDC*)__Instance)->GradientFillLinear(__arg0, __arg1, __arg2, __arg3);
}

bool wxSharp::DC::GetPixel(int x, int y, ::wxSharp::Color* col) const
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = col ? (::wxColour*)col->__Instance : nullptr;
    bool __ret = ((::wxDC*)__Instance)->GetPixel(__arg0, __arg1, __arg2);
    return __ret;
}

bool wxSharp::DC::GetPixel(const ::wxSharp::Point& pt, ::wxSharp::Color* col) const
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto __arg1 = col ? (::wxColour*)col->__Instance : nullptr;
    bool __ret = ((::wxDC*)__Instance)->GetPixel(__arg0, __arg1);
    return __ret;
}

void wxSharp::DC::DrawLine(int x1, int y1, int x2, int y2)
{
    auto __arg0 = (::wxCoord)x1;
    auto __arg1 = (::wxCoord)y1;
    auto __arg2 = (::wxCoord)x2;
    auto __arg3 = (::wxCoord)y2;
    ((::wxDC*)__Instance)->DrawLine(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::DrawLine(const ::wxSharp::Point& pt1, const ::wxSharp::Point& pt2)
{
    auto &__arg0 = *(::wxPoint*)pt1.__Instance;
    auto &__arg1 = *(::wxPoint*)pt2.__Instance;
    ((::wxDC*)__Instance)->DrawLine(__arg0, __arg1);
}

void wxSharp::DC::CrossHair(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->CrossHair(__arg0, __arg1);
}

void wxSharp::DC::CrossHair(const ::wxSharp::Point& pt)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->CrossHair(__arg0);
}

void wxSharp::DC::DrawArc(int x1, int y1, int x2, int y2, int xc, int yc)
{
    auto __arg0 = (::wxCoord)x1;
    auto __arg1 = (::wxCoord)y1;
    auto __arg2 = (::wxCoord)x2;
    auto __arg3 = (::wxCoord)y2;
    auto __arg4 = (::wxCoord)xc;
    auto __arg5 = (::wxCoord)yc;
    ((::wxDC*)__Instance)->DrawArc(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5);
}

void wxSharp::DC::DrawArc(const ::wxSharp::Point& pt1, const ::wxSharp::Point& pt2, const ::wxSharp::Point& centre)
{
    auto &__arg0 = *(::wxPoint*)pt1.__Instance;
    auto &__arg1 = *(::wxPoint*)pt2.__Instance;
    auto &__arg2 = *(::wxPoint*)centre.__Instance;
    ((::wxDC*)__Instance)->DrawArc(__arg0, __arg1, __arg2);
}

void wxSharp::DC::DrawCheckMark(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawCheckMark(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::DrawCheckMark(const ::wxSharp::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawCheckMark(__arg0);
}

void wxSharp::DC::DrawEllipticArc(int x, int y, int w, int h, double sa, double ea)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)w;
    auto __arg3 = (::wxCoord)h;
    ((::wxDC*)__Instance)->DrawEllipticArc(__arg0, __arg1, __arg2, __arg3, sa, ea);
}

void wxSharp::DC::DrawEllipticArc(const ::wxSharp::Point& pt, const ::wxSharp::Size& sz, double sa, double ea)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawEllipticArc(__arg0, __arg1, sa, ea);
}

void wxSharp::DC::DrawPoint(int x, int y)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    ((::wxDC*)__Instance)->DrawPoint(__arg0, __arg1);
}

void wxSharp::DC::DrawPoint(const ::wxSharp::Point& pt)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->DrawPoint(__arg0);
}

void wxSharp::DC::DrawLines(int n, ::wxSharp::Point points[], int xoffset, int yoffset)
{
    auto __arg1 = nullptr;
    auto __arg2 = (::wxCoord)xoffset;
    auto __arg3 = (::wxCoord)yoffset;
    ((::wxDC*)__Instance)->DrawLines(n, __arg1, __arg2, __arg3);
}

void wxSharp::DC::DrawLines(const ::wxSharp::PointList* list, int xoffset, int yoffset)
{
    auto __arg0 = list ? (::wxPointList*)list->__Instance : nullptr;
    auto __arg1 = (::wxCoord)xoffset;
    auto __arg2 = (::wxCoord)yoffset;
    ((::wxDC*)__Instance)->DrawLines(__arg0, __arg1, __arg2);
}

void wxSharp::DC::DrawPolygon(int n, ::wxSharp::Point points[], int xoffset, int yoffset, ::wxSharp::PolygonFillMode fillStyle)
{
    auto __arg1 = nullptr;
    auto __arg2 = (::wxCoord)xoffset;
    auto __arg3 = (::wxCoord)yoffset;
    auto __arg4 = (::wxPolygonFillMode)fillStyle;
    ((::wxDC*)__Instance)->DrawPolygon(n, __arg1, __arg2, __arg3, __arg4);
}

void wxSharp::DC::DrawPolygon(const ::wxSharp::PointList* list, int xoffset, int yoffset, ::wxSharp::PolygonFillMode fillStyle)
{
    auto __arg0 = list ? (::wxPointList*)list->__Instance : nullptr;
    auto __arg1 = (::wxCoord)xoffset;
    auto __arg2 = (::wxCoord)yoffset;
    auto __arg3 = (::wxPolygonFillMode)fillStyle;
    ((::wxDC*)__Instance)->DrawPolygon(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::DrawPolyPolygon(int n, int count[], ::wxSharp::Point points[], int xoffset, int yoffset, ::wxSharp::PolygonFillMode fillStyle)
{
    auto __arg1 = nullptr;
    auto __arg2 = nullptr;
    auto __arg3 = (::wxCoord)xoffset;
    auto __arg4 = (::wxCoord)yoffset;
    auto __arg5 = (::wxPolygonFillMode)fillStyle;
    ((::wxDC*)__Instance)->DrawPolyPolygon(n, __arg1, __arg2, __arg3, __arg4, __arg5);
}

void wxSharp::DC::DrawRectangle(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawRectangle(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::DrawRectangle(const ::wxSharp::Point& pt, const ::wxSharp::Size& sz)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawRectangle(__arg0, __arg1);
}

void wxSharp::DC::DrawRectangle(const ::wxSharp::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawRectangle(__arg0);
}

void wxSharp::DC::DrawRoundedRectangle(int x, int y, int width, int height, double radius)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawRoundedRectangle(__arg0, __arg1, __arg2, __arg3, radius);
}

void wxSharp::DC::DrawRoundedRectangle(const ::wxSharp::Point& pt, const ::wxSharp::Size& sz, double radius)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawRoundedRectangle(__arg0, __arg1, radius);
}

void wxSharp::DC::DrawRoundedRectangle(const ::wxSharp::Rect& r, double radius)
{
    auto &__arg0 = *(::wxRect*)r.__Instance;
    ((::wxDC*)__Instance)->DrawRoundedRectangle(__arg0, radius);
}

void wxSharp::DC::DrawCircle(int x, int y, int radius)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)radius;
    ((::wxDC*)__Instance)->DrawCircle(__arg0, __arg1, __arg2);
}

void wxSharp::DC::DrawCircle(const ::wxSharp::Point& pt, int radius)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto __arg1 = (::wxCoord)radius;
    ((::wxDC*)__Instance)->DrawCircle(__arg0, __arg1);
}

void wxSharp::DC::DrawEllipse(int x, int y, int width, int height)
{
    auto __arg0 = (::wxCoord)x;
    auto __arg1 = (::wxCoord)y;
    auto __arg2 = (::wxCoord)width;
    auto __arg3 = (::wxCoord)height;
    ((::wxDC*)__Instance)->DrawEllipse(__arg0, __arg1, __arg2, __arg3);
}

void wxSharp::DC::DrawEllipse(const ::wxSharp::Point& pt, const ::wxSharp::Size& sz)
{
    auto &__arg0 = *(::wxPoint*)pt.__Instance;
    auto &__arg1 = *(::wxSize*)sz.__Instance;
    ((::wxDC*)__Instance)->DrawEllipse(__arg0, __arg1);
}

void wxSharp::DC::DrawEllipse(const ::wxSharp::Rect& rect)
{
    auto &__arg0 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawEllipse(__arg0);
}

void wxSharp::DC::DrawText(const char* text, int x, int y)
{
    auto __arg0 = text;
    auto __arg1 = (::wxCoord)x;
    auto __arg2 = (::wxCoord)y;
    ((::wxDC*)__Instance)->DrawText(__arg0, __arg1, __arg2);
}

void wxSharp::DC::DrawText(const char* text, const ::wxSharp::Point& pt)
{
    auto __arg0 = text;
    auto &__arg1 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->DrawText(__arg0, __arg1);
}

void wxSharp::DC::DrawRotatedText(const char* text, int x, int y, double angle)
{
    auto __arg0 = text;
    auto __arg1 = (::wxCoord)x;
    auto __arg2 = (::wxCoord)y;
    ((::wxDC*)__Instance)->DrawRotatedText(__arg0, __arg1, __arg2, angle);
}

void wxSharp::DC::DrawRotatedText(const char* text, const ::wxSharp::Point& pt, double angle)
{
    auto __arg0 = text;
    auto &__arg1 = *(::wxPoint*)pt.__Instance;
    ((::wxDC*)__Instance)->DrawRotatedText(__arg0, __arg1, angle);
}

void wxSharp::DC::DrawLabel(const char* text, const ::wxSharp::Rect& rect, int alignment, int indexAccel)
{
    auto __arg0 = text;
    auto &__arg1 = *(::wxRect*)rect.__Instance;
    ((::wxDC*)__Instance)->DrawLabel(__arg0, __arg1, alignment, indexAccel);
}

bool wxSharp::DC::Blit(int xdest, int ydest, int width, int height, ::wxSharp::DC* source, int xsrc, int ysrc, ::wxSharp::RasterOperationMode rop, bool useMask, int xsrcMask, int ysrcMask)
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

bool wxSharp::DC::Blit(const ::wxSharp::Point& destPt, const ::wxSharp::Size& sz, ::wxSharp::DC* source, const ::wxSharp::Point& srcPt, ::wxSharp::RasterOperationMode rop, bool useMask, const ::wxSharp::Point& srcPtMask)
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

bool wxSharp::DC::StretchBlit(int dstX, int dstY, int dstWidth, int dstHeight, ::wxSharp::DC* source, int srcX, int srcY, int srcWidth, int srcHeight, ::wxSharp::RasterOperationMode rop, bool useMask, int srcMaskX, int srcMaskY)
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

bool wxSharp::DC::StretchBlit(const ::wxSharp::Point& dstPt, const ::wxSharp::Size& dstSize, ::wxSharp::DC* source, const ::wxSharp::Point& srcPt, const ::wxSharp::Size& srcSize, ::wxSharp::RasterOperationMode rop, bool useMask, const ::wxSharp::Point& srcMaskPt)
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

void wxSharp::DC::DrawSpline(int x1, int y1, int x2, int y2, int x3, int y3)
{
    auto __arg0 = (::wxCoord)x1;
    auto __arg1 = (::wxCoord)y1;
    auto __arg2 = (::wxCoord)x2;
    auto __arg3 = (::wxCoord)y2;
    auto __arg4 = (::wxCoord)x3;
    auto __arg5 = (::wxCoord)y3;
    ((::wxDC*)__Instance)->DrawSpline(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5);
}

void wxSharp::DC::DrawSpline(int n, ::wxSharp::Point points[])
{
    auto __arg1 = nullptr;
    ((::wxDC*)__Instance)->DrawSpline(n, __arg1);
}

void wxSharp::DC::DrawSpline(const ::wxSharp::PointList* points)
{
    auto __arg0 = points ? (::wxPointList*)points->__Instance : nullptr;
    ((::wxDC*)__Instance)->DrawSpline(__arg0);
}

::wxSharp::GraphicsContext* wxSharp::DC::GetGraphicsContext() const
{
    ::wxGraphicsContext* __ret = ((::wxDC*)__Instance)->GetGraphicsContext();
    return (__ret == nullptr) ? nullptr : new wxSharp::GraphicsContext((::wxGraphicsContext*)__ret);
}

void wxSharp::DC::SetGraphicsContext(::wxSharp::GraphicsContext* ctx)
{
    auto __arg0 = ctx ? (::wxGraphicsContext*)ctx->__Instance : nullptr;
    ((::wxDC*)__Instance)->SetGraphicsContext(__arg0);
}

