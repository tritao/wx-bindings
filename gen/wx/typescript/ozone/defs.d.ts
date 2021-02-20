// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
declare module "Ozone"
{
    namespace Ozone
    {
        enum KeyType
        {
            NONE = 0,
            INTEGER = 1,
            STRING = 2
        }

        enum Direction
        {
            LEFT = 0x10,
            RIGHT = 0x20,
            UP = 0x40,
            DOWN = 0x80,
            TOP = 64,
            BOTTOM = 128,
            NORTH = 64,
            SOUTH = 128,
            WEST = 16,
            EAST = 32,
            ALL = 240,
            DIRECTION_MASK = 240
        }

        enum BackgroundStyle
        {
            ERASE = 0,
            SYSTEM = 1,
            PAINT = 2,
            TRANSPARENT = 3,
            COLOUR = 4,
            CUSTOM = 2
        }

        enum HitTest
        {
            NOWHERE = 0,
            SCROLLBAR_FIRST = 0,
            SCROLLBAR_ARROW_LINE_1 = 1,
            SCROLLBAR_ARROW_LINE_2 = 2,
            SCROLLBAR_ARROW_PAGE_1 = 3,
            SCROLLBAR_ARROW_PAGE_2 = 4,
            SCROLLBAR_THUMB = 5,
            SCROLLBAR_BAR_1 = 6,
            SCROLLBAR_BAR_2 = 7,
            SCROLLBAR_LAST = 8,
            WINDOW_OUTSIDE = 9,
            WINDOW_INSIDE = 10,
            WINDOW_VERT_SCROLLBAR = 11,
            WINDOW_HORZ_SCROLLBAR = 12,
            WINDOW_CORNER = 13,
            MAX = 14
        }

        enum Border
        {
            DEFAULT = 0,
            NONE = 0x200000,
            STATIC = 0x1000000,
            SIMPLE = 0x2000000,
            RAISED = 0x4000000,
            SUNKEN = 0x8000000,
            DOUBLE = 0x10000000,
            THEME = 268435456,
            MASK = 0x1f200000
        }

        enum SizerOrientation
        {
            HORIZONTAL = 0x4,
            VERTICAL = 0x8,
            BOTH = 12,
            ORIENTATION_MASK = 12
        }

        enum Alignment
        {
            ALIGN_INVALID = -1,
            ALIGN_NOT = 0,
            ALIGN_CENTER_HORIZONTAL = 256,
            ALIGN_CENTRE_HORIZONTAL = 256,
            ALIGN_LEFT = 0,
            ALIGN_TOP = 0,
            ALIGN_RIGHT = 512,
            ALIGN_BOTTOM = 1024,
            ALIGN_CENTER_VERTICAL = 2048,
            ALIGN_CENTRE_VERTICAL = 2048,
            ALIGN_CENTER = 2304,
            ALIGN_CENTRE = 2304,
            ALIGN_MASK = 3840
        }

        enum CheckBoxState
        {
            UNCHECKED = 0,
            CHECKED = 1,
            UNDETERMINED = 2
        }

        enum DataFormatId
        {
            INVALID = 0,
            TEXT = 1,
            BITMAP = 2,
            METAFILE = 3,
            SYLK = 4,
            DIF = 5,
            TIFF = 6,
            OEMTEXT = 7,
            DIB = 8,
            PALETTE = 9,
            PENDATA = 10,
            RIFF = 11,
            WAVE = 12,
            UNICODETEXT = 13,
            ENHMETAFILE = 14,
            FILENAME = 15,
            LOCALE = 16,
            PRIVATE = 20,
            HTML = 30,
            MAX = 31
        }

        enum GeometryCentre
        {
            CENTRE = 0x1,
            CENTER = 1
        }

        enum HatchStyle
        {
            INVALID = -1,
            FIRST = 111,
            BDIAGONAL = 111,
            CROSSDIAG = 112,
            FDIAGONAL = 113,
            CROSS = 114,
            HORIZONTAL = 115,
            VERTICAL = 116,
            LAST = 116
        }

        enum ItemKind
        {
            SEPARATOR = -1,
            NORMAL = 0,
            CHECK = 1,
            RADIO = 2,
            DROPDOWN = 3,
            MAX = 4
        }

        enum KeyCode
        {
            NONE = 0,
            CONTROL_A = 1,
            CONTROL_B = 2,
            CONTROL_C = 3,
            CONTROL_D = 4,
            CONTROL_E = 5,
            CONTROL_F = 6,
            CONTROL_G = 7,
            CONTROL_H = 8,
            CONTROL_I = 9,
            CONTROL_J = 10,
            CONTROL_K = 11,
            CONTROL_L = 12,
            CONTROL_M = 13,
            CONTROL_N = 14,
            CONTROL_O = 15,
            CONTROL_P = 16,
            CONTROL_Q = 17,
            CONTROL_R = 18,
            CONTROL_S = 19,
            CONTROL_T = 20,
            CONTROL_U = 21,
            CONTROL_V = 22,
            CONTROL_W = 23,
            CONTROL_X = 24,
            CONTROL_Y = 25,
            CONTROL_Z = 26,
            BACK = 8,
            TAB = 9,
            RETURN = 13,
            ESCAPE = 27,
            SPACE = 32,
            DELETE = 127,
            START = 300,
            LBUTTON = 301,
            RBUTTON = 302,
            CANCEL = 303,
            MBUTTON = 304,
            CLEAR = 305,
            SHIFT = 306,
            ALT = 307,
            CONTROL = 308,
            MENU = 309,
            PAUSE = 310,
            CAPITAL = 311,
            END = 312,
            HOME = 313,
            LEFT = 314,
            UP = 315,
            RIGHT = 316,
            DOWN = 317,
            SELECT = 318,
            PRINT = 319,
            EXECUTE = 320,
            SNAPSHOT = 321,
            INSERT = 322,
            HELP = 323,
            NUMPAD0 = 324,
            NUMPAD1 = 325,
            NUMPAD2 = 326,
            NUMPAD3 = 327,
            NUMPAD4 = 328,
            NUMPAD5 = 329,
            NUMPAD6 = 330,
            NUMPAD7 = 331,
            NUMPAD8 = 332,
            NUMPAD9 = 333,
            MULTIPLY = 334,
            ADD = 335,
            SEPARATOR = 336,
            SUBTRACT = 337,
            DECIMAL = 338,
            DIVIDE = 339,
            F1 = 340,
            F2 = 341,
            F3 = 342,
            F4 = 343,
            F5 = 344,
            F6 = 345,
            F7 = 346,
            F8 = 347,
            F9 = 348,
            F10 = 349,
            F11 = 350,
            F12 = 351,
            F13 = 352,
            F14 = 353,
            F15 = 354,
            F16 = 355,
            F17 = 356,
            F18 = 357,
            F19 = 358,
            F20 = 359,
            F21 = 360,
            F22 = 361,
            F23 = 362,
            F24 = 363,
            NUMLOCK = 364,
            SCROLL = 365,
            PAGEUP = 366,
            PAGEDOWN = 367,
            NUMPAD_SPACE = 368,
            NUMPAD_TAB = 369,
            NUMPAD_ENTER = 370,
            NUMPAD_F1 = 371,
            NUMPAD_F2 = 372,
            NUMPAD_F3 = 373,
            NUMPAD_F4 = 374,
            NUMPAD_HOME = 375,
            NUMPAD_LEFT = 376,
            NUMPAD_UP = 377,
            NUMPAD_RIGHT = 378,
            NUMPAD_DOWN = 379,
            NUMPAD_PAGEUP = 380,
            NUMPAD_PAGEDOWN = 381,
            NUMPAD_END = 382,
            NUMPAD_BEGIN = 383,
            NUMPAD_INSERT = 384,
            NUMPAD_DELETE = 385,
            NUMPAD_EQUAL = 386,
            NUMPAD_MULTIPLY = 387,
            NUMPAD_ADD = 388,
            NUMPAD_SEPARATOR = 389,
            NUMPAD_SUBTRACT = 390,
            NUMPAD_DECIMAL = 391,
            NUMPAD_DIVIDE = 392,
            WINDOWS_LEFT = 393,
            WINDOWS_RIGHT = 394,
            WINDOWS_MENU = 395,
            RAW_CONTROL = 308,
            COMMAND = 308,
            SPECIAL1 = 397,
            SPECIAL2 = 398,
            SPECIAL3 = 399,
            SPECIAL4 = 400,
            SPECIAL5 = 401,
            SPECIAL6 = 402,
            SPECIAL7 = 403,
            SPECIAL8 = 404,
            SPECIAL9 = 405,
            SPECIAL10 = 406,
            SPECIAL11 = 407,
            SPECIAL12 = 408,
            SPECIAL13 = 409,
            SPECIAL14 = 410,
            SPECIAL15 = 411,
            SPECIAL16 = 412,
            SPECIAL17 = 413,
            SPECIAL18 = 414,
            SPECIAL19 = 415,
            SPECIAL20 = 416,
            BROWSER_BACK = 417,
            BROWSER_FORWARD = 418,
            BROWSER_REFRESH = 419,
            BROWSER_STOP = 420,
            BROWSER_SEARCH = 421,
            BROWSER_FAVORITES = 422,
            BROWSER_HOME = 423,
            VOLUME_MUTE = 424,
            VOLUME_DOWN = 425,
            VOLUME_UP = 426,
            MEDIA_NEXT_TRACK = 427,
            MEDIA_PREV_TRACK = 428,
            MEDIA_STOP = 429,
            MEDIA_PLAY_PAUSE = 430,
            LAUNCH_MAIL = 431,
            LAUNCH_APP1 = 432,
            LAUNCH_APP2 = 433
        }

        enum KeyModifier
        {
            NONE = 0x0,
            ALT = 0x1,
            CONTROL = 0x2,
            ALTGR = 3,
            SHIFT = 0x4,
            META = 0x8,
            WIN = 8,
            RAW_CONTROL = 2,
            CMD = 2,
            ALL = 0xffff
        }

        enum SizerFlagBits
        {
            FIXED_MINSIZE = 0x8000,
            RESERVE_SPACE_EVEN_IF_HIDDEN = 0x2,
            SIZER_FLAG_BITS_MASK = 0x8002
        }

        enum SizerLayoutFlags
        {
            ALIGN_LEFT = 0,
            ALIGN_TOP = 0,
            RESERVE_SPACE_EVEN_IF_HIDDEN = 0x2,
            LEFT = 0x10,
            RIGHT = 0x20,
            TOP = 64,
            BOTTOM = 128,
            ALL = 240,
            ALIGN_CENTER_HORIZONTAL = 0x100,
            ALIGN_RIGHT = 0x200,
            ALIGN_BOTTOM = 0x400,
            ALIGN_CENTER_VERTICAL = 0x800,
            ALIGN_CENTER = 2304,
            EXPAND = 8192,
            FIXED_MINSIZE = 0x8000
        }

        enum StandardID
        {
            AUTO_LOWEST = -1000000,
            AUTO_HIGHEST = -2000,
            NONE = -3,
            SEPARATOR = -2,
            ANY = -1,
            LOWEST = 4999,
            OPEN = 5000,
            CLOSE = 5001,
            NEW = 5002,
            SAVE = 5003,
            SAVEAS = 5004,
            REVERT = 5005,
            EXIT = 5006,
            UNDO = 5007,
            REDO = 5008,
            HELP = 5009,
            PRINT = 5010,
            PRINT_SETUP = 5011,
            PAGE_SETUP = 5012,
            PREVIEW = 5013,
            ABOUT = 5014,
            HELP_CONTENTS = 5015,
            HELP_INDEX = 5016,
            HELP_SEARCH = 5017,
            HELP_COMMANDS = 5018,
            HELP_PROCEDURES = 5019,
            HELP_CONTEXT = 5020,
            CLOSE_ALL = 5021,
            PREFERENCES = 5022,
            EDIT = 5030,
            CUT = 5031,
            COPY = 5032,
            PASTE = 5033,
            CLEAR = 5034,
            FIND = 5035,
            DUPLICATE = 5036,
            SELECTALL = 5037,
            DELETE = 5038,
            REPLACE = 5039,
            REPLACE_ALL = 5040,
            PROPERTIES = 5041,
            VIEW_DETAILS = 5042,
            VIEW_LARGEICONS = 5043,
            VIEW_SMALLICONS = 5044,
            VIEW_LIST = 5045,
            VIEW_SORTDATE = 5046,
            VIEW_SORTNAME = 5047,
            VIEW_SORTSIZE = 5048,
            VIEW_SORTTYPE = 5049,
            FILE = 5050,
            FILE1 = 5051,
            FILE2 = 5052,
            FILE3 = 5053,
            FILE4 = 5054,
            FILE5 = 5055,
            FILE6 = 5056,
            FILE7 = 5057,
            FILE8 = 5058,
            FILE9 = 5059,
            OK = 5100,
            CANCEL = 5101,
            APPLY = 5102,
            YES = 5103,
            NO = 5104,
            STATIC = 5105,
            FORWARD = 5106,
            BACKWARD = 5107,
            DEFAULT = 5108,
            MORE = 5109,
            SETUP = 5110,
            RESET = 5111,
            CONTEXT_HELP = 5112,
            YESTOALL = 5113,
            NOTOALL = 5114,
            ABORT = 5115,
            RETRY = 5116,
            IGNORE = 5117,
            ADD = 5118,
            REMOVE = 5119,
            UP = 5120,
            DOWN = 5121,
            HOME = 5122,
            REFRESH = 5123,
            STOP = 5124,
            INDEX = 5125,
            BOLD = 5126,
            ITALIC = 5127,
            JUSTIFY_CENTER = 5128,
            JUSTIFY_FILL = 5129,
            JUSTIFY_RIGHT = 5130,
            JUSTIFY_LEFT = 5131,
            UNDERLINE = 5132,
            INDENT = 5133,
            UNINDENT = 5134,
            ZOOM_100 = 5135,
            ZOOM_FIT = 5136,
            ZOOM_IN = 5137,
            ZOOM_OUT = 5138,
            UNDELETE = 5139,
            REVERT_TO_SAVED = 5140,
            CDROM = 5141,
            CONVERT = 5142,
            EXECUTE = 5143,
            FLOPPY = 5144,
            HARDDISK = 5145,
            BOTTOM = 5146,
            FIRST = 5147,
            LAST = 5148,
            TOP = 5149,
            INFO = 5150,
            JUMP_TO = 5151,
            NETWORK = 5152,
            SELECT_COLOR = 5153,
            SELECT_FONT = 5154,
            SORT_ASCENDING = 5155,
            SORT_DESCENDING = 5156,
            SPELL_CHECK = 5157,
            STRIKETHROUGH = 5158,
            SYSTEM_MENU = 5200,
            CLOSE_FRAME = 5201,
            MOVE_FRAME = 5202,
            RESIZE_FRAME = 5203,
            MAXIMIZE_FRAME = 5204,
            ICONIZE_FRAME = 5205,
            RESTORE_FRAME = 5206,
            MDI_WINDOW_FIRST = 5230,
            MDI_WINDOW_CASCADE = 5230,
            MDI_WINDOW_TILE_HORZ = 5231,
            MDI_WINDOW_TILE_VERT = 5232,
            MDI_WINDOW_ARRANGE_ICONS = 5233,
            MDI_WINDOW_PREV = 5234,
            MDI_WINDOW_NEXT = 5235,
            MDI_WINDOW_LAST = 5235,
            OSX_MENU_FIRST = 5250,
            OSX_HIDE = 5250,
            OSX_HIDEOTHERS = 5251,
            OSX_SHOWALL = 5252,
            OSX_SERVICES = 5253,
            OSX_MENU_LAST = 5253,
            FILEDLGG = 5900,
            FILECTRL = 5950,
            HIGHEST = 5999
        }

        enum Stretch
        {
            STRETCH_NOT = 0x0,
            SHRINK = 0x1000,
            GROW = 0x2000,
            EXPAND = 8192,
            SHAPED = 0x4000,
            TILE = 49152,
            STRETCH_MASK = 0x7000
        }

        enum TOOL
        {
            TOP = 1,
            BOTTOM = 2,
            LEFT = 3,
            RIGHT = 4
        }

        enum WindowFlags
        {
            FULL_REPAINT_ON_RESIZE = 65536,
            POPUP_WINDOW = 131072,
            WANTS_CHARS = 262144,
            TAB_TRAVERSAL = 524288,
            TRANSPARENT_WINDOW = 1048576,
            NONE = 2097152,
            CLIP_CHILDREN = 4194304,
            ALWAYS_SHOW_SB = 8388608,
            CAPTION = 536870912,
            CLIP_SIBLINGS = 536870912,
            HSCROLL = 1073741824,
            VSCROLL = -2147483648
        }
    }
}
