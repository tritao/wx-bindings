// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/gdicmn.h>

namespace wxSharp
{
    class Brush;
    class Color;
    class ColourDatabase;
    class GDIObjListBase;
    class Object;
    class Pen;
    class Point;
    class PointList;
    class RealPoint;
    class Rect;
    class ResourceCache;
    class Size;
    class StockGDI;
    class wxPointListNode;
    enum class BitmapType : unsigned int;
    enum class EllipsizeFlags : unsigned int;
    enum class EllipsizeMode : unsigned int;
    enum class KeyType : unsigned int;
    enum class PolygonFillMode : unsigned int;
    enum class StockCursor : unsigned int;
}

namespace wxSharp
{
    enum class BitmapType : unsigned int
    {
        INVALID = 0,
        BMP = 1,
        BMP_RESOURCE = 2,
        RESOURCE = 2,
        ICO = 3,
        ICO_RESOURCE = 4,
        CUR = 5,
        CUR_RESOURCE = 6,
        XBM = 7,
        XBM_DATA = 8,
        XPM = 9,
        XPM_DATA = 10,
        TIFF = 11,
        TIF = 11,
        TIFF_RESOURCE = 12,
        TIF_RESOURCE = 12,
        GIF = 13,
        GIF_RESOURCE = 14,
        PNG = 15,
        PNG_RESOURCE = 16,
        JPEG = 17,
        JPEG_RESOURCE = 18,
        PNM = 19,
        PNM_RESOURCE = 20,
        PCX = 21,
        PCX_RESOURCE = 22,
        PICT = 23,
        PICT_RESOURCE = 24,
        ICON = 25,
        ICON_RESOURCE = 26,
        ANI = 27,
        IFF = 28,
        TGA = 29,
        MACCURSOR = 30,
        MACCURSOR_RESOURCE = 31,
        MAX = 32,
        ANY = 50
    };

    enum class StockCursor : unsigned int
    {
        NONE = 0,
        ARROW = 1,
        RIGHT_ARROW = 2,
        BULLSEYE = 3,
        CHAR = 4,
        CROSS = 5,
        HAND = 6,
        IBEAM = 7,
        LEFT_BUTTON = 8,
        MAGNIFIER = 9,
        MIDDLE_BUTTON = 10,
        NO_ENTRY = 11,
        PAINT_BRUSH = 12,
        PENCIL = 13,
        POINT_LEFT = 14,
        POINT_RIGHT = 15,
        QUESTION_ARROW = 16,
        RIGHT_BUTTON = 17,
        SIZENESW = 18,
        SIZENS = 19,
        SIZENWSE = 20,
        SIZEWE = 21,
        SIZING = 22,
        SPRAYCAN = 23,
        WAIT = 24,
        WATCH = 25,
        BLANK = 26,
        DEFAULT = 27,
        ARROWWAIT = 28,
        MAX = 29
    };

    enum class PolygonFillMode : unsigned int
    {
        ODDEVEN_RULE = 1,
        WINDING_RULE = 2
    };

    enum class EllipsizeFlags : unsigned int
    {
        NONE = 0,
        PROCESS_MNEMONICS = 1,
        EXPAND_TABS = 2,
        DEFAULT = 3
    };

    enum class EllipsizeMode : unsigned int
    {
        NONE = 0,
        START = 1,
        MIDDLE = 2,
        END = 3
    };

    class Size
    {
    public:

        ::wxSize* __Instance;

        Size(::wxSize* instance);

        Size();

        Size(int xx, int yy);

        Size(const ::wxSharp::Size& _0);

        ~Size();

        void IncTo(const ::wxSharp::Size& sz);

        void DecTo(const ::wxSharp::Size& sz);

        void DecToIfSpecified(const ::wxSharp::Size& sz);

        void IncBy(int dx, int dy);

        void IncBy(const ::wxSharp::Point& pt);

        void IncBy(const ::wxSharp::Size& sz);

        void IncBy(int d);

        void DecBy(int dx, int dy);

        void DecBy(const ::wxSharp::Point& pt);

        void DecBy(const ::wxSharp::Size& sz);

        void DecBy(int d);

        void Set(int xx, int yy);

        void SetWidth(int w);

        void SetHeight(int h);

        int GetWidth() const;

        int GetHeight() const;

        bool IsFullySpecified() const;

        void SetDefaults(const ::wxSharp::Size& size);

        int GetX() const;

        int GetY() const;

        int get_x();

        void set_x(int value);

        int get_y();

        void set_y(int value);

    protected:
        bool __ownsNativeInstance;
    };

    class RealPoint
    {
    public:

        ::wxRealPoint* __Instance;

        RealPoint(::wxRealPoint* instance);

        RealPoint();

        RealPoint(double xx, double yy);

        RealPoint(const ::wxSharp::Point& pt);

        RealPoint(const ::wxSharp::RealPoint& _0);

        ~RealPoint();

        double get_x();

        void set_x(double value);

        double get_y();

        void set_y(double value);

    protected:
        bool __ownsNativeInstance;
    };

    class Point
    {
    public:

        ::wxPoint* __Instance;

        Point(::wxPoint* instance);

        Point();

        Point(int xx, int yy);

        Point(const ::wxSharp::RealPoint& pt);

        Point(const ::wxSharp::Point& _0);

        ~Point();

        bool IsFullySpecified() const;

        void SetDefaults(const ::wxSharp::Point& pt);

        int get_x();

        void set_x(int value);

        int get_y();

        void set_y(int value);

    protected:
        bool __ownsNativeInstance;
    };

    class wxPointListNode
    {
    public:

        ::wxwxPointListNode* __Instance;

        wxPointListNode(::wxwxPointListNode* instance);

        ~wxPointListNode();

        ::wxSharp::wxPointListNode* GetNext() const;

        ::wxSharp::wxPointListNode* GetPrevious() const;

        ::wxSharp::Point* GetData() const;

        void SetData(::wxSharp::Point* data);

    protected:
        bool __ownsNativeInstance;
    };

    class PointList
    {
    public:

        ::wxPointList* __Instance;

        PointList(::wxPointList* instance);

        PointList(::wxSharp::KeyType keyType);

        PointList(const ::wxSharp::PointList& list);

        explicit PointList(unsigned long n, ::wxSharp::Point*const & v);

        ~PointList();

        ::wxSharp::wxPointListNode* GetFirst() const;

        ::wxSharp::wxPointListNode* GetLast() const;

        ::wxSharp::wxPointListNode* Item(unsigned long index) const;

        ::wxSharp::Point* operator[](unsigned long index) const;

        ::wxSharp::wxPointListNode* Append(::wxSharp::Point* object);

        ::wxSharp::wxPointListNode* Insert(::wxSharp::Point* object);

        ::wxSharp::wxPointListNode* Insert(unsigned long pos, ::wxSharp::Point* object);

        ::wxSharp::wxPointListNode* Insert(::wxSharp::wxPointListNode* prev, ::wxSharp::Point* object);

        ::wxSharp::wxPointListNode* Append(long key, void* object);

        ::wxSharp::wxPointListNode* Append(wchar_t* key, void* object);

        ::wxSharp::wxPointListNode* DetachNode(::wxSharp::wxPointListNode* node);

        bool DeleteNode(::wxSharp::wxPointListNode* node);

        bool DeleteObject(::wxSharp::Point* object);

        void Erase(::wxSharp::wxPointListNode* it);

        ::wxSharp::wxPointListNode* Find(const ::wxSharp::Point* object) const;

        bool Member(const ::wxSharp::Point* object) const;

        int IndexOf(::wxSharp::Point* object) const;

        void resize(unsigned long n, ::wxSharp::Point* v);

        unsigned long size() const;

        unsigned long max_size() const;

        bool empty() const;

        void push_front(::wxSharp::Point*const & v);

        void pop_front();

        void push_back(::wxSharp::Point*const & v);

        void pop_back();

        void assign(unsigned long n, ::wxSharp::Point*const & v);

        void clear();

        void remove(::wxSharp::Point*const & v);

        void reverse();

    protected:
        bool __ownsNativeInstance;
    };

    class Rect
    {
    public:

        ::wxRect* __Instance;

        Rect(::wxRect* instance);

        Rect();

        Rect(int xx, int yy, int ww, int hh);

        Rect(const ::wxSharp::Point& topLeft, const ::wxSharp::Point& bottomRight);

        Rect(const ::wxSharp::Point& pt, const ::wxSharp::Size& size);

        Rect(const ::wxSharp::Size& size);

        Rect(const ::wxSharp::Rect& _0);

        ~Rect();

        int GetX() const;

        void SetX(int xx);

        int GetY() const;

        void SetY(int yy);

        int GetWidth() const;

        void SetWidth(int w);

        int GetHeight() const;

        void SetHeight(int h);

        ::wxSharp::Point GetPosition() const;

        void SetPosition(const ::wxSharp::Point& p);

        ::wxSharp::Size GetSize() const;

        void SetSize(const ::wxSharp::Size& s);

        bool IsEmpty() const;

        int GetLeft() const;

        int GetTop() const;

        int GetBottom() const;

        int GetRight() const;

        void SetLeft(int left);

        void SetRight(int right);

        void SetTop(int top);

        void SetBottom(int bottom);

        ::wxSharp::Point GetTopLeft() const;

        ::wxSharp::Point GetLeftTop() const;

        void SetTopLeft(const ::wxSharp::Point& p);

        void SetLeftTop(const ::wxSharp::Point& p);

        ::wxSharp::Point GetBottomRight() const;

        ::wxSharp::Point GetRightBottom() const;

        void SetBottomRight(const ::wxSharp::Point& p);

        void SetRightBottom(const ::wxSharp::Point& p);

        ::wxSharp::Point GetTopRight() const;

        ::wxSharp::Point GetRightTop() const;

        void SetTopRight(const ::wxSharp::Point& p);

        void SetRightTop(const ::wxSharp::Point& p);

        ::wxSharp::Point GetBottomLeft() const;

        ::wxSharp::Point GetLeftBottom() const;

        void SetBottomLeft(const ::wxSharp::Point& p);

        void SetLeftBottom(const ::wxSharp::Point& p);

        ::wxSharp::Rect Inflate(int dx, int dy) const;

        ::wxSharp::Rect Deflate(int dx, int dy) const;

        void Offset(int dx, int dy);

        void Offset(const ::wxSharp::Point& pt);

        ::wxSharp::Rect Intersect(const ::wxSharp::Rect& rect) const;

        ::wxSharp::Rect Union(const ::wxSharp::Rect& rect) const;

        bool Contains(int x, int y) const;

        bool Contains(const ::wxSharp::Point& pt) const;

        bool Contains(const ::wxSharp::Rect& rect) const;

        bool Intersects(const ::wxSharp::Rect& rect) const;

        ::wxSharp::Rect CentreIn(const ::wxSharp::Rect& r, int dir) const;

        ::wxSharp::Rect CenterIn(const ::wxSharp::Rect& r, int dir) const;

        int get_x();

        void set_x(int value);

        int get_y();

        void set_y(int value);

        int get_width();

        void set_width(int value);

        int get_height();

        void set_height(int value);

    protected:
        bool __ownsNativeInstance;
    };

    class GDIObjListBase
    {
    public:

        ::wxGDIObjListBase* __Instance;

        GDIObjListBase(::wxGDIObjListBase* instance);

        GDIObjListBase();

        GDIObjListBase(const ::wxSharp::GDIObjListBase& _0);

        ~GDIObjListBase();

    protected:
        bool __ownsNativeInstance;
    };

    class ColourDatabase
    {
    public:

        ::wxColourDatabase* __Instance;

        ColourDatabase(::wxColourDatabase* instance);

        ColourDatabase();

        ColourDatabase(const ::wxSharp::ColourDatabase& _0);

        ~ColourDatabase();

        ::wxSharp::Color Find(const char* name) const;

        const char* FindName(const ::wxSharp::Color& colour) const;

        void AddColour(const char* name, const ::wxSharp::Color& colour);

    protected:
        bool __ownsNativeInstance;
    };

    class ResourceCache
    {
    public:

        ::wxResourceCache* __Instance;

        ResourceCache(::wxResourceCache* instance);

        ResourceCache();

        ResourceCache(unsigned int keyType);

        ResourceCache(const ::wxSharp::ResourceCache& _0);

        ~ResourceCache();

    protected:
        bool __ownsNativeInstance;
    };

    class StockGDI
    {
    public:

        enum class Item : unsigned int
        {
            BRUSH_BLACK = 0,
            BRUSH_BLUE = 1,
            BRUSH_CYAN = 2,
            BRUSH_GREEN = 3,
            BRUSH_YELLOW = 4,
            BRUSH_GREY = 5,
            BRUSH_LIGHTGREY = 6,
            BRUSH_MEDIUMGREY = 7,
            BRUSH_RED = 8,
            BRUSH_TRANSPARENT = 9,
            BRUSH_WHITE = 10,
            COLOUR_BLACK = 11,
            COLOUR_BLUE = 12,
            COLOUR_CYAN = 13,
            COLOUR_GREEN = 14,
            COLOUR_YELLOW = 15,
            COLOUR_LIGHTGREY = 16,
            COLOUR_RED = 17,
            COLOUR_WHITE = 18,
            CURSOR_CROSS = 19,
            CURSOR_HOURGLASS = 20,
            CURSOR_STANDARD = 21,
            FONT_ITALIC = 22,
            FONT_NORMAL = 23,
            FONT_SMALL = 24,
            FONT_SWISS = 25,
            PEN_BLACK = 26,
            PEN_BLACKDASHED = 27,
            PEN_BLUE = 28,
            PEN_CYAN = 29,
            PEN_GREEN = 30,
            PEN_YELLOW = 31,
            PEN_GREY = 32,
            PEN_LIGHTGREY = 33,
            PEN_MEDIUMGREY = 34,
            PEN_RED = 35,
            PEN_TRANSPARENT = 36,
            PEN_WHITE = 37,
            ITEMCOUNT = 38
        };

        ::wxStockGDI* __Instance;

        StockGDI(::wxStockGDI* instance);

        StockGDI();

        ~StockGDI();

        static void DeleteAll();

        static const ::wxSharp::Brush* GetBrush(::wxSharp::StockGDI::Item item);

        static const ::wxSharp::Color* GetColour(::wxSharp::StockGDI::Item item);

        static const ::wxSharp::Pen* GetPen(::wxSharp::StockGDI::Item item);

    protected:
        bool __ownsNativeInstance;
    };

    bool operator==(const ::wxSharp::Size& s1, const ::wxSharp::Size& s2);
    bool operator!=(const ::wxSharp::Size& s1, const ::wxSharp::Size& s2);
    ::wxSharp::Size operator+(const ::wxSharp::Size& s1, const ::wxSharp::Size& s2);
    ::wxSharp::Size operator-(const ::wxSharp::Size& s1, const ::wxSharp::Size& s2);
    ::wxSharp::Size operator/(const ::wxSharp::Size& s, int i);
    ::wxSharp::Size operator*(const ::wxSharp::Size& s, int i);
    ::wxSharp::Size operator*(int i, const ::wxSharp::Size& s);
    ::wxSharp::Size operator/(const ::wxSharp::Size& s, unsigned int i);
    ::wxSharp::Size operator*(const ::wxSharp::Size& s, unsigned int i);
    ::wxSharp::Size operator*(unsigned int i, const ::wxSharp::Size& s);
    ::wxSharp::Size operator/(const ::wxSharp::Size& s, long i);
    ::wxSharp::Size operator*(const ::wxSharp::Size& s, long i);
    ::wxSharp::Size operator*(long i, const ::wxSharp::Size& s);
    ::wxSharp::Size operator/(const ::wxSharp::Size& s, unsigned long i);
    ::wxSharp::Size operator*(const ::wxSharp::Size& s, unsigned long i);
    ::wxSharp::Size operator*(unsigned long i, const ::wxSharp::Size& s);
    ::wxSharp::Size operator*(const ::wxSharp::Size& s, double i);
    ::wxSharp::Size operator*(double i, const ::wxSharp::Size& s);
    bool operator==(const ::wxSharp::RealPoint& p1, const ::wxSharp::RealPoint& p2);
    bool operator!=(const ::wxSharp::RealPoint& p1, const ::wxSharp::RealPoint& p2);
    ::wxSharp::RealPoint operator+(const ::wxSharp::RealPoint& p1, const ::wxSharp::RealPoint& p2);
    ::wxSharp::RealPoint operator-(const ::wxSharp::RealPoint& p1, const ::wxSharp::RealPoint& p2);
    ::wxSharp::RealPoint operator/(const ::wxSharp::RealPoint& s, int i);
    ::wxSharp::RealPoint operator*(const ::wxSharp::RealPoint& s, int i);
    ::wxSharp::RealPoint operator*(int i, const ::wxSharp::RealPoint& s);
    ::wxSharp::RealPoint operator/(const ::wxSharp::RealPoint& s, unsigned int i);
    ::wxSharp::RealPoint operator*(const ::wxSharp::RealPoint& s, unsigned int i);
    ::wxSharp::RealPoint operator*(unsigned int i, const ::wxSharp::RealPoint& s);
    ::wxSharp::RealPoint operator/(const ::wxSharp::RealPoint& s, long i);
    ::wxSharp::RealPoint operator*(const ::wxSharp::RealPoint& s, long i);
    ::wxSharp::RealPoint operator*(long i, const ::wxSharp::RealPoint& s);
    ::wxSharp::RealPoint operator/(const ::wxSharp::RealPoint& s, unsigned long i);
    ::wxSharp::RealPoint operator*(const ::wxSharp::RealPoint& s, unsigned long i);
    ::wxSharp::RealPoint operator*(unsigned long i, const ::wxSharp::RealPoint& s);
    ::wxSharp::RealPoint operator*(const ::wxSharp::RealPoint& s, double i);
    ::wxSharp::RealPoint operator*(double i, const ::wxSharp::RealPoint& s);
    bool operator==(const ::wxSharp::Point& p1, const ::wxSharp::Point& p2);
    bool operator!=(const ::wxSharp::Point& p1, const ::wxSharp::Point& p2);
    ::wxSharp::Point operator+(const ::wxSharp::Point& p1, const ::wxSharp::Point& p2);
    ::wxSharp::Point operator-(const ::wxSharp::Point& p1, const ::wxSharp::Point& p2);
    ::wxSharp::Point operator+(const ::wxSharp::Point& p, const ::wxSharp::Size& s);
    ::wxSharp::Point operator-(const ::wxSharp::Point& p, const ::wxSharp::Size& s);
    ::wxSharp::Point operator+(const ::wxSharp::Size& s, const ::wxSharp::Point& p);
    ::wxSharp::Point operator-(const ::wxSharp::Size& s, const ::wxSharp::Point& p);
    ::wxSharp::Point operator-(const ::wxSharp::Point& p);
    ::wxSharp::Point operator/(const ::wxSharp::Point& s, int i);
    ::wxSharp::Point operator*(const ::wxSharp::Point& s, int i);
    ::wxSharp::Point operator*(int i, const ::wxSharp::Point& s);
    ::wxSharp::Point operator/(const ::wxSharp::Point& s, unsigned int i);
    ::wxSharp::Point operator*(const ::wxSharp::Point& s, unsigned int i);
    ::wxSharp::Point operator*(unsigned int i, const ::wxSharp::Point& s);
    ::wxSharp::Point operator/(const ::wxSharp::Point& s, long i);
    ::wxSharp::Point operator*(const ::wxSharp::Point& s, long i);
    ::wxSharp::Point operator*(long i, const ::wxSharp::Point& s);
    ::wxSharp::Point operator/(const ::wxSharp::Point& s, unsigned long i);
    ::wxSharp::Point operator*(const ::wxSharp::Point& s, unsigned long i);
    ::wxSharp::Point operator*(unsigned long i, const ::wxSharp::Point& s);
    ::wxSharp::Point operator*(const ::wxSharp::Point& s, double i);
    ::wxSharp::Point operator*(double i, const ::wxSharp::Point& s);
    bool operator==(const ::wxSharp::Rect& r1, const ::wxSharp::Rect& r2);
    bool operator!=(const ::wxSharp::Rect& r1, const ::wxSharp::Rect& r2);
    ::wxSharp::Rect operator+(const ::wxSharp::Rect& r1, const ::wxSharp::Rect& r2);
    ::wxSharp::Rect operator*(const ::wxSharp::Rect& r1, const ::wxSharp::Rect& r2);
    void InitializeStockLists();
    void DeleteStockLists();
    bool ColourDisplay();
    int DisplayDepth();
    void DisplaySize(int* width, int* height);
    ::wxSharp::Size GetDisplaySize();
    void DisplaySizeMM(int* width, int* height);
    ::wxSharp::Size GetDisplaySizeMM();
    ::wxSharp::Size GetDisplayPPI();
    void ClientDisplayRect(int* x, int* y, int* width, int* height);
    ::wxSharp::Rect GetClientDisplayRect();
}
