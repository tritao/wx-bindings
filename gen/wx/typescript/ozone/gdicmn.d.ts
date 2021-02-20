// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
import * as Ozone from "Ozone";
declare module "Ozone"
{
    namespace Ozone
    {
        enum BitmapType
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
        }

        enum EllipsizeFlags
        {
            NONE = 0,
            PROCESS_MNEMONICS = 1,
            EXPAND_TABS = 2,
            DEFAULT = 3
        }

        enum EllipsizeMode
        {
            NONE = 0,
            START = 1,
            MIDDLE = 2,
            END = 3
        }

        enum KeyType
        {
        }

        enum PolygonFillMode
        {
            ODDEVEN_RULE = 1,
            WINDING_RULE = 2
        }

        enum StockCursor
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
        }

        class Size
        {

            constructor();

            constructor(xx: number, yy: number);

            constructor(_0: Ozone.Size);

            IncTo(sz: Ozone.Size): void;

            DecTo(sz: Ozone.Size): void;

            DecToIfSpecified(sz: Ozone.Size): void;

            IncBy(dx: number, dy: number): void;

            IncBy(pt: Ozone.Point): void;

            IncBy(sz: Ozone.Size): void;

            IncBy(d: number): void;

            DecBy(dx: number, dy: number): void;

            DecBy(pt: Ozone.Point): void;

            DecBy(sz: Ozone.Size): void;

            DecBy(d: number): void;

            Set(xx: number, yy: number): void;

            SetWidth(w: number): void;

            SetHeight(h: number): void;

            GetWidth(): number;

            GetHeight(): number;

            IsFullySpecified(): boolean;

            SetDefaults(size: Ozone.Size): void;

            GetX(): number;

            GetY(): number;

            get_x(): number;

            set_x(value: number): void;

            get_y(): number;

            set_y(value: number): void;
        }

        class RealPoint
        {

            constructor();

            constructor(xx: number, yy: number);

            constructor(pt: Ozone.Point);

            constructor(_0: Ozone.RealPoint);

            get_x(): number;

            set_x(value: number): void;

            get_y(): number;

            set_y(value: number): void;
        }

        class Point
        {

            constructor();

            constructor(xx: number, yy: number);

            constructor(pt: Ozone.RealPoint);

            constructor(_0: Ozone.Point);

            IsFullySpecified(): boolean;

            SetDefaults(pt: Ozone.Point): void;

            get_x(): number;

            set_x(value: number): void;

            get_y(): number;

            set_y(value: number): void;
        }

        class wxPointListNode
        {

            constructor(_0: Ozone.wxPointListNode);

            GetNext(): Ozone.wxPointListNode;

            GetPrevious(): Ozone.wxPointListNode;

            GetData(): Ozone.Point;

            SetData(data: Ozone.Point): void;
        }

        class Rect
        {

            constructor();

            constructor(xx: number, yy: number, ww: number, hh: number);

            constructor(topLeft: Ozone.Point, bottomRight: Ozone.Point);

            constructor(pt: Ozone.Point, size: Ozone.Size);

            constructor(size: Ozone.Size);

            constructor(_0: Ozone.Rect);

            GetX(): number;

            SetX(xx: number): void;

            GetY(): number;

            SetY(yy: number): void;

            GetWidth(): number;

            SetWidth(w: number): void;

            GetHeight(): number;

            SetHeight(h: number): void;

            GetPosition(): Ozone.Point;

            SetPosition(p: Ozone.Point): void;

            GetSize(): Ozone.Size;

            SetSize(s: Ozone.Size): void;

            IsEmpty(): boolean;

            GetLeft(): number;

            GetTop(): number;

            GetBottom(): number;

            GetRight(): number;

            SetLeft(left: number): void;

            SetRight(right: number): void;

            SetTop(top: number): void;

            SetBottom(bottom: number): void;

            GetTopLeft(): Ozone.Point;

            GetLeftTop(): Ozone.Point;

            SetTopLeft(p: Ozone.Point): void;

            SetLeftTop(p: Ozone.Point): void;

            GetBottomRight(): Ozone.Point;

            GetRightBottom(): Ozone.Point;

            SetBottomRight(p: Ozone.Point): void;

            SetRightBottom(p: Ozone.Point): void;

            GetTopRight(): Ozone.Point;

            GetRightTop(): Ozone.Point;

            SetTopRight(p: Ozone.Point): void;

            SetRightTop(p: Ozone.Point): void;

            GetBottomLeft(): Ozone.Point;

            GetLeftBottom(): Ozone.Point;

            SetBottomLeft(p: Ozone.Point): void;

            SetLeftBottom(p: Ozone.Point): void;

            Inflate(dx: number, dy: number): Ozone.Rect;

            Deflate(dx: number, dy: number): Ozone.Rect;

            Offset(dx: number, dy: number): void;

            Offset(pt: Ozone.Point): void;

            Intersect(rect: Ozone.Rect): Ozone.Rect;

            Union(rect: Ozone.Rect): Ozone.Rect;

            Contains(x: number, y: number): boolean;

            Contains(pt: Ozone.Point): boolean;

            Contains(rect: Ozone.Rect): boolean;

            Intersects(rect: Ozone.Rect): boolean;

            CentreIn(r: Ozone.Rect, dir: number): Ozone.Rect;

            CenterIn(r: Ozone.Rect, dir: number): Ozone.Rect;

            get_x(): number;

            set_x(value: number): void;

            get_y(): number;

            set_y(value: number): void;

            get_width(): number;

            set_width(value: number): void;

            get_height(): number;

            set_height(value: number): void;
        }

        class GDIObjListBase
        {

            constructor();

            constructor(_0: Ozone.GDIObjListBase);
        }

        class ColourDatabase
        {

            constructor();

            constructor(_0: Ozone.ColourDatabase);

            Find(name: string): Ozone.Color;

            FindName(colour: Ozone.Color): string;

            AddColour(name: string, colour: Ozone.Color): void;
        }

        class ResourceCache
        {

            constructor();

            constructor(keyType: number);

            constructor(_0: Ozone.ResourceCache);
        }

        class StockGDI
        {

            enum Item
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
            }

            constructor();

            constructor(_0: Ozone.StockGDI);

            DeleteAll(): void;

            GetBrush(item: Ozone.StockGDI.Item): Ozone.Brush;

            GetColour(item: Ozone.StockGDI.Item): Ozone.Color;

            GetPen(item: Ozone.StockGDI.Item): Ozone.Pen;
        }

        export function operator==(s1: Ozone.Size, s2: Ozone.Size): boolean;
        export function operator!=(s1: Ozone.Size, s2: Ozone.Size): boolean;
        export function operator+(s1: Ozone.Size, s2: Ozone.Size): Ozone.Size;
        export function operator-(s1: Ozone.Size, s2: Ozone.Size): Ozone.Size;
        export function operator/(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(i: number, s: Ozone.Size): Ozone.Size;
        export function operator/(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(i: number, s: Ozone.Size): Ozone.Size;
        export function operator/(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(i: number, s: Ozone.Size): Ozone.Size;
        export function operator/(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(i: number, s: Ozone.Size): Ozone.Size;
        export function operator*(s: Ozone.Size, i: number): Ozone.Size;
        export function operator*(i: number, s: Ozone.Size): Ozone.Size;
        export function operator==(p1: Ozone.RealPoint, p2: Ozone.RealPoint): boolean;
        export function operator!=(p1: Ozone.RealPoint, p2: Ozone.RealPoint): boolean;
        export function operator+(p1: Ozone.RealPoint, p2: Ozone.RealPoint): Ozone.RealPoint;
        export function operator-(p1: Ozone.RealPoint, p2: Ozone.RealPoint): Ozone.RealPoint;
        export function operator/(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(i: number, s: Ozone.RealPoint): Ozone.RealPoint;
        export function operator/(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(i: number, s: Ozone.RealPoint): Ozone.RealPoint;
        export function operator/(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(i: number, s: Ozone.RealPoint): Ozone.RealPoint;
        export function operator/(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(i: number, s: Ozone.RealPoint): Ozone.RealPoint;
        export function operator*(s: Ozone.RealPoint, i: number): Ozone.RealPoint;
        export function operator*(i: number, s: Ozone.RealPoint): Ozone.RealPoint;
        export function operator==(p1: Ozone.Point, p2: Ozone.Point): boolean;
        export function operator!=(p1: Ozone.Point, p2: Ozone.Point): boolean;
        export function operator+(p1: Ozone.Point, p2: Ozone.Point): Ozone.Point;
        export function operator-(p1: Ozone.Point, p2: Ozone.Point): Ozone.Point;
        export function operator+(p: Ozone.Point, s: Ozone.Size): Ozone.Point;
        export function operator-(p: Ozone.Point, s: Ozone.Size): Ozone.Point;
        export function operator+(s: Ozone.Size, p: Ozone.Point): Ozone.Point;
        export function operator-(s: Ozone.Size, p: Ozone.Point): Ozone.Point;
        export function operator-(p: Ozone.Point): Ozone.Point;
        export function operator/(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(i: number, s: Ozone.Point): Ozone.Point;
        export function operator/(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(i: number, s: Ozone.Point): Ozone.Point;
        export function operator/(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(i: number, s: Ozone.Point): Ozone.Point;
        export function operator/(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(i: number, s: Ozone.Point): Ozone.Point;
        export function operator*(s: Ozone.Point, i: number): Ozone.Point;
        export function operator*(i: number, s: Ozone.Point): Ozone.Point;
        export function operator==(r1: Ozone.Rect, r2: Ozone.Rect): boolean;
        export function operator!=(r1: Ozone.Rect, r2: Ozone.Rect): boolean;
        export function operator+(r1: Ozone.Rect, r2: Ozone.Rect): Ozone.Rect;
        export function operator*(r1: Ozone.Rect, r2: Ozone.Rect): Ozone.Rect;
        export function InitializeStockLists(): void;
        export function DeleteStockLists(): void;
        export function ColourDisplay(): boolean;
        export function DisplayDepth(): number;
        export function GetDisplaySize(): Ozone.Size;
        export function GetDisplaySizeMM(): Ozone.Size;
        export function GetDisplayPPI(): Ozone.Size;
        export function GetClientDisplayRect(): Ozone.Rect;
    }
}