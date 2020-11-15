#define _LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS
#define _LIBCPP_HIDE_FROM_ABI

#include <wx/app.h>
#include <wx/window.h>
#include <wx/nonownedwnd.h>
#include <wx/toplevel.h>
#include <wx/frame.h>
#include <wx/event.h>
#include <wx/graphics.h>
#include <wx/gdicmn.h>
#include <wx/sizer.h>
#include <wx/dc.h>
#include <wx/dcclient.h>
#include <wx/panel.h>
#include <wx/brush.h>
#include <wx/pen.h>
#include <new>

wxEventLoopBase* (wxAppConsoleBase::*_0)() const = &wxAppConsoleBase::GetMainLoop;
wxAppConsole* (*_1)() = &wxAppConsoleBase::GetInstance;
void (*_2)(wxAppConsole*) = &wxAppConsoleBase::SetInstance;
void (wxAppBase::*_3)(wxWindow*) = &wxAppBase::SetTopWindow;
void (wxAppBase::*_4)(bool) = &wxAppBase::SetExitOnFrameDelete;
bool (wxAppBase::*_5)() const = &wxAppBase::GetExitOnFrameDelete;
void (wxAppBase::*_6)(bool, bool) = &wxAppBase::SetUseBestVisual;
bool (wxAppBase::*_7)() const = &wxAppBase::GetUseBestVisual;
unsigned long (*_8)(const void*) = &wxPtrToUInt;
void* (*_9)(unsigned long) = &wxUIntToPtr;
extern "C" { void wxRefCounter_wxRefCounter(void* __instance) { new (__instance) wxRefCounter(); } }
int (wxRefCounter::*_10)() const = &wxRefCounter::GetRefCount;
void (wxRefCounter::*_11)() = &wxRefCounter::IncRef;
extern "C" { void wxObject_wxObject(void* __instance) { new (__instance) wxObject(); } }
extern "C" { void wxObject_wxObject___1__S_wxObject(void* __instance, const wxObject& other) { new (__instance) wxObject(other); } }
wxRefCounter* (wxObject::*_12)() const = &wxObject::GetRefData;
void (wxObject::*_13)(wxRefCounter*) = &wxObject::SetRefData;
void (wxObject::*_14)() = &wxObject::UnShare;
bool (wxObject::*_15)(const wxObject&) const = &wxObject::IsSameAs;
template wxEventTypeTag<wxThreadEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxThreadEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxThreadEvent>& _0) { new (__instance) wxEventTypeTag<wxThreadEvent>(_0); } }
template wxEventTypeTag<wxAsyncMethodCallEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxAsyncMethodCallEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxAsyncMethodCallEvent>& _0) { new (__instance) wxEventTypeTag<wxAsyncMethodCallEvent>(_0); } }
template wxEventTypeTag<wxMouseEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxMouseEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxMouseEvent>& _0) { new (__instance) wxEventTypeTag<wxMouseEvent>(_0); } }
template wxEventTypeTag<wxFocusEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxFocusEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxFocusEvent>& _0) { new (__instance) wxEventTypeTag<wxFocusEvent>(_0); } }
template wxEventTypeTag<wxChildFocusEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxChildFocusEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxChildFocusEvent>& _0) { new (__instance) wxEventTypeTag<wxChildFocusEvent>(_0); } }
template wxEventTypeTag<wxKeyEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxKeyEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxKeyEvent>& _0) { new (__instance) wxEventTypeTag<wxKeyEvent>(_0); } }
template wxEventTypeTag<wxNavigationKeyEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxNavigationKeyEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxNavigationKeyEvent>& _0) { new (__instance) wxEventTypeTag<wxNavigationKeyEvent>(_0); } }
template wxEventTypeTag<wxSetCursorEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxSetCursorEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxSetCursorEvent>& _0) { new (__instance) wxEventTypeTag<wxSetCursorEvent>(_0); } }
template wxEventTypeTag<wxPanGestureEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxPanGestureEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxPanGestureEvent>& _0) { new (__instance) wxEventTypeTag<wxPanGestureEvent>(_0); } }
template wxEventTypeTag<wxZoomGestureEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxZoomGestureEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxZoomGestureEvent>& _0) { new (__instance) wxEventTypeTag<wxZoomGestureEvent>(_0); } }
template wxEventTypeTag<wxRotateGestureEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxRotateGestureEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxRotateGestureEvent>& _0) { new (__instance) wxEventTypeTag<wxRotateGestureEvent>(_0); } }
template wxEventTypeTag<wxTwoFingerTapEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxTwoFingerTapEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxTwoFingerTapEvent>& _0) { new (__instance) wxEventTypeTag<wxTwoFingerTapEvent>(_0); } }
template wxEventTypeTag<wxLongPressEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxLongPressEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxLongPressEvent>& _0) { new (__instance) wxEventTypeTag<wxLongPressEvent>(_0); } }
template wxEventTypeTag<wxPressAndTapEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxPressAndTapEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxPressAndTapEvent>& _0) { new (__instance) wxEventTypeTag<wxPressAndTapEvent>(_0); } }
template wxEventTypeTag<wxSizeEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxSizeEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxSizeEvent>& _0) { new (__instance) wxEventTypeTag<wxSizeEvent>(_0); } }
template wxEventTypeTag<wxMoveEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxMoveEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxMoveEvent>& _0) { new (__instance) wxEventTypeTag<wxMoveEvent>(_0); } }
template wxEventTypeTag<wxCloseEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxCloseEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxCloseEvent>& _0) { new (__instance) wxEventTypeTag<wxCloseEvent>(_0); } }
template wxEventTypeTag<wxShowEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxShowEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxShowEvent>& _0) { new (__instance) wxEventTypeTag<wxShowEvent>(_0); } }
template wxEventTypeTag<wxIconizeEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxIconizeEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxIconizeEvent>& _0) { new (__instance) wxEventTypeTag<wxIconizeEvent>(_0); } }
template wxEventTypeTag<wxMaximizeEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxMaximizeEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxMaximizeEvent>& _0) { new (__instance) wxEventTypeTag<wxMaximizeEvent>(_0); } }
template wxEventTypeTag<wxMouseCaptureChangedEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxMouseCaptureChangedEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxMouseCaptureChangedEvent>& _0) { new (__instance) wxEventTypeTag<wxMouseCaptureChangedEvent>(_0); } }
template wxEventTypeTag<wxMouseCaptureLostEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxMouseCaptureLostEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxMouseCaptureLostEvent>& _0) { new (__instance) wxEventTypeTag<wxMouseCaptureLostEvent>(_0); } }
template wxEventTypeTag<wxEraseEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxEraseEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxEraseEvent>& _0) { new (__instance) wxEventTypeTag<wxEraseEvent>(_0); } }
template wxEventTypeTag<wxSysColourChangedEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxSysColourChangedEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxSysColourChangedEvent>& _0) { new (__instance) wxEventTypeTag<wxSysColourChangedEvent>(_0); } }
template wxEventTypeTag<wxDisplayChangedEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxDisplayChangedEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxDisplayChangedEvent>& _0) { new (__instance) wxEventTypeTag<wxDisplayChangedEvent>(_0); } }
template wxEventTypeTag<wxDPIChangedEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxDPIChangedEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxDPIChangedEvent>& _0) { new (__instance) wxEventTypeTag<wxDPIChangedEvent>(_0); } }
template wxEventTypeTag<wxQueryNewPaletteEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxQueryNewPaletteEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxQueryNewPaletteEvent>& _0) { new (__instance) wxEventTypeTag<wxQueryNewPaletteEvent>(_0); } }
template wxEventTypeTag<wxPaletteChangedEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxPaletteChangedEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxPaletteChangedEvent>& _0) { new (__instance) wxEventTypeTag<wxPaletteChangedEvent>(_0); } }
template wxEventTypeTag<wxJoystickEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxJoystickEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxJoystickEvent>& _0) { new (__instance) wxEventTypeTag<wxJoystickEvent>(_0); } }
template wxEventTypeTag<wxInitDialogEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxInitDialogEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxInitDialogEvent>& _0) { new (__instance) wxEventTypeTag<wxInitDialogEvent>(_0); } }
template wxEventTypeTag<wxIdleEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxIdleEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxIdleEvent>& _0) { new (__instance) wxEventTypeTag<wxIdleEvent>(_0); } }
template wxEventTypeTag<wxUpdateUIEvent>::wxEventTypeTag(int);
extern "C" { void wxEventTypeTag____S_wxUpdateUIEvent_F_wxEventTypeTag___1__S_wxEventTypeTag__S0(void* __instance, const wxEventTypeTag<wxUpdateUIEvent>& _0) { new (__instance) wxEventTypeTag<wxUpdateUIEvent>(_0); } }
void (wxEvent::*_16)(int) = &wxEvent::SetEventType;
int (wxEvent::*_17)() const = &wxEvent::GetEventType;
wxObject* (wxEvent::*_18)() const = &wxEvent::GetEventObject;
void (wxEvent::*_19)(wxObject*) = &wxEvent::SetEventObject;
long (wxEvent::*_20)() const = &wxEvent::GetTimestamp;
void (wxEvent::*_21)(long) = &wxEvent::SetTimestamp;
int (wxEvent::*_22)() const = &wxEvent::GetId;
void (wxEvent::*_23)(int) = &wxEvent::SetId;
wxObject* (wxEvent::*_24)() const = &wxEvent::GetEventUserData;
void (wxEvent::*_25)(bool) = &wxEvent::Skip;
bool (wxEvent::*_26)() const = &wxEvent::GetSkipped;
bool (wxEvent::*_27)() const = &wxEvent::IsCommandEvent;
bool (wxEvent::*_28)() const = &wxEvent::ShouldPropagate;
int (wxEvent::*_29)() = &wxEvent::StopPropagation;
void (wxEvent::*_30)(int) = &wxEvent::ResumePropagation;
wxEvtHandler* (wxEvent::*_31)() const = &wxEvent::GetPropagatedFrom;
bool (wxEvent::*_32)() = &wxEvent::WasProcessed;
void (wxEvent::*_33)() = &wxEvent::SetWillBeProcessedAgain;
bool (wxEvent::*_34)() = &wxEvent::WillBeProcessedAgain;
bool (wxEvent::*_35)(wxEvtHandler*) const = &wxEvent::ShouldProcessOnlyIn;
void (wxEvent::*_36)() = &wxEvent::DidntHonourProcessOnlyIn;
extern "C" { void wxPropagateOnce_wxPropagateOnce_____S_wxEvent____S_wxEvtHandler(void* __instance, wxEvent& event, wxEvtHandler* handler) { new (__instance) wxPropagateOnce(event, handler); } }
extern "C" { void wxPropagateOnce__wxPropagateOnce(wxPropagateOnce* __instance) { delete __instance; } };
extern "C" { void wxIdleEvent_wxIdleEvent(void* __instance) { new (__instance) wxIdleEvent(); } }
extern "C" { void wxIdleEvent_wxIdleEvent___1__S_wxIdleEvent(void* __instance, const wxIdleEvent& event) { new (__instance) wxIdleEvent(event); } }
void (wxIdleEvent::*_37)(bool) = &wxIdleEvent::RequestMore;
bool (wxIdleEvent::*_38)() const = &wxIdleEvent::MoreRequested;
void (*_39)(wxIdleMode) = &wxIdleEvent::SetMode;
wxIdleMode (*_40)() = &wxIdleEvent::GetMode;
extern "C" { void wxThreadEvent_wxThreadEvent_I_I(void* __instance, int eventType, int id) { new (__instance) wxThreadEvent(eventType, id); } }
extern "C" { void wxThreadEvent_wxThreadEvent___1__S_wxThreadEvent(void* __instance, const wxThreadEvent& event) { new (__instance) wxThreadEvent(event); } }
extern "C" { void wxCommandEvent_wxCommandEvent_I_I(void* __instance, int commandType, int winid) { new (__instance) wxCommandEvent(commandType, winid); } }
extern "C" { void wxCommandEvent_wxCommandEvent___1__S_wxCommandEvent(void* __instance, const wxCommandEvent& event) { new (__instance) wxCommandEvent(event); } }
void (wxCommandEvent::*_41)(void*) = &wxCommandEvent::SetClientData;
void* (wxCommandEvent::*_42)() const = &wxCommandEvent::GetClientData;
int (wxCommandEvent::*_43)() const = &wxCommandEvent::GetSelection;
bool (wxCommandEvent::*_44)() const = &wxCommandEvent::IsChecked;
bool (wxCommandEvent::*_45)() const = &wxCommandEvent::IsSelection;
extern "C" { void wxNotifyEvent_wxNotifyEvent_I_I(void* __instance, int commandType, int winid) { new (__instance) wxNotifyEvent(commandType, winid); } }
extern "C" { void wxNotifyEvent_wxNotifyEvent___1__S_wxNotifyEvent(void* __instance, const wxNotifyEvent& event) { new (__instance) wxNotifyEvent(event); } }
void (wxNotifyEvent::*_46)() = &wxNotifyEvent::Veto;
void (wxNotifyEvent::*_47)() = &wxNotifyEvent::Allow;
bool (wxNotifyEvent::*_48)() const = &wxNotifyEvent::IsAllowed;
int (wxScrollEvent::*_49)() const = &wxScrollEvent::GetOrientation;
int (wxScrollEvent::*_50)() const = &wxScrollEvent::GetPosition;
void (wxScrollEvent::*_51)(int) = &wxScrollEvent::SetOrientation;
void (wxScrollEvent::*_52)(int) = &wxScrollEvent::SetPosition;
extern "C" { void wxScrollEvent_wxScrollEvent___1__S_wxScrollEvent(void* __instance, const wxScrollEvent& _0) { new (__instance) wxScrollEvent(_0); } }
extern "C" { void wxScrollWinEvent_wxScrollWinEvent___1__S_wxScrollWinEvent(void* __instance, const wxScrollWinEvent& event) { new (__instance) wxScrollWinEvent(event); } }
int (wxScrollWinEvent::*_53)() const = &wxScrollWinEvent::GetOrientation;
int (wxScrollWinEvent::*_54)() const = &wxScrollWinEvent::GetPosition;
void (wxScrollWinEvent::*_55)(int) = &wxScrollWinEvent::SetOrientation;
void (wxScrollWinEvent::*_56)(int) = &wxScrollWinEvent::SetPosition;
extern "C" { void wxMouseEvent_wxMouseEvent___1__S_wxMouseEvent(void* __instance, const wxMouseEvent& event) { new (__instance) wxMouseEvent(event); } }
bool (wxMouseEvent::*_57)() const = &wxMouseEvent::IsButton;
bool (wxMouseEvent::*_58)() const = &wxMouseEvent::LeftDown;
bool (wxMouseEvent::*_59)() const = &wxMouseEvent::MiddleDown;
bool (wxMouseEvent::*_60)() const = &wxMouseEvent::RightDown;
bool (wxMouseEvent::*_61)() const = &wxMouseEvent::Aux1Down;
bool (wxMouseEvent::*_62)() const = &wxMouseEvent::Aux2Down;
bool (wxMouseEvent::*_63)() const = &wxMouseEvent::LeftUp;
bool (wxMouseEvent::*_64)() const = &wxMouseEvent::MiddleUp;
bool (wxMouseEvent::*_65)() const = &wxMouseEvent::RightUp;
bool (wxMouseEvent::*_66)() const = &wxMouseEvent::Aux1Up;
bool (wxMouseEvent::*_67)() const = &wxMouseEvent::Aux2Up;
bool (wxMouseEvent::*_68)() const = &wxMouseEvent::LeftDClick;
bool (wxMouseEvent::*_69)() const = &wxMouseEvent::MiddleDClick;
bool (wxMouseEvent::*_70)() const = &wxMouseEvent::RightDClick;
bool (wxMouseEvent::*_71)() const = &wxMouseEvent::Aux1DClick;
bool (wxMouseEvent::*_72)() const = &wxMouseEvent::Aux2DClick;
bool (wxMouseEvent::*_73)() const = &wxMouseEvent::Magnify;
bool (wxMouseEvent::*_74)() const = &wxMouseEvent::Dragging;
bool (wxMouseEvent::*_75)() const = &wxMouseEvent::Moving;
bool (wxMouseEvent::*_76)() const = &wxMouseEvent::Entering;
bool (wxMouseEvent::*_77)() const = &wxMouseEvent::Leaving;
int (wxMouseEvent::*_78)() const = &wxMouseEvent::GetClickCount;
int (wxMouseEvent::*_79)() const = &wxMouseEvent::GetWheelRotation;
int (wxMouseEvent::*_80)() const = &wxMouseEvent::GetWheelDelta;
bool (wxMouseEvent::*_81)() const = &wxMouseEvent::IsWheelInverted;
wxMouseWheelAxis (wxMouseEvent::*_82)() const = &wxMouseEvent::GetWheelAxis;
int (wxMouseEvent::*_83)() const = &wxMouseEvent::GetLinesPerAction;
int (wxMouseEvent::*_84)() const = &wxMouseEvent::GetColumnsPerAction;
bool (wxMouseEvent::*_85)() const = &wxMouseEvent::IsPageScroll;
float (wxMouseEvent::*_86)() const = &wxMouseEvent::GetMagnification;
extern "C" { void wxSetCursorEvent_wxSetCursorEvent_I_I(void* __instance, int x, int y) { new (__instance) wxSetCursorEvent(x, y); } }
extern "C" { void wxSetCursorEvent_wxSetCursorEvent___1__S_wxSetCursorEvent(void* __instance, const wxSetCursorEvent& event) { new (__instance) wxSetCursorEvent(event); } }
int (wxSetCursorEvent::*_87)() const = &wxSetCursorEvent::GetX;
int (wxSetCursorEvent::*_88)() const = &wxSetCursorEvent::GetY;
bool (wxSetCursorEvent::*_89)() const = &wxSetCursorEvent::HasCursor;
extern "C" { void wxGestureEvent_wxGestureEvent_I_I(void* __instance, int winid, int type) { new (__instance) wxGestureEvent(winid, type); } }
extern "C" { void wxGestureEvent_wxGestureEvent___1__S_wxGestureEvent(void* __instance, const wxGestureEvent& event) { new (__instance) wxGestureEvent(event); } }
void (wxGestureEvent::*_90)(const wxPoint&) = &wxGestureEvent::SetPosition;
bool (wxGestureEvent::*_91)() const = &wxGestureEvent::IsGestureStart;
void (wxGestureEvent::*_92)(bool) = &wxGestureEvent::SetGestureStart;
bool (wxGestureEvent::*_93)() const = &wxGestureEvent::IsGestureEnd;
void (wxGestureEvent::*_94)(bool) = &wxGestureEvent::SetGestureEnd;
extern "C" { void wxPanGestureEvent_wxPanGestureEvent_I(void* __instance, int winid) { new (__instance) wxPanGestureEvent(winid); } }
extern "C" { void wxPanGestureEvent_wxPanGestureEvent___1__S_wxPanGestureEvent(void* __instance, const wxPanGestureEvent& event) { new (__instance) wxPanGestureEvent(event); } }
wxPoint (wxPanGestureEvent::*_95)() const = &wxPanGestureEvent::GetDelta;
void (wxPanGestureEvent::*_96)(const wxPoint&) = &wxPanGestureEvent::SetDelta;
extern "C" { void wxZoomGestureEvent_wxZoomGestureEvent_I(void* __instance, int winid) { new (__instance) wxZoomGestureEvent(winid); } }
extern "C" { void wxZoomGestureEvent_wxZoomGestureEvent___1__S_wxZoomGestureEvent(void* __instance, const wxZoomGestureEvent& event) { new (__instance) wxZoomGestureEvent(event); } }
double (wxZoomGestureEvent::*_97)() const = &wxZoomGestureEvent::GetZoomFactor;
void (wxZoomGestureEvent::*_98)(double) = &wxZoomGestureEvent::SetZoomFactor;
extern "C" { void wxRotateGestureEvent_wxRotateGestureEvent_I(void* __instance, int winid) { new (__instance) wxRotateGestureEvent(winid); } }
extern "C" { void wxRotateGestureEvent_wxRotateGestureEvent___1__S_wxRotateGestureEvent(void* __instance, const wxRotateGestureEvent& event) { new (__instance) wxRotateGestureEvent(event); } }
double (wxRotateGestureEvent::*_99)() const = &wxRotateGestureEvent::GetRotationAngle;
void (wxRotateGestureEvent::*_100)(double) = &wxRotateGestureEvent::SetRotationAngle;
extern "C" { void wxTwoFingerTapEvent_wxTwoFingerTapEvent_I(void* __instance, int winid) { new (__instance) wxTwoFingerTapEvent(winid); } }
extern "C" { void wxTwoFingerTapEvent_wxTwoFingerTapEvent___1__S_wxTwoFingerTapEvent(void* __instance, const wxTwoFingerTapEvent& event) { new (__instance) wxTwoFingerTapEvent(event); } }
extern "C" { void wxLongPressEvent_wxLongPressEvent_I(void* __instance, int winid) { new (__instance) wxLongPressEvent(winid); } }
extern "C" { void wxLongPressEvent_wxLongPressEvent___1__S_wxLongPressEvent(void* __instance, const wxLongPressEvent& event) { new (__instance) wxLongPressEvent(event); } }
extern "C" { void wxPressAndTapEvent_wxPressAndTapEvent_I(void* __instance, int winid) { new (__instance) wxPressAndTapEvent(winid); } }
extern "C" { void wxPressAndTapEvent_wxPressAndTapEvent___1__S_wxPressAndTapEvent(void* __instance, const wxPressAndTapEvent& event) { new (__instance) wxPressAndTapEvent(event); } }
int (wxKeyEvent::*_101)() const = &wxKeyEvent::GetKeyCode;
wchar_t (wxKeyEvent::*_102)() const = &wxKeyEvent::GetUnicodeKey;
unsigned int (wxKeyEvent::*_103)() const = &wxKeyEvent::GetRawKeyCode;
unsigned int (wxKeyEvent::*_104)() const = &wxKeyEvent::GetRawKeyFlags;
void (wxKeyEvent::*_105)(int*, int*) const = &wxKeyEvent::GetPosition;
void (wxKeyEvent::*_106)(long*, long*) const = &wxKeyEvent::GetPosition;
wxPoint (wxKeyEvent::*_107)() const = &wxKeyEvent::GetPosition;
void (wxKeyEvent::*_108)() = &wxKeyEvent::DoAllowNextEvent;
bool (wxKeyEvent::*_109)() const = &wxKeyEvent::IsNextEventAllowed;
extern "C" { void wxSizeEvent_wxSizeEvent(void* __instance) { new (__instance) wxSizeEvent(); } }
extern "C" { void wxSizeEvent_wxSizeEvent___1__S_wxSize_I(void* __instance, const wxSize& sz, int winid) { new (__instance) wxSizeEvent(sz, winid); } }
extern "C" { void wxSizeEvent_wxSizeEvent___1__S_wxSizeEvent(void* __instance, const wxSizeEvent& event) { new (__instance) wxSizeEvent(event); } }
extern "C" { void wxSizeEvent_wxSizeEvent___1__S_wxRect_I(void* __instance, const wxRect& rect, int id) { new (__instance) wxSizeEvent(rect, id); } }
wxSize (wxSizeEvent::*_110)() const = &wxSizeEvent::GetSize;
void (wxSizeEvent::*_111)(wxSize) = &wxSizeEvent::SetSize;
wxRect (wxSizeEvent::*_112)() const = &wxSizeEvent::GetRect;
void (wxSizeEvent::*_113)(const wxRect&) = &wxSizeEvent::SetRect;
extern "C" { void wxMoveEvent_wxMoveEvent(void* __instance) { new (__instance) wxMoveEvent(); } }
extern "C" { void wxMoveEvent_wxMoveEvent___1__S_wxPoint_I(void* __instance, const wxPoint& pos, int winid) { new (__instance) wxMoveEvent(pos, winid); } }
extern "C" { void wxMoveEvent_wxMoveEvent___1__S_wxMoveEvent(void* __instance, const wxMoveEvent& event) { new (__instance) wxMoveEvent(event); } }
extern "C" { void wxMoveEvent_wxMoveEvent___1__S_wxRect_I(void* __instance, const wxRect& rect, int id) { new (__instance) wxMoveEvent(rect, id); } }
wxPoint (wxMoveEvent::*_114)() const = &wxMoveEvent::GetPosition;
void (wxMoveEvent::*_115)(const wxPoint&) = &wxMoveEvent::SetPosition;
wxRect (wxMoveEvent::*_116)() const = &wxMoveEvent::GetRect;
void (wxMoveEvent::*_117)(const wxRect&) = &wxMoveEvent::SetRect;
extern "C" { void wxPaintEvent_wxPaintEvent___1__S_wxPaintEvent(void* __instance, const wxPaintEvent& _0) { new (__instance) wxPaintEvent(_0); } }
extern "C" { void wxNcPaintEvent_wxNcPaintEvent___1__S_wxNcPaintEvent(void* __instance, const wxNcPaintEvent& _0) { new (__instance) wxNcPaintEvent(_0); } }
extern "C" { void wxEraseEvent_wxEraseEvent_I____S_wxDC(void* __instance, int Id, wxDC* dc) { new (__instance) wxEraseEvent(Id, dc); } }
extern "C" { void wxEraseEvent_wxEraseEvent___1__S_wxEraseEvent(void* __instance, const wxEraseEvent& event) { new (__instance) wxEraseEvent(event); } }
wxDC* (wxEraseEvent::*_118)() const = &wxEraseEvent::GetDC;
extern "C" { void wxFocusEvent_wxFocusEvent_I_I(void* __instance, int type, int winid) { new (__instance) wxFocusEvent(type, winid); } }
extern "C" { void wxFocusEvent_wxFocusEvent___1__S_wxFocusEvent(void* __instance, const wxFocusEvent& event) { new (__instance) wxFocusEvent(event); } }
wxWindow* (wxFocusEvent::*_119)() const = &wxFocusEvent::GetWindow;
void (wxFocusEvent::*_120)(wxWindow*) = &wxFocusEvent::SetWindow;
wxWindow* (wxChildFocusEvent::*_121)() const = &wxChildFocusEvent::GetWindow;
extern "C" { void wxChildFocusEvent_wxChildFocusEvent___1__S_wxChildFocusEvent(void* __instance, const wxChildFocusEvent& _0) { new (__instance) wxChildFocusEvent(_0); } }
extern "C" { void wxActivateEvent_wxActivateEvent_I_b_I___S_wxActivateEvent_E_Reason(void* __instance, int type, bool active, int Id, wxActivateEvent::Reason activationReason) { new (__instance) wxActivateEvent(type, active, Id, activationReason); } }
extern "C" { void wxActivateEvent_wxActivateEvent___1__S_wxActivateEvent(void* __instance, const wxActivateEvent& event) { new (__instance) wxActivateEvent(event); } }
bool (wxActivateEvent::*_122)() const = &wxActivateEvent::GetActive;
wxActivateEvent::Reason (wxActivateEvent::*_123)() const = &wxActivateEvent::GetActivationReason;
extern "C" { void wxInitDialogEvent_wxInitDialogEvent_I(void* __instance, int Id) { new (__instance) wxInitDialogEvent(Id); } }
extern "C" { void wxInitDialogEvent_wxInitDialogEvent___1__S_wxInitDialogEvent(void* __instance, const wxInitDialogEvent& _0) { new (__instance) wxInitDialogEvent(_0); } }
extern "C" { void wxMenuEvent_wxMenuEvent_I_I____S_wxMenu(void* __instance, int type, int winid, wxMenu* menu) { new (__instance) wxMenuEvent(type, winid, menu); } }
extern "C" { void wxMenuEvent_wxMenuEvent___1__S_wxMenuEvent(void* __instance, const wxMenuEvent& event) { new (__instance) wxMenuEvent(event); } }
int (wxMenuEvent::*_124)() const = &wxMenuEvent::GetMenuId;
bool (wxMenuEvent::*_125)() const = &wxMenuEvent::IsPopup;
wxMenu* (wxMenuEvent::*_126)() const = &wxMenuEvent::GetMenu;
extern "C" { void wxCloseEvent_wxCloseEvent_I_I(void* __instance, int type, int winid) { new (__instance) wxCloseEvent(type, winid); } }
extern "C" { void wxCloseEvent_wxCloseEvent___1__S_wxCloseEvent(void* __instance, const wxCloseEvent& event) { new (__instance) wxCloseEvent(event); } }
void (wxCloseEvent::*_127)(bool) = &wxCloseEvent::SetLoggingOff;
bool (wxCloseEvent::*_128)() const = &wxCloseEvent::GetLoggingOff;
void (wxCloseEvent::*_129)(bool) = &wxCloseEvent::Veto;
void (wxCloseEvent::*_130)(bool) = &wxCloseEvent::SetCanVeto;
bool (wxCloseEvent::*_131)() const = &wxCloseEvent::CanVeto;
bool (wxCloseEvent::*_132)() const = &wxCloseEvent::GetVeto;
extern "C" { void wxShowEvent_wxShowEvent_I_b(void* __instance, int winid, bool show) { new (__instance) wxShowEvent(winid, show); } }
extern "C" { void wxShowEvent_wxShowEvent___1__S_wxShowEvent(void* __instance, const wxShowEvent& event) { new (__instance) wxShowEvent(event); } }
void (wxShowEvent::*_133)(bool) = &wxShowEvent::SetShow;
bool (wxShowEvent::*_134)() const = &wxShowEvent::IsShown;
extern "C" { void wxIconizeEvent_wxIconizeEvent_I_b(void* __instance, int winid, bool iconized) { new (__instance) wxIconizeEvent(winid, iconized); } }
extern "C" { void wxIconizeEvent_wxIconizeEvent___1__S_wxIconizeEvent(void* __instance, const wxIconizeEvent& event) { new (__instance) wxIconizeEvent(event); } }
bool (wxIconizeEvent::*_135)() const = &wxIconizeEvent::IsIconized;
extern "C" { void wxMaximizeEvent_wxMaximizeEvent_I(void* __instance, int winid) { new (__instance) wxMaximizeEvent(winid); } }
extern "C" { void wxMaximizeEvent_wxMaximizeEvent___1__S_wxMaximizeEvent(void* __instance, const wxMaximizeEvent& _0) { new (__instance) wxMaximizeEvent(_0); } }
extern "C" { void wxJoystickEvent_wxJoystickEvent_I_I_I_I(void* __instance, int type, int state, int joystick, int change) { new (__instance) wxJoystickEvent(type, state, joystick, change); } }
extern "C" { void wxJoystickEvent_wxJoystickEvent___1__S_wxJoystickEvent(void* __instance, const wxJoystickEvent& event) { new (__instance) wxJoystickEvent(event); } }
wxPoint (wxJoystickEvent::*_136)() const = &wxJoystickEvent::GetPosition;
int (wxJoystickEvent::*_137)() const = &wxJoystickEvent::GetZPosition;
int (wxJoystickEvent::*_138)() const = &wxJoystickEvent::GetButtonState;
int (wxJoystickEvent::*_139)() const = &wxJoystickEvent::GetButtonChange;
int (wxJoystickEvent::*_140)() const = &wxJoystickEvent::GetButtonOrdinal;
int (wxJoystickEvent::*_141)() const = &wxJoystickEvent::GetJoystick;
void (wxJoystickEvent::*_142)(int) = &wxJoystickEvent::SetJoystick;
void (wxJoystickEvent::*_143)(int) = &wxJoystickEvent::SetButtonState;
void (wxJoystickEvent::*_144)(int) = &wxJoystickEvent::SetButtonChange;
void (wxJoystickEvent::*_145)(const wxPoint&) = &wxJoystickEvent::SetPosition;
void (wxJoystickEvent::*_146)(int) = &wxJoystickEvent::SetZPosition;
bool (wxJoystickEvent::*_147)() const = &wxJoystickEvent::IsButton;
bool (wxJoystickEvent::*_148)() const = &wxJoystickEvent::IsMove;
bool (wxJoystickEvent::*_149)() const = &wxJoystickEvent::IsZMove;
bool (wxJoystickEvent::*_150)(int) const = &wxJoystickEvent::ButtonDown;
bool (wxJoystickEvent::*_151)(int) const = &wxJoystickEvent::ButtonUp;
bool (wxJoystickEvent::*_152)(int) const = &wxJoystickEvent::ButtonIsDown;
extern "C" { void wxUpdateUIEvent_wxUpdateUIEvent_I(void* __instance, int commandId) { new (__instance) wxUpdateUIEvent(commandId); } }
extern "C" { void wxUpdateUIEvent_wxUpdateUIEvent___1__S_wxUpdateUIEvent(void* __instance, const wxUpdateUIEvent& event) { new (__instance) wxUpdateUIEvent(event); } }
bool (wxUpdateUIEvent::*_153)() const = &wxUpdateUIEvent::GetChecked;
bool (wxUpdateUIEvent::*_154)() const = &wxUpdateUIEvent::GetEnabled;
bool (wxUpdateUIEvent::*_155)() const = &wxUpdateUIEvent::GetShown;
bool (wxUpdateUIEvent::*_156)() const = &wxUpdateUIEvent::GetSetText;
bool (wxUpdateUIEvent::*_157)() const = &wxUpdateUIEvent::GetSetChecked;
bool (wxUpdateUIEvent::*_158)() const = &wxUpdateUIEvent::GetSetEnabled;
bool (wxUpdateUIEvent::*_159)() const = &wxUpdateUIEvent::GetSetShown;
void (wxUpdateUIEvent::*_160)(bool) = &wxUpdateUIEvent::Check;
void (wxUpdateUIEvent::*_161)(bool) = &wxUpdateUIEvent::Enable;
void (wxUpdateUIEvent::*_162)(bool) = &wxUpdateUIEvent::Show;
void (*_163)(long) = &wxUpdateUIEvent::SetUpdateInterval;
long (*_164)() = &wxUpdateUIEvent::GetUpdateInterval;
void (*_165)(wxUpdateUIMode) = &wxUpdateUIEvent::SetMode;
wxUpdateUIMode (*_166)() = &wxUpdateUIEvent::GetMode;
extern "C" { void wxSysColourChangedEvent_wxSysColourChangedEvent(void* __instance) { new (__instance) wxSysColourChangedEvent(); } }
extern "C" { void wxSysColourChangedEvent_wxSysColourChangedEvent___1__S_wxSysColourChangedEvent(void* __instance, const wxSysColourChangedEvent& _0) { new (__instance) wxSysColourChangedEvent(_0); } }
extern "C" { void wxMouseCaptureChangedEvent_wxMouseCaptureChangedEvent_I____S_wxWindow(void* __instance, int winid, wxWindow* gainedCapture) { new (__instance) wxMouseCaptureChangedEvent(winid, gainedCapture); } }
extern "C" { void wxMouseCaptureChangedEvent_wxMouseCaptureChangedEvent___1__S_wxMouseCaptureChangedEvent(void* __instance, const wxMouseCaptureChangedEvent& event) { new (__instance) wxMouseCaptureChangedEvent(event); } }
wxWindow* (wxMouseCaptureChangedEvent::*_167)() const = &wxMouseCaptureChangedEvent::GetCapturedWindow;
extern "C" { void wxMouseCaptureLostEvent_wxMouseCaptureLostEvent_I(void* __instance, int winid) { new (__instance) wxMouseCaptureLostEvent(winid); } }
extern "C" { void wxMouseCaptureLostEvent_wxMouseCaptureLostEvent___1__S_wxMouseCaptureLostEvent(void* __instance, const wxMouseCaptureLostEvent& event) { new (__instance) wxMouseCaptureLostEvent(event); } }
extern "C" { void wxDisplayChangedEvent_wxDisplayChangedEvent(void* __instance) { new (__instance) wxDisplayChangedEvent(); } }
extern "C" { void wxDisplayChangedEvent_wxDisplayChangedEvent___1__S_wxDisplayChangedEvent(void* __instance, const wxDisplayChangedEvent& _0) { new (__instance) wxDisplayChangedEvent(_0); } }
extern "C" { void wxDPIChangedEvent_wxDPIChangedEvent___1__S_wxSize_S0(void* __instance, const wxSize& oldDPI, const wxSize& newDPI) { new (__instance) wxDPIChangedEvent(oldDPI, newDPI); } }
wxSize (wxDPIChangedEvent::*_168)() const = &wxDPIChangedEvent::GetOldDPI;
wxSize (wxDPIChangedEvent::*_169)() const = &wxDPIChangedEvent::GetNewDPI;
extern "C" { void wxDPIChangedEvent_wxDPIChangedEvent___1__S_wxDPIChangedEvent(void* __instance, const wxDPIChangedEvent& _0) { new (__instance) wxDPIChangedEvent(_0); } }
extern "C" { void wxPaletteChangedEvent_wxPaletteChangedEvent_I(void* __instance, int winid) { new (__instance) wxPaletteChangedEvent(winid); } }
extern "C" { void wxPaletteChangedEvent_wxPaletteChangedEvent___1__S_wxPaletteChangedEvent(void* __instance, const wxPaletteChangedEvent& event) { new (__instance) wxPaletteChangedEvent(event); } }
void (wxPaletteChangedEvent::*_170)(wxWindow*) = &wxPaletteChangedEvent::SetChangedWindow;
wxWindow* (wxPaletteChangedEvent::*_171)() const = &wxPaletteChangedEvent::GetChangedWindow;
extern "C" { void wxQueryNewPaletteEvent_wxQueryNewPaletteEvent_I(void* __instance, int winid) { new (__instance) wxQueryNewPaletteEvent(winid); } }
extern "C" { void wxQueryNewPaletteEvent_wxQueryNewPaletteEvent___1__S_wxQueryNewPaletteEvent(void* __instance, const wxQueryNewPaletteEvent& event) { new (__instance) wxQueryNewPaletteEvent(event); } }
void (wxQueryNewPaletteEvent::*_172)(bool) = &wxQueryNewPaletteEvent::SetPaletteRealized;
bool (wxQueryNewPaletteEvent::*_173)() const = &wxQueryNewPaletteEvent::GetPaletteRealized;
extern "C" { void wxNavigationKeyEvent_wxNavigationKeyEvent(void* __instance) { new (__instance) wxNavigationKeyEvent(); } }
extern "C" { void wxNavigationKeyEvent_wxNavigationKeyEvent___1__S_wxNavigationKeyEvent(void* __instance, const wxNavigationKeyEvent& event) { new (__instance) wxNavigationKeyEvent(event); } }
bool (wxNavigationKeyEvent::*_174)() const = &wxNavigationKeyEvent::GetDirection;
void (wxNavigationKeyEvent::*_175)(bool) = &wxNavigationKeyEvent::SetDirection;
bool (wxNavigationKeyEvent::*_176)() const = &wxNavigationKeyEvent::IsWindowChange;
void (wxNavigationKeyEvent::*_177)(bool) = &wxNavigationKeyEvent::SetWindowChange;
bool (wxNavigationKeyEvent::*_178)() const = &wxNavigationKeyEvent::IsFromTab;
void (wxNavigationKeyEvent::*_179)(bool) = &wxNavigationKeyEvent::SetFromTab;
wxWindow* (wxNavigationKeyEvent::*_180)() const = &wxNavigationKeyEvent::GetCurrentFocus;
void (wxNavigationKeyEvent::*_181)(wxWindow*) = &wxNavigationKeyEvent::SetCurrentFocus;
void (wxNavigationKeyEvent::*_182)(long) = &wxNavigationKeyEvent::SetFlags;
wxWindow* (wxWindowCreateEvent::*_183)() const = &wxWindowCreateEvent::GetWindow;
extern "C" { void wxWindowCreateEvent_wxWindowCreateEvent___1__S_wxWindowCreateEvent(void* __instance, const wxWindowCreateEvent& _0) { new (__instance) wxWindowCreateEvent(_0); } }
wxWindow* (wxWindowDestroyEvent::*_184)() const = &wxWindowDestroyEvent::GetWindow;
extern "C" { void wxWindowDestroyEvent_wxWindowDestroyEvent___1__S_wxWindowDestroyEvent(void* __instance, const wxWindowDestroyEvent& _0) { new (__instance) wxWindowDestroyEvent(_0); } }
extern "C" { void wxHelpEvent_wxHelpEvent_I_I___1__S_wxPoint___S_wxHelpEvent_E_Origin(void* __instance, int type, int winid, const wxPoint& pt, wxHelpEvent::Origin origin) { new (__instance) wxHelpEvent(type, winid, pt, origin); } }
extern "C" { void wxHelpEvent_wxHelpEvent___1__S_wxHelpEvent(void* __instance, const wxHelpEvent& event) { new (__instance) wxHelpEvent(event); } }
void (wxHelpEvent::*_185)(const wxPoint&) = &wxHelpEvent::SetPosition;
wxHelpEvent::Origin (wxHelpEvent::*_186)() const = &wxHelpEvent::GetOrigin;
void (wxHelpEvent::*_187)(wxHelpEvent::Origin) = &wxHelpEvent::SetOrigin;
extern "C" { void wxClipboardTextEvent_wxClipboardTextEvent_I_I(void* __instance, int type, int winid) { new (__instance) wxClipboardTextEvent(type, winid); } }
extern "C" { void wxClipboardTextEvent_wxClipboardTextEvent___1__S_wxClipboardTextEvent(void* __instance, const wxClipboardTextEvent& event) { new (__instance) wxClipboardTextEvent(event); } }
extern "C" { void wxContextMenuEvent_wxContextMenuEvent_I_I___1__S_wxPoint(void* __instance, int type, int winid, const wxPoint& pt) { new (__instance) wxContextMenuEvent(type, winid, pt); } }
extern "C" { void wxContextMenuEvent_wxContextMenuEvent___1__S_wxContextMenuEvent(void* __instance, const wxContextMenuEvent& event) { new (__instance) wxContextMenuEvent(event); } }
void (wxContextMenuEvent::*_188)(const wxPoint&) = &wxContextMenuEvent::SetPosition;
extern "C" { void wxEventTableEntryBase_wxEventTableEntryBase___1__S_wxEventTableEntryBase(void* __instance, const wxEventTableEntryBase& entry) { new (__instance) wxEventTableEntryBase(entry); } }
extern "C" { void wxEventTableEntryBase__wxEventTableEntryBase(wxEventTableEntryBase* __instance) { delete __instance; } };
wxEvtHandler* (wxEvtHandler::*_189)() const = &wxEvtHandler::GetNextHandler;
wxEvtHandler* (wxEvtHandler::*_190)() const = &wxEvtHandler::GetPreviousHandler;
void (wxEvtHandler::*_191)(bool) = &wxEvtHandler::SetEvtHandlerEnabled;
bool (wxEvtHandler::*_192)() const = &wxEvtHandler::GetEvtHandlerEnabled;
void (wxEvtHandler::*_193)(void*) = &wxEvtHandler::SetClientData;
void* (wxEvtHandler::*_194)() const = &wxEvtHandler::GetClientData;
void (wxEvtHandler::*_195)() = &wxEvtHandler::ClearEventHashTable;
class _196wxEvtHandler : public wxEvtHandler { public: static constexpr bool (wxEvtHandler::*_196)(wxEvent&) = &_196wxEvtHandler::TryBeforeAndHere; };
auto _196Protected = _196wxEvtHandler::_196;
void (*_197)(wxEvtHandler*, const wxEvent&) = &wxPostEvent;
void (*_198)(wxEvtHandler*, wxEvent*) = &wxQueueEvent;
extern "C" { void wxSize_wxSize(void* __instance) { new (__instance) wxSize(); } }
extern "C" { void wxSize_wxSize_I_I(void* __instance, int xx, int yy) { new (__instance) wxSize(xx, yy); } }
void (wxSize::*_199)(const wxSize&) = &wxSize::IncTo;
void (wxSize::*_200)(const wxSize&) = &wxSize::DecTo;
void (wxSize::*_201)(const wxSize&) = &wxSize::DecToIfSpecified;
void (wxSize::*_202)(int, int) = &wxSize::IncBy;
void (wxSize::*_203)(const wxPoint&) = &wxSize::IncBy;
void (wxSize::*_204)(const wxSize&) = &wxSize::IncBy;
void (wxSize::*_205)(int) = &wxSize::IncBy;
void (wxSize::*_206)(int, int) = &wxSize::DecBy;
void (wxSize::*_207)(const wxPoint&) = &wxSize::DecBy;
void (wxSize::*_208)(const wxSize&) = &wxSize::DecBy;
void (wxSize::*_209)(int) = &wxSize::DecBy;
void (wxSize::*_210)(int, int) = &wxSize::Set;
void (wxSize::*_211)(int) = &wxSize::SetWidth;
void (wxSize::*_212)(int) = &wxSize::SetHeight;
int (wxSize::*_213)() const = &wxSize::GetWidth;
int (wxSize::*_214)() const = &wxSize::GetHeight;
bool (wxSize::*_215)() const = &wxSize::IsFullySpecified;
void (wxSize::*_216)(const wxSize&) = &wxSize::SetDefaults;
int (wxSize::*_217)() const = &wxSize::GetX;
int (wxSize::*_218)() const = &wxSize::GetY;
extern "C" { void wxSize_wxSize___1__S_wxSize(void* __instance, const wxSize& _0) { new (__instance) wxSize(_0); } }
extern "C" { void wxRealPoint_wxRealPoint(void* __instance) { new (__instance) wxRealPoint(); } }
extern "C" { void wxRealPoint_wxRealPoint_d_d(void* __instance, double xx, double yy) { new (__instance) wxRealPoint(xx, yy); } }
extern "C" { void wxRealPoint_wxRealPoint___1__S_wxRealPoint(void* __instance, const wxRealPoint& _0) { new (__instance) wxRealPoint(_0); } }
extern "C" { void wxPoint_wxPoint(void* __instance) { new (__instance) wxPoint(); } }
extern "C" { void wxPoint_wxPoint_I_I(void* __instance, int xx, int yy) { new (__instance) wxPoint(xx, yy); } }
extern "C" { void wxPoint_wxPoint___1__S_wxRealPoint(void* __instance, const wxRealPoint& pt) { new (__instance) wxPoint(pt); } }
bool (wxPoint::*_219)() const = &wxPoint::IsFullySpecified;
void (wxPoint::*_220)(const wxPoint&) = &wxPoint::SetDefaults;
extern "C" { void wxPoint_wxPoint___1__S_wxPoint(void* __instance, const wxPoint& _0) { new (__instance) wxPoint(_0); } }
wxwxPointListNode* (wxwxPointListNode::*_221)() const = &wxwxPointListNode::GetNext;
wxwxPointListNode* (wxwxPointListNode::*_222)() const = &wxwxPointListNode::GetPrevious;
wxPoint* (wxwxPointListNode::*_223)() const = &wxwxPointListNode::GetData;
void (wxwxPointListNode::*_224)(wxPoint*) = &wxwxPointListNode::SetData;
extern "C" { void wxPointList_S_compatibility_iterator_compatibility_iterator____S_wxwxPointListNode(void* __instance, wxwxPointListNode* ptr) { new (__instance) wxPointList::compatibility_iterator(ptr); } }
wxwxPointListNode* (wxPointList::compatibility_iterator::*_225)() const = &wxPointList::compatibility_iterator::operator->;
wxwxPointListNode* (wxPointList::compatibility_iterator::*_226)() const = &wxPointList::compatibility_iterator::operator wxwxPointListNode *;
extern "C" { void wxPointList_S_compatibility_iterator_compatibility_iterator___1__S_wxPointList_S_compatibility_iterator(void* __instance, const wxPointList::compatibility_iterator& _0) { new (__instance) wxPointList::compatibility_iterator(_0); } }
extern "C" { void wxPointList_S_iterator_iterator____S_wxwxPointListNode_S0(void* __instance, wxwxPointListNode* node, wxwxPointListNode* init) { new (__instance) wxPointList::iterator(node, init); } }
extern "C" { void wxPointList_S_iterator_iterator(void* __instance) { new (__instance) wxPointList::iterator(); } }
const wxPointList::iterator (wxPointList::iterator::*_227)(int) = &wxPointList::iterator::operator++;
const wxPointList::iterator (wxPointList::iterator::*_228)(int) = &wxPointList::iterator::operator--;
bool (wxPointList::iterator::*_229)(const wxPointList::iterator&) const = &wxPointList::iterator::operator!=;
bool (wxPointList::iterator::*_230)(const wxPointList::iterator&) const = &wxPointList::iterator::operator==;
extern "C" { void wxPointList_S_iterator_iterator___1__S_wxPointList_S_iterator(void* __instance, const wxPointList::iterator& _0) { new (__instance) wxPointList::iterator(_0); } }
extern "C" { void wxPointList_S_const_iterator_const_iterator____S_wxwxPointListNode_S0(void* __instance, wxwxPointListNode* node, wxwxPointListNode* init) { new (__instance) wxPointList::const_iterator(node, init); } }
extern "C" { void wxPointList_S_const_iterator_const_iterator(void* __instance) { new (__instance) wxPointList::const_iterator(); } }
extern "C" { void wxPointList_S_const_iterator_const_iterator___1__S_wxPointList_S_iterator(void* __instance, const wxPointList::iterator& it) { new (__instance) wxPointList::const_iterator(it); } }
const wxPointList::const_iterator (wxPointList::const_iterator::*_231)(int) = &wxPointList::const_iterator::operator++;
const wxPointList::const_iterator (wxPointList::const_iterator::*_232)(int) = &wxPointList::const_iterator::operator--;
bool (wxPointList::const_iterator::*_233)(const wxPointList::const_iterator&) const = &wxPointList::const_iterator::operator!=;
bool (wxPointList::const_iterator::*_234)(const wxPointList::const_iterator&) const = &wxPointList::const_iterator::operator==;
extern "C" { void wxPointList_S_const_iterator_const_iterator___1__S_wxPointList_S_const_iterator(void* __instance, const wxPointList::const_iterator& _0) { new (__instance) wxPointList::const_iterator(_0); } }
extern "C" { void wxPointList_S_reverse_iterator_reverse_iterator____S_wxwxPointListNode_S0(void* __instance, wxwxPointListNode* node, wxwxPointListNode* init) { new (__instance) wxPointList::reverse_iterator(node, init); } }
extern "C" { void wxPointList_S_reverse_iterator_reverse_iterator(void* __instance) { new (__instance) wxPointList::reverse_iterator(); } }
const wxPointList::reverse_iterator (wxPointList::reverse_iterator::*_235)(int) = &wxPointList::reverse_iterator::operator++;
const wxPointList::reverse_iterator (wxPointList::reverse_iterator::*_236)(int) = &wxPointList::reverse_iterator::operator--;
bool (wxPointList::reverse_iterator::*_237)(const wxPointList::reverse_iterator&) const = &wxPointList::reverse_iterator::operator!=;
bool (wxPointList::reverse_iterator::*_238)(const wxPointList::reverse_iterator&) const = &wxPointList::reverse_iterator::operator==;
extern "C" { void wxPointList_S_reverse_iterator_reverse_iterator___1__S_wxPointList_S_reverse_iterator(void* __instance, const wxPointList::reverse_iterator& _0) { new (__instance) wxPointList::reverse_iterator(_0); } }
extern "C" { void wxPointList_S_const_reverse_iterator_const_reverse_iterator____S_wxwxPointListNode_S0(void* __instance, wxwxPointListNode* node, wxwxPointListNode* init) { new (__instance) wxPointList::const_reverse_iterator(node, init); } }
extern "C" { void wxPointList_S_const_reverse_iterator_const_reverse_iterator(void* __instance) { new (__instance) wxPointList::const_reverse_iterator(); } }
extern "C" { void wxPointList_S_const_reverse_iterator_const_reverse_iterator___1__S_wxPointList_S_reverse_iterator(void* __instance, const wxPointList::reverse_iterator& it) { new (__instance) wxPointList::const_reverse_iterator(it); } }
const wxPointList::const_reverse_iterator (wxPointList::const_reverse_iterator::*_239)(int) = &wxPointList::const_reverse_iterator::operator++;
const wxPointList::const_reverse_iterator (wxPointList::const_reverse_iterator::*_240)(int) = &wxPointList::const_reverse_iterator::operator--;
bool (wxPointList::const_reverse_iterator::*_241)(const wxPointList::const_reverse_iterator&) const = &wxPointList::const_reverse_iterator::operator!=;
bool (wxPointList::const_reverse_iterator::*_242)(const wxPointList::const_reverse_iterator&) const = &wxPointList::const_reverse_iterator::operator==;
extern "C" { void wxPointList_S_const_reverse_iterator_const_reverse_iterator___1__S_wxPointList_S_const_reverse_iterator(void* __instance, const wxPointList::const_reverse_iterator& _0) { new (__instance) wxPointList::const_reverse_iterator(_0); } }
extern "C" { void wxPointList_wxPointList___E_wxKeyType(void* __instance, wxKeyType keyType) { new (__instance) wxPointList(keyType); } }
extern "C" { void wxPointList_wxPointList___1__S_wxPointList(void* __instance, const wxPointList& list) { new (__instance) wxPointList(list); } }
wxwxPointListNode* (wxPointList::*_243)() const = &wxPointList::GetFirst;
wxwxPointListNode* (wxPointList::*_244)() const = &wxPointList::GetLast;
wxwxPointListNode* (wxPointList::*_245)(unsigned long) const = &wxPointList::Item;
wxPoint* (wxPointList::*_246)(unsigned long) const = &wxPointList::operator[];
wxwxPointListNode* (wxPointList::*_247)(wxPoint*) = &wxPointList::Append;
wxwxPointListNode* (wxPointList::*_248)(wxPoint*) = &wxPointList::Insert;
wxwxPointListNode* (wxPointList::*_249)(unsigned long, wxPoint*) = &wxPointList::Insert;
wxwxPointListNode* (wxPointList::*_250)(wxwxPointListNode*, wxPoint*) = &wxPointList::Insert;
wxwxPointListNode* (wxPointList::*_251)(long, void*) = &wxPointList::Append;
wxwxPointListNode* (wxPointList::*_252)(void*, void*) = &wxPointList::Append;
wxwxPointListNode* (wxPointList::*_253)(wxwxPointListNode*) = &wxPointList::DetachNode;
bool (wxPointList::*_254)(wxwxPointListNode*) = &wxPointList::DeleteNode;
bool (wxPointList::*_255)(wxPoint*) = &wxPointList::DeleteObject;
void (wxPointList::*_256)(wxwxPointListNode*) = &wxPointList::Erase;
wxwxPointListNode* (wxPointList::*_257)(const wxPoint*) const = &wxPointList::Find;
bool (wxPointList::*_258)(const wxPoint*) const = &wxPointList::Member;
int (wxPointList::*_259)(wxPoint*) const = &wxPointList::IndexOf;
extern "C" { void wxPointList_wxPointList_l___1___S_wxPoint(void* __instance, unsigned long n, const wxPoint*& v) { new (__instance) wxPointList(n, v); } }
extern "C" { void wxPointList_wxPointList___1__S_wxPointList_S_const_iterator_S0(void* __instance, const wxPointList::const_iterator& first, const wxPointList::const_iterator& last) { new (__instance) wxPointList(first, last); } }
wxPointList::iterator (wxPointList::*_260)() = &wxPointList::begin;
wxPointList::iterator (wxPointList::*_261)() = &wxPointList::end;
wxPointList::reverse_iterator (wxPointList::*_262)() = &wxPointList::rbegin;
wxPointList::reverse_iterator (wxPointList::*_263)() = &wxPointList::rend;
void (wxPointList::*_264)(unsigned long, wxPoint*) = &wxPointList::resize;
unsigned long (wxPointList::*_265)() const = &wxPointList::size;
unsigned long (wxPointList::*_266)() const = &wxPointList::max_size;
bool (wxPointList::*_267)() const = &wxPointList::empty;
void (wxPointList::*_268)(const wxPoint*&) = &wxPointList::push_front;
void (wxPointList::*_269)() = &wxPointList::pop_front;
void (wxPointList::*_270)(const wxPoint*&) = &wxPointList::push_back;
void (wxPointList::*_271)() = &wxPointList::pop_back;
void (wxPointList::*_272)(wxPointList::const_iterator, const wxPointList::const_iterator&) = &wxPointList::assign;
void (wxPointList::*_273)(unsigned long, const wxPoint*&) = &wxPointList::assign;
wxPointList::iterator (wxPointList::*_274)(const wxPointList::iterator&, const wxPoint*&) = &wxPointList::insert;
void (wxPointList::*_275)(const wxPointList::iterator&, unsigned long, const wxPoint*&) = &wxPointList::insert;
void (wxPointList::*_276)(const wxPointList::iterator&, wxPointList::const_iterator, const wxPointList::const_iterator&) = &wxPointList::insert;
wxPointList::iterator (wxPointList::*_277)(const wxPointList::iterator&) = &wxPointList::erase;
wxPointList::iterator (wxPointList::*_278)(const wxPointList::iterator&, const wxPointList::iterator&) = &wxPointList::erase;
void (wxPointList::*_279)() = &wxPointList::clear;
void (wxPointList::*_280)(const wxPointList::iterator&, wxPointList&, const wxPointList::iterator&, const wxPointList::iterator&) = &wxPointList::splice;
void (wxPointList::*_281)(const wxPointList::iterator&, wxPointList&) = &wxPointList::splice;
void (wxPointList::*_282)(const wxPointList::iterator&, wxPointList&, const wxPointList::iterator&) = &wxPointList::splice;
void (wxPointList::*_283)(const wxPoint*&) = &wxPointList::remove;
void (wxPointList::*_284)() = &wxPointList::reverse;
extern "C" { void wxRect_wxRect(void* __instance) { new (__instance) wxRect(); } }
extern "C" { void wxRect_wxRect_I_I_I_I(void* __instance, int xx, int yy, int ww, int hh) { new (__instance) wxRect(xx, yy, ww, hh); } }
extern "C" { void wxRect_wxRect___1__S_wxPoint___1__S_wxSize(void* __instance, const wxPoint& pt, const wxSize& size) { new (__instance) wxRect(pt, size); } }
extern "C" { void wxRect_wxRect___1__S_wxSize(void* __instance, const wxSize& size) { new (__instance) wxRect(size); } }
int (wxRect::*_285)() const = &wxRect::GetX;
void (wxRect::*_286)(int) = &wxRect::SetX;
int (wxRect::*_287)() const = &wxRect::GetY;
void (wxRect::*_288)(int) = &wxRect::SetY;
int (wxRect::*_289)() const = &wxRect::GetWidth;
void (wxRect::*_290)(int) = &wxRect::SetWidth;
int (wxRect::*_291)() const = &wxRect::GetHeight;
void (wxRect::*_292)(int) = &wxRect::SetHeight;
wxPoint (wxRect::*_293)() const = &wxRect::GetPosition;
void (wxRect::*_294)(const wxPoint&) = &wxRect::SetPosition;
wxSize (wxRect::*_295)() const = &wxRect::GetSize;
void (wxRect::*_296)(const wxSize&) = &wxRect::SetSize;
bool (wxRect::*_297)() const = &wxRect::IsEmpty;
int (wxRect::*_298)() const = &wxRect::GetLeft;
int (wxRect::*_299)() const = &wxRect::GetTop;
int (wxRect::*_300)() const = &wxRect::GetBottom;
int (wxRect::*_301)() const = &wxRect::GetRight;
void (wxRect::*_302)(int) = &wxRect::SetLeft;
void (wxRect::*_303)(int) = &wxRect::SetRight;
void (wxRect::*_304)(int) = &wxRect::SetTop;
void (wxRect::*_305)(int) = &wxRect::SetBottom;
wxPoint (wxRect::*_306)() const = &wxRect::GetTopLeft;
wxPoint (wxRect::*_307)() const = &wxRect::GetLeftTop;
void (wxRect::*_308)(const wxPoint&) = &wxRect::SetTopLeft;
void (wxRect::*_309)(const wxPoint&) = &wxRect::SetLeftTop;
wxPoint (wxRect::*_310)() const = &wxRect::GetBottomRight;
wxPoint (wxRect::*_311)() const = &wxRect::GetRightBottom;
void (wxRect::*_312)(const wxPoint&) = &wxRect::SetBottomRight;
void (wxRect::*_313)(const wxPoint&) = &wxRect::SetRightBottom;
wxPoint (wxRect::*_314)() const = &wxRect::GetTopRight;
wxPoint (wxRect::*_315)() const = &wxRect::GetRightTop;
void (wxRect::*_316)(const wxPoint&) = &wxRect::SetTopRight;
void (wxRect::*_317)(const wxPoint&) = &wxRect::SetRightTop;
wxPoint (wxRect::*_318)() const = &wxRect::GetBottomLeft;
wxPoint (wxRect::*_319)() const = &wxRect::GetLeftBottom;
void (wxRect::*_320)(const wxPoint&) = &wxRect::SetBottomLeft;
void (wxRect::*_321)(const wxPoint&) = &wxRect::SetLeftBottom;
wxRect (wxRect::*_322)(int, int) const = &wxRect::Inflate;
wxRect (wxRect::*_323)(int, int) const = &wxRect::Deflate;
void (wxRect::*_324)(int, int) = &wxRect::Offset;
void (wxRect::*_325)(const wxPoint&) = &wxRect::Offset;
wxRect (wxRect::*_326)(const wxRect&) const = &wxRect::Intersect;
wxRect (wxRect::*_327)(const wxRect&) const = &wxRect::Union;
bool (wxRect::*_328)(const wxPoint&) const = &wxRect::Contains;
wxRect (wxRect::*_329)(const wxRect&, int) const = &wxRect::CentreIn;
wxRect (wxRect::*_330)(const wxRect&, int) const = &wxRect::CenterIn;
extern "C" { void wxRect_wxRect___1__S_wxRect(void* __instance, const wxRect& _0) { new (__instance) wxRect(_0); } }
extern "C" { void wxGDIObjListBase_wxGDIObjListBase___1__S_wxGDIObjListBase(void* __instance, const wxGDIObjListBase& _0) { new (__instance) wxGDIObjListBase(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_Pair_wxStringToColourHashMap_wxImplementation_Pair___1__S_wxStringToColourHashMap_wxImplementation_Pair(void* __instance, const wxStringToColourHashMap_wxImplementation_Pair& _0) { new (__instance) wxStringToColourHashMap_wxImplementation_Pair(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_Pair__wxStringToColourHashMap_wxImplementation_Pair(wxStringToColourHashMap_wxImplementation_Pair* __instance) { delete __instance; } };
extern "C" { void wxStringToColourHashMap_wxImplementation_KeyEx_wxStringToColourHashMap_wxImplementation_KeyEx(void* __instance) { new (__instance) wxStringToColourHashMap_wxImplementation_KeyEx(); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_KeyEx_wxStringToColourHashMap_wxImplementation_KeyEx___1__S_wxStringToColourHashMap_wxImplementation_KeyEx(void* __instance, const wxStringToColourHashMap_wxImplementation_KeyEx& _0) { new (__instance) wxStringToColourHashMap_wxImplementation_KeyEx(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_Node_Node___1__S_wxStringToColourHashMap_wxImplementation_Pair(void* __instance, const wxStringToColourHashMap_wxImplementation_Pair& value) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::Node(value); } }
wxStringToColourHashMap_wxImplementation_HashTable::Node* (wxStringToColourHashMap_wxImplementation_HashTable::Node::*_331)() = &wxStringToColourHashMap_wxImplementation_HashTable::Node::next;
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_Node__Node(wxStringToColourHashMap_wxImplementation_HashTable::Node* __instance) { delete __instance; } };
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_Node_Node___1__S_wxStringToColourHashMap_wxImplementation_HashTable_S_Node(void* __instance, const wxStringToColourHashMap_wxImplementation_HashTable::Node& _0) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::Node(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_Iterator_Iterator(void* __instance) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::Iterator(); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_Iterator_Iterator____S_wxStringToColourHashMap_wxImplementation_HashTable_S_Node__1__S_wxStringToColourHashMap_wxImplementation_HashTable(void* __instance, wxStringToColourHashMap_wxImplementation_HashTable::Node* node, const wxStringToColourHashMap_wxImplementation_HashTable* ht) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::Iterator(node, ht); } }
bool (wxStringToColourHashMap_wxImplementation_HashTable::Iterator::*_332)(const wxStringToColourHashMap_wxImplementation_HashTable::Iterator&) const = &wxStringToColourHashMap_wxImplementation_HashTable::Iterator::operator==;
bool (wxStringToColourHashMap_wxImplementation_HashTable::Iterator::*_333)(const wxStringToColourHashMap_wxImplementation_HashTable::Iterator&) const = &wxStringToColourHashMap_wxImplementation_HashTable::Iterator::operator!=;
class _334Iterator : public wxStringToColourHashMap_wxImplementation_HashTable::Iterator { public: static constexpr wxStringToColourHashMap_wxImplementation_HashTable::Node* (wxStringToColourHashMap_wxImplementation_HashTable::Iterator::*_334)() = &_334Iterator::GetNextNode; };
auto _334Protected = _334Iterator::_334;
class _335Iterator : public wxStringToColourHashMap_wxImplementation_HashTable::Iterator { public: static constexpr void (wxStringToColourHashMap_wxImplementation_HashTable::Iterator::*_335)() = &_335Iterator::PlusPlus; };
auto _335Protected = _335Iterator::_335;
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_Iterator_Iterator___1__S_wxStringToColourHashMap_wxImplementation_HashTable_S_Iterator(void* __instance, const wxStringToColourHashMap_wxImplementation_HashTable::Iterator& _0) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::Iterator(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_iterator_iterator(void* __instance) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::iterator(); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_iterator_iterator____S_wxStringToColourHashMap_wxImplementation_HashTable_S_Node____S_wxStringToColourHashMap_wxImplementation_HashTable(void* __instance, wxStringToColourHashMap_wxImplementation_HashTable::Node* node, wxStringToColourHashMap_wxImplementation_HashTable* ht) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::iterator(node, ht); } }
wxStringToColourHashMap_wxImplementation_HashTable::iterator (wxStringToColourHashMap_wxImplementation_HashTable::iterator::*_336)(int) = &wxStringToColourHashMap_wxImplementation_HashTable::iterator::operator++;
wxStringToColourHashMap_wxImplementation_Pair* (wxStringToColourHashMap_wxImplementation_HashTable::iterator::*_337)() const = &wxStringToColourHashMap_wxImplementation_HashTable::iterator::operator->;
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_iterator_iterator___1__S_wxStringToColourHashMap_wxImplementation_HashTable_S_iterator(void* __instance, const wxStringToColourHashMap_wxImplementation_HashTable::iterator& _0) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::iterator(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_const_iterator_const_iterator(void* __instance) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::const_iterator(); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_const_iterator_const_iterator___S_wxStringToColourHashMap_wxImplementation_HashTable_S_iterator(void* __instance, wxStringToColourHashMap_wxImplementation_HashTable::iterator i) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::const_iterator(i); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_const_iterator_const_iterator____S_wxStringToColourHashMap_wxImplementation_HashTable_S_Node__1__S_wxStringToColourHashMap_wxImplementation_HashTable(void* __instance, wxStringToColourHashMap_wxImplementation_HashTable::Node* node, const wxStringToColourHashMap_wxImplementation_HashTable* ht) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::const_iterator(node, ht); } }
wxStringToColourHashMap_wxImplementation_HashTable::const_iterator (wxStringToColourHashMap_wxImplementation_HashTable::const_iterator::*_338)(int) = &wxStringToColourHashMap_wxImplementation_HashTable::const_iterator::operator++;
const wxStringToColourHashMap_wxImplementation_Pair* (wxStringToColourHashMap_wxImplementation_HashTable::const_iterator::*_339)() const = &wxStringToColourHashMap_wxImplementation_HashTable::const_iterator::operator->;
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_S_const_iterator_const_iterator___1__S_wxStringToColourHashMap_wxImplementation_HashTable_S_const_iterator(void* __instance, const wxStringToColourHashMap_wxImplementation_HashTable::const_iterator& _0) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable::const_iterator(_0); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable_wxStringToColourHashMap_wxImplementation_HashTable___1__S_wxStringToColourHashMap_wxImplementation_HashTable(void* __instance, const wxStringToColourHashMap_wxImplementation_HashTable& ht) { new (__instance) wxStringToColourHashMap_wxImplementation_HashTable(ht); } }
extern "C" { void wxStringToColourHashMap_wxImplementation_HashTable__wxStringToColourHashMap_wxImplementation_HashTable(wxStringToColourHashMap_wxImplementation_HashTable* __instance) { delete __instance; } };
void (wxStringToColourHashMap_wxImplementation_HashTable::*_340)() = &wxStringToColourHashMap_wxImplementation_HashTable::clear;
unsigned long (wxStringToColourHashMap_wxImplementation_HashTable::*_341)() const = &wxStringToColourHashMap_wxImplementation_HashTable::size;
unsigned long (wxStringToColourHashMap_wxImplementation_HashTable::*_342)() const = &wxStringToColourHashMap_wxImplementation_HashTable::max_size;
bool (wxStringToColourHashMap_wxImplementation_HashTable::*_343)() const = &wxStringToColourHashMap_wxImplementation_HashTable::empty;
wxStringToColourHashMap_wxImplementation_HashTable::iterator (wxStringToColourHashMap_wxImplementation_HashTable::*_344)() = &wxStringToColourHashMap_wxImplementation_HashTable::end;
wxStringToColourHashMap_wxImplementation_HashTable::iterator (wxStringToColourHashMap_wxImplementation_HashTable::*_345)() = &wxStringToColourHashMap_wxImplementation_HashTable::begin;
class _346wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr unsigned long (*_346)(wxStringToColourHashMap_wxImplementation_HashTable*, wxStringToColourHashMap_wxImplementation_HashTable::Node*) = &_346wxStringToColourHashMap_wxImplementation_HashTable::GetBucketForNode; };
auto _346Protected = _346wxStringToColourHashMap_wxImplementation_HashTable::_346;
class _347wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr wxStringToColourHashMap_wxImplementation_HashTable::Node* (*_347)(wxStringToColourHashMap_wxImplementation_HashTable::Node*) = &_347wxStringToColourHashMap_wxImplementation_HashTable::CopyNode; };
auto _347Protected = _347wxStringToColourHashMap_wxImplementation_HashTable::_347;
class _348wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr wxStringToColourHashMap_wxImplementation_HashTable::Node* (wxStringToColourHashMap_wxImplementation_HashTable::*_348)(const wxStringToColourHashMap_wxImplementation_Pair&, bool&) = &_348wxStringToColourHashMap_wxImplementation_HashTable::GetOrCreateNode; };
auto _348Protected = _348wxStringToColourHashMap_wxImplementation_HashTable::_348;
class _349wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr wxStringToColourHashMap_wxImplementation_HashTable::Node* (wxStringToColourHashMap_wxImplementation_HashTable::*_349)(const wxStringToColourHashMap_wxImplementation_Pair&, unsigned long) = &_349wxStringToColourHashMap_wxImplementation_HashTable::CreateNode; };
auto _349Protected = _349wxStringToColourHashMap_wxImplementation_HashTable::_349;
class _350wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr void (wxStringToColourHashMap_wxImplementation_HashTable::*_350)(const wxStringToColourHashMap_wxImplementation_Pair&) = &_350wxStringToColourHashMap_wxImplementation_HashTable::CreateNode; };
auto _350Protected = _350wxStringToColourHashMap_wxImplementation_HashTable::_350;
class _351wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr void (wxStringToColourHashMap_wxImplementation_HashTable::*_351)(unsigned long) = &_351wxStringToColourHashMap_wxImplementation_HashTable::ResizeTable; };
auto _351Protected = _351wxStringToColourHashMap_wxImplementation_HashTable::_351;
class _352wxStringToColourHashMap_wxImplementation_HashTable : public wxStringToColourHashMap_wxImplementation_HashTable { public: static constexpr void (wxStringToColourHashMap_wxImplementation_HashTable::*_352)(const wxStringToColourHashMap_wxImplementation_HashTable&) = &_352wxStringToColourHashMap_wxImplementation_HashTable::HashCopy; };
auto _352Protected = _352wxStringToColourHashMap_wxImplementation_HashTable::_352;
extern "C" { void wxStringToColourHashMap_S_Insert_Result_Insert_Result___1__S_wxStringToColourHashMap_wxImplementation_HashTable_S_iterator___1b(void* __instance, const wxStringToColourHashMap_wxImplementation_HashTable::iterator& f, const bool& s) { new (__instance) wxStringToColourHashMap::Insert_Result(f, s); } }
extern "C" { void wxStringToColourHashMap_S_Insert_Result_Insert_Result___1__S_wxStringToColourHashMap_S_Insert_Result(void* __instance, const wxStringToColourHashMap::Insert_Result& _0) { new (__instance) wxStringToColourHashMap::Insert_Result(_0); } }
wxStringToColourHashMap::Insert_Result (wxStringToColourHashMap::*_353)(const wxStringToColourHashMap_wxImplementation_Pair&) = &wxStringToColourHashMap::insert;
void (wxStringToColourHashMap::*_354)(const wxStringToColourHashMap_wxImplementation_HashTable::iterator&) = &wxStringToColourHashMap::erase;
extern "C" { void wxStringToColourHashMap_wxStringToColourHashMap___1__S_wxStringToColourHashMap(void* __instance, const wxStringToColourHashMap& _0) { new (__instance) wxStringToColourHashMap(_0); } }
extern "C" { void wxStringToColourHashMap__wxStringToColourHashMap(wxStringToColourHashMap* __instance) { delete __instance; } };
extern "C" { void wxColourDatabase_wxColourDatabase___1__S_wxColourDatabase(void* __instance, const wxColourDatabase& _0) { new (__instance) wxColourDatabase(_0); } }
extern "C" { void wxResourceCache_wxResourceCache(void* __instance) { new (__instance) wxResourceCache(); } }
extern "C" { void wxResourceCache_wxResourceCache_i(void* __instance, unsigned int keyType) { new (__instance) wxResourceCache(keyType); } }
extern "C" { void wxResourceCache_wxResourceCache___1__S_wxResourceCache(void* __instance, const wxResourceCache& _0) { new (__instance) wxResourceCache(_0); } }
bool (*_355)(const wxSize&, const wxSize&) = &operator==;
bool (*_356)(const wxSize&, const wxSize&) = &operator!=;
wxSize (*_357)(const wxSize&, const wxSize&) = &operator+;
wxSize (*_358)(const wxSize&, const wxSize&) = &operator-;
wxSize (*_359)(const wxSize&, long) = &operator/;
wxSize (*_360)(const wxSize&, long) = &operator*;
wxSize (*_361)(long, const wxSize&) = &operator*;
wxSize (*_362)(const wxSize&, unsigned long) = &operator/;
wxSize (*_363)(const wxSize&, unsigned long) = &operator*;
wxSize (*_364)(unsigned long, const wxSize&) = &operator*;
wxSize (*_365)(const wxSize&, double) = &operator*;
wxSize (*_366)(double, const wxSize&) = &operator*;
bool (*_367)(const wxRealPoint&, const wxRealPoint&) = &operator==;
bool (*_368)(const wxRealPoint&, const wxRealPoint&) = &operator!=;
wxRealPoint (*_369)(const wxRealPoint&, const wxRealPoint&) = &operator+;
wxRealPoint (*_370)(const wxRealPoint&, const wxRealPoint&) = &operator-;
wxRealPoint (*_371)(const wxRealPoint&, long) = &operator/;
wxRealPoint (*_372)(const wxRealPoint&, long) = &operator*;
wxRealPoint (*_373)(long, const wxRealPoint&) = &operator*;
wxRealPoint (*_374)(const wxRealPoint&, unsigned long) = &operator/;
wxRealPoint (*_375)(const wxRealPoint&, unsigned long) = &operator*;
wxRealPoint (*_376)(unsigned long, const wxRealPoint&) = &operator*;
wxRealPoint (*_377)(const wxRealPoint&, double) = &operator*;
wxRealPoint (*_378)(double, const wxRealPoint&) = &operator*;
bool (*_379)(const wxPoint&, const wxPoint&) = &operator==;
bool (*_380)(const wxPoint&, const wxPoint&) = &operator!=;
wxPoint (*_381)(const wxPoint&, const wxPoint&) = &operator+;
wxPoint (*_382)(const wxPoint&, const wxPoint&) = &operator-;
wxPoint (*_383)(const wxPoint&, const wxSize&) = &operator+;
wxPoint (*_384)(const wxPoint&, const wxSize&) = &operator-;
wxPoint (*_385)(const wxSize&, const wxPoint&) = &operator+;
wxPoint (*_386)(const wxSize&, const wxPoint&) = &operator-;
wxPoint (*_387)(const wxPoint&) = &operator-;
wxPoint (*_388)(const wxPoint&, long) = &operator/;
wxPoint (*_389)(const wxPoint&, long) = &operator*;
wxPoint (*_390)(long, const wxPoint&) = &operator*;
wxPoint (*_391)(const wxPoint&, unsigned long) = &operator/;
wxPoint (*_392)(const wxPoint&, unsigned long) = &operator*;
wxPoint (*_393)(unsigned long, const wxPoint&) = &operator*;
wxPoint (*_394)(const wxPoint&, double) = &operator*;
wxPoint (*_395)(double, const wxPoint&) = &operator*;
bool (*_396)(const wxRect&, const wxRect&) = &operator==;
bool (*_397)(const wxRect&, const wxRect&) = &operator!=;
void (wxColourBase::*_398)(unsigned char, unsigned char, unsigned char, unsigned char) = &wxColourBase::Set;
void (wxColourBase::*_399)(unsigned long) = &wxColourBase::Set;
void (wxColourBase::*_400)(unsigned int) = &wxColourBase::SetRGB;
void (wxColourBase::*_401)(unsigned int) = &wxColourBase::SetRGBA;
unsigned int (wxColourBase::*_402)() const = &wxColourBase::GetRGB;
unsigned int (wxColourBase::*_403)() const = &wxColourBase::GetRGBA;
class _404wxColor : public wxColourBase { public: static constexpr void (wxColourBase::*_404)() = &_404wxColor::Init; };
auto _404Protected = _404wxColor::_404;
extern "C" { void wxColour_F_wxColour(void* __instance) { new (__instance) wxColour(); } }
extern "C" { void wxColour_F_wxColour_c_c_c_c(void* __instance, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) { new (__instance) wxColour(red, green, blue, alpha); } }
extern "C" { void wxColour_F_wxColour_l(void* __instance, unsigned long colRGB) { new (__instance) wxColour(colRGB); } }
extern "C" { void wxColour_F_wxColour__1W(void* __instance, void* colourName) { new (__instance) wxColour(colourName); } }
bool (wxColour::*_405)(const wxColour&) const = &wxColour::operator!=;
CGColor* (wxColour::*_406)() const = &wxColour::CreateCGColor;
extern "C" { void wxColour_F_wxColour___1__S_wxColour(void* __instance, const wxColour& _0) { new (__instance) wxColour(_0); } }
extern "C" { void wxVisualAttributes_wxVisualAttributes___1__S_wxVisualAttributes(void* __instance, const wxVisualAttributes& _0) { new (__instance) wxVisualAttributes(_0); } }
extern "C" { void wxVisualAttributes__wxVisualAttributes(wxVisualAttributes* __instance) { delete __instance; } };
extern "C" { void wxVisualAttributes_wxVisualAttributes(void* __instance) { new (__instance) wxVisualAttributes(); } }
wxWindowListNode* (wxWindowListNode::*_407)() const = &wxWindowListNode::GetNext;
wxWindowListNode* (wxWindowListNode::*_408)() const = &wxWindowListNode::GetPrevious;
wxWindow* (wxWindowListNode::*_409)() const = &wxWindowListNode::GetData;
void (wxWindowListNode::*_410)(wxWindow*) = &wxWindowListNode::SetData;
extern "C" { void wxWindowList_S_compatibility_iterator_compatibility_iterator____S_wxWindowListNode(void* __instance, wxWindowListNode* ptr) { new (__instance) wxWindowList::compatibility_iterator(ptr); } }
wxWindowListNode* (wxWindowList::compatibility_iterator::*_411)() const = &wxWindowList::compatibility_iterator::operator->;
wxWindowListNode* (wxWindowList::compatibility_iterator::*_412)() const = &wxWindowList::compatibility_iterator::operator wxWindowListNode *;
extern "C" { void wxWindowList_S_compatibility_iterator_compatibility_iterator___1__S_wxWindowList_S_compatibility_iterator(void* __instance, const wxWindowList::compatibility_iterator& _0) { new (__instance) wxWindowList::compatibility_iterator(_0); } }
extern "C" { void wxWindowList_S_iterator_iterator____S_wxWindowListNode_S0(void* __instance, wxWindowListNode* node, wxWindowListNode* init) { new (__instance) wxWindowList::iterator(node, init); } }
extern "C" { void wxWindowList_S_iterator_iterator(void* __instance) { new (__instance) wxWindowList::iterator(); } }
const wxWindowList::iterator (wxWindowList::iterator::*_413)(int) = &wxWindowList::iterator::operator++;
const wxWindowList::iterator (wxWindowList::iterator::*_414)(int) = &wxWindowList::iterator::operator--;
bool (wxWindowList::iterator::*_415)(const wxWindowList::iterator&) const = &wxWindowList::iterator::operator!=;
bool (wxWindowList::iterator::*_416)(const wxWindowList::iterator&) const = &wxWindowList::iterator::operator==;
extern "C" { void wxWindowList_S_iterator_iterator___1__S_wxWindowList_S_iterator(void* __instance, const wxWindowList::iterator& _0) { new (__instance) wxWindowList::iterator(_0); } }
extern "C" { void wxWindowList_S_const_iterator_const_iterator____S_wxWindowListNode_S0(void* __instance, wxWindowListNode* node, wxWindowListNode* init) { new (__instance) wxWindowList::const_iterator(node, init); } }
extern "C" { void wxWindowList_S_const_iterator_const_iterator(void* __instance) { new (__instance) wxWindowList::const_iterator(); } }
extern "C" { void wxWindowList_S_const_iterator_const_iterator___1__S_wxWindowList_S_iterator(void* __instance, const wxWindowList::iterator& it) { new (__instance) wxWindowList::const_iterator(it); } }
const wxWindowList::const_iterator (wxWindowList::const_iterator::*_417)(int) = &wxWindowList::const_iterator::operator++;
const wxWindowList::const_iterator (wxWindowList::const_iterator::*_418)(int) = &wxWindowList::const_iterator::operator--;
bool (wxWindowList::const_iterator::*_419)(const wxWindowList::const_iterator&) const = &wxWindowList::const_iterator::operator!=;
bool (wxWindowList::const_iterator::*_420)(const wxWindowList::const_iterator&) const = &wxWindowList::const_iterator::operator==;
extern "C" { void wxWindowList_S_const_iterator_const_iterator___1__S_wxWindowList_S_const_iterator(void* __instance, const wxWindowList::const_iterator& _0) { new (__instance) wxWindowList::const_iterator(_0); } }
extern "C" { void wxWindowList_S_reverse_iterator_reverse_iterator____S_wxWindowListNode_S0(void* __instance, wxWindowListNode* node, wxWindowListNode* init) { new (__instance) wxWindowList::reverse_iterator(node, init); } }
extern "C" { void wxWindowList_S_reverse_iterator_reverse_iterator(void* __instance) { new (__instance) wxWindowList::reverse_iterator(); } }
const wxWindowList::reverse_iterator (wxWindowList::reverse_iterator::*_421)(int) = &wxWindowList::reverse_iterator::operator++;
const wxWindowList::reverse_iterator (wxWindowList::reverse_iterator::*_422)(int) = &wxWindowList::reverse_iterator::operator--;
bool (wxWindowList::reverse_iterator::*_423)(const wxWindowList::reverse_iterator&) const = &wxWindowList::reverse_iterator::operator!=;
bool (wxWindowList::reverse_iterator::*_424)(const wxWindowList::reverse_iterator&) const = &wxWindowList::reverse_iterator::operator==;
extern "C" { void wxWindowList_S_reverse_iterator_reverse_iterator___1__S_wxWindowList_S_reverse_iterator(void* __instance, const wxWindowList::reverse_iterator& _0) { new (__instance) wxWindowList::reverse_iterator(_0); } }
extern "C" { void wxWindowList_S_const_reverse_iterator_const_reverse_iterator____S_wxWindowListNode_S0(void* __instance, wxWindowListNode* node, wxWindowListNode* init) { new (__instance) wxWindowList::const_reverse_iterator(node, init); } }
extern "C" { void wxWindowList_S_const_reverse_iterator_const_reverse_iterator(void* __instance) { new (__instance) wxWindowList::const_reverse_iterator(); } }
extern "C" { void wxWindowList_S_const_reverse_iterator_const_reverse_iterator___1__S_wxWindowList_S_reverse_iterator(void* __instance, const wxWindowList::reverse_iterator& it) { new (__instance) wxWindowList::const_reverse_iterator(it); } }
const wxWindowList::const_reverse_iterator (wxWindowList::const_reverse_iterator::*_425)(int) = &wxWindowList::const_reverse_iterator::operator++;
const wxWindowList::const_reverse_iterator (wxWindowList::const_reverse_iterator::*_426)(int) = &wxWindowList::const_reverse_iterator::operator--;
bool (wxWindowList::const_reverse_iterator::*_427)(const wxWindowList::const_reverse_iterator&) const = &wxWindowList::const_reverse_iterator::operator!=;
bool (wxWindowList::const_reverse_iterator::*_428)(const wxWindowList::const_reverse_iterator&) const = &wxWindowList::const_reverse_iterator::operator==;
extern "C" { void wxWindowList_S_const_reverse_iterator_const_reverse_iterator___1__S_wxWindowList_S_const_reverse_iterator(void* __instance, const wxWindowList::const_reverse_iterator& _0) { new (__instance) wxWindowList::const_reverse_iterator(_0); } }
extern "C" { void wxWindowList_wxWindowList___E_wxKeyType(void* __instance, wxKeyType keyType) { new (__instance) wxWindowList(keyType); } }
extern "C" { void wxWindowList_wxWindowList___1__S_wxWindowList(void* __instance, const wxWindowList& list) { new (__instance) wxWindowList(list); } }
wxWindowListNode* (wxWindowList::*_429)() const = &wxWindowList::GetFirst;
wxWindowListNode* (wxWindowList::*_430)() const = &wxWindowList::GetLast;
wxWindowListNode* (wxWindowList::*_431)(unsigned long) const = &wxWindowList::Item;
wxWindow* (wxWindowList::*_432)(unsigned long) const = &wxWindowList::operator[];
wxWindowListNode* (wxWindowList::*_433)(long, void*) = &wxWindowList::Append;
wxWindowListNode* (wxWindowList::*_434)(void*, void*) = &wxWindowList::Append;
wxWindowListNode* (wxWindowList::*_435)(wxWindowListNode*) = &wxWindowList::DetachNode;
bool (wxWindowList::*_436)(wxWindowListNode*) = &wxWindowList::DeleteNode;
void (wxWindowList::*_437)(wxWindowListNode*) = &wxWindowList::Erase;
extern "C" { void wxWindowList_wxWindowList_l___1___S_wxWindow(void* __instance, unsigned long n, const wxWindow*& v) { new (__instance) wxWindowList(n, v); } }
extern "C" { void wxWindowList_wxWindowList___1__S_wxWindowList_S_const_iterator_S0(void* __instance, const wxWindowList::const_iterator& first, const wxWindowList::const_iterator& last) { new (__instance) wxWindowList(first, last); } }
wxWindowList::iterator (wxWindowList::*_438)() = &wxWindowList::begin;
wxWindowList::iterator (wxWindowList::*_439)() = &wxWindowList::end;
wxWindowList::reverse_iterator (wxWindowList::*_440)() = &wxWindowList::rbegin;
wxWindowList::reverse_iterator (wxWindowList::*_441)() = &wxWindowList::rend;
void (wxWindowList::*_442)(unsigned long, wxWindow*) = &wxWindowList::resize;
unsigned long (wxWindowList::*_443)() const = &wxWindowList::size;
unsigned long (wxWindowList::*_444)() const = &wxWindowList::max_size;
bool (wxWindowList::*_445)() const = &wxWindowList::empty;
void (wxWindowList::*_446)(const wxWindow*&) = &wxWindowList::push_front;
void (wxWindowList::*_447)() = &wxWindowList::pop_front;
void (wxWindowList::*_448)(const wxWindow*&) = &wxWindowList::push_back;
void (wxWindowList::*_449)() = &wxWindowList::pop_back;
void (wxWindowList::*_450)(wxWindowList::const_iterator, const wxWindowList::const_iterator&) = &wxWindowList::assign;
void (wxWindowList::*_451)(unsigned long, const wxWindow*&) = &wxWindowList::assign;
wxWindowList::iterator (wxWindowList::*_452)(const wxWindowList::iterator&, const wxWindow*&) = &wxWindowList::insert;
void (wxWindowList::*_453)(const wxWindowList::iterator&, unsigned long, const wxWindow*&) = &wxWindowList::insert;
void (wxWindowList::*_454)(const wxWindowList::iterator&, wxWindowList::const_iterator, const wxWindowList::const_iterator&) = &wxWindowList::insert;
wxWindowList::iterator (wxWindowList::*_455)(const wxWindowList::iterator&) = &wxWindowList::erase;
wxWindowList::iterator (wxWindowList::*_456)(const wxWindowList::iterator&, const wxWindowList::iterator&) = &wxWindowList::erase;
void (wxWindowList::*_457)() = &wxWindowList::clear;
void (wxWindowList::*_458)(const wxWindowList::iterator&, wxWindowList&, const wxWindowList::iterator&, const wxWindowList::iterator&) = &wxWindowList::splice;
void (wxWindowList::*_459)(const wxWindowList::iterator&, wxWindowList&) = &wxWindowList::splice;
void (wxWindowList::*_460)(const wxWindowList::iterator&, wxWindowList&, const wxWindowList::iterator&) = &wxWindowList::splice;
void (wxWindowList::*_461)(const wxWindow*&) = &wxWindowList::remove;
void (wxWindowList::*_462)() = &wxWindowList::reverse;
extern "C" { void wxWindowBase_S_ChildrenRepositioningGuard__ChildrenRepositioningGuard(wxWindow::ChildrenRepositioningGuard* __instance) { delete __instance; } };
wxWindowVariant (wxWindowBase::*_463)() const = &wxWindowBase::GetWindowVariant;
int (wxWindowBase::*_464)() const = &wxWindowBase::GetId;
int (*_465)(int) = &wxWindowBase::NewControlId;
void (*_466)(int, int) = &wxWindowBase::UnreserveControlId;
void (wxWindowBase::*_467)(int, int, int, int, int) = &wxWindowBase::SetSize;
void (wxWindowBase::*_468)(int, int) = &wxWindowBase::SetSize;
void (wxWindowBase::*_469)(const wxSize&) = &wxWindowBase::SetSize;
void (wxWindowBase::*_470)(const wxRect&, int) = &wxWindowBase::SetSize;
void (wxWindowBase::*_471)(int, int, int) = &wxWindowBase::Move;
void (wxWindowBase::*_472)(const wxPoint&, int) = &wxWindowBase::Move;
void (wxWindowBase::*_473)(const wxPoint&) = &wxWindowBase::SetPosition;
void (wxWindowBase::*_474)(int, int) = &wxWindowBase::SetClientSize;
void (wxWindowBase::*_475)(const wxSize&) = &wxWindowBase::SetClientSize;
void (wxWindowBase::*_476)(const wxRect&) = &wxWindowBase::SetClientSize;
void (wxWindowBase::*_477)(int*, int*) const = &wxWindowBase::GetPosition;
wxPoint (wxWindowBase::*_478)() const = &wxWindowBase::GetPosition;
void (wxWindowBase::*_479)(int*, int*) const = &wxWindowBase::GetScreenPosition;
wxPoint (wxWindowBase::*_480)() const = &wxWindowBase::GetScreenPosition;
void (wxWindowBase::*_481)(int*, int*) const = &wxWindowBase::GetSize;
wxSize (wxWindowBase::*_482)() const = &wxWindowBase::GetSize;
void (wxWindowBase::*_483)(int*, int*) const = &wxWindowBase::GetClientSize;
wxSize (wxWindowBase::*_484)() const = &wxWindowBase::GetClientSize;
wxRect (wxWindowBase::*_485)() const = &wxWindowBase::GetRect;
wxRect (wxWindowBase::*_486)() const = &wxWindowBase::GetScreenRect;
wxRect (wxWindowBase::*_487)() const = &wxWindowBase::GetClientRect;
void (wxWindowBase::*_488)(int*, int*) const = &wxWindowBase::GetBestSize;
void (wxWindowBase::*_489)(wxScrollHelper*) = &wxWindowBase::SetScrollHelper;
wxScrollHelper* (wxWindowBase::*_490)() = &wxWindowBase::GetScrollHelper;
void (wxWindowBase::*_491)(const wxSize&) const = &wxWindowBase::CacheBestSize;
void (wxWindowBase::*_492)(int) = &wxWindowBase::Centre;
void (wxWindowBase::*_493)(int) = &wxWindowBase::Center;
void (wxWindowBase::*_494)(int) = &wxWindowBase::CentreOnParent;
void (wxWindowBase::*_495)(int) = &wxWindowBase::CenterOnParent;
void (wxWindowBase::*_496)(const wxSize&, const wxSize&, const wxSize&) = &wxWindowBase::SetSizeHints;
int (wxWindowBase::*_497)() const = &wxWindowBase::GetMinWidth;
int (wxWindowBase::*_498)() const = &wxWindowBase::GetMinHeight;
int (wxWindowBase::*_499)() const = &wxWindowBase::GetMaxWidth;
int (wxWindowBase::*_500)() const = &wxWindowBase::GetMaxHeight;
void (wxWindowBase::*_501)(const wxSize&) = &wxWindowBase::SetVirtualSize;
void (wxWindowBase::*_502)(int, int) = &wxWindowBase::SetVirtualSize;
wxSize (wxWindowBase::*_503)() const = &wxWindowBase::GetVirtualSize;
void (wxWindowBase::*_504)(int*, int*) const = &wxWindowBase::GetVirtualSize;
void (wxWindowBase::*_505)() = &wxWindowBase::PostSizeEvent;
void (wxWindowBase::*_506)() = &wxWindowBase::PostSizeEventToParent;
bool (wxWindowBase::*_507)() = &wxWindowBase::Hide;
bool (wxWindowBase::*_508)() = &wxWindowBase::Disable;
bool (wxWindowBase::*_509)() const = &wxWindowBase::IsThisEnabled;
void (wxWindowBase::*_510)(long) = &wxWindowBase::SetWindowStyle;
long (wxWindowBase::*_511)() const = &wxWindowBase::GetWindowStyle;
bool (wxWindowBase::*_512)(int) const = &wxWindowBase::HasFlag;
long (wxWindowBase::*_513)() const = &wxWindowBase::GetExtraStyle;
bool (wxWindowBase::*_514)(int) const = &wxWindowBase::HasExtraStyle;
bool (wxWindowBase::*_515)() const = &wxWindowBase::IsFocusable;
bool (wxWindowBase::*_516)() const = &wxWindowBase::CanAcceptFocus;
bool (wxWindowBase::*_517)() const = &wxWindowBase::CanAcceptFocusFromKeyboard;
bool (wxWindowBase::*_518)(int) = &wxWindowBase::NavigateIn;
bool (wxWindowBase::*_519)(int) = &wxWindowBase::Navigate;
void (wxWindowBase::*_520)(wxWindow*) = &wxWindowBase::MoveBeforeInTabOrder;
void (wxWindowBase::*_521)(wxWindow*) = &wxWindowBase::MoveAfterInTabOrder;
wxWindow* (wxWindowBase::*_522)() const = &wxWindowBase::GetPrevSibling;
wxWindow* (wxWindowBase::*_523)() const = &wxWindowBase::GetNextSibling;
wxWindow* (wxWindowBase::*_524)() const = &wxWindowBase::GetParent;
wxWindow* (wxWindowBase::*_525)() const = &wxWindowBase::GetGrandParent;
wxEvtHandler* (wxWindowBase::*_526)() const = &wxWindowBase::GetEventHandler;
bool (wxWindowBase::*_527)(wxEvent&) = &wxWindowBase::ProcessWindowEvent;
bool (wxWindowBase::*_528)(wxEvent&) = &wxWindowBase::ProcessWindowEventLocally;
wxSize (wxWindowBase::*_529)(const wxSize&) const = &wxWindowBase::FromDIP;
wxPoint (wxWindowBase::*_530)(const wxPoint&) const = &wxWindowBase::FromDIP;
int (wxWindowBase::*_531)(int) const = &wxWindowBase::FromDIP;
wxSize (wxWindowBase::*_532)(const wxSize&) const = &wxWindowBase::ToDIP;
wxPoint (wxWindowBase::*_533)(const wxPoint&) const = &wxWindowBase::ToDIP;
int (wxWindowBase::*_534)(int) const = &wxWindowBase::ToDIP;
wxSize (wxWindowBase::*_535)(const wxSize&) const = &wxWindowBase::ConvertPixelsToDialog;
wxSize (wxWindowBase::*_536)(const wxSize&) const = &wxWindowBase::ConvertDialogToPixels;
void (wxWindowBase::*_537)(const wxRect&, bool) = &wxWindowBase::RefreshRect;
bool (wxWindowBase::*_538)() const = &wxWindowBase::IsFrozen;
bool (wxWindowBase::*_539)(int, int) const = &wxWindowBase::IsExposed;
bool (wxWindowBase::*_540)(int, int, int, int) const = &wxWindowBase::IsExposed;
bool (wxWindowBase::*_541)(const wxPoint&) const = &wxWindowBase::IsExposed;
bool (wxWindowBase::*_542)(const wxRect&) const = &wxWindowBase::IsExposed;
void (wxWindowBase::*_543)(const wxColour&) = &wxWindowBase::SetOwnBackgroundColour;
bool (wxWindowBase::*_544)() const = &wxWindowBase::InheritsBackgroundColour;
bool (wxWindowBase::*_545)() const = &wxWindowBase::UseBgCol;
bool (wxWindowBase::*_546)() const = &wxWindowBase::UseBackgroundColour;
void (wxWindowBase::*_547)(const wxColour&) = &wxWindowBase::SetOwnForegroundColour;
bool (wxWindowBase::*_548)() const = &wxWindowBase::UseForegroundColour;
bool (wxWindowBase::*_549)() const = &wxWindowBase::InheritsForegroundColour;
wxBackgroundStyle (wxWindowBase::*_550)() const = &wxWindowBase::GetBackgroundStyle;
wxCaret* (wxWindowBase::*_551)() const = &wxWindowBase::GetCaret;
void (wxWindowBase::*_552)(int*, int*) const = &wxWindowBase::ClientToScreen;
void (wxWindowBase::*_553)(int*, int*) const = &wxWindowBase::ScreenToClient;
wxPoint (wxWindowBase::*_554)(const wxPoint&) const = &wxWindowBase::ClientToScreen;
wxPoint (wxWindowBase::*_555)(const wxPoint&) const = &wxWindowBase::ScreenToClient;
wxHitTest (wxWindowBase::*_556)(int, int) const = &wxWindowBase::HitTest;
wxHitTest (wxWindowBase::*_557)(const wxPoint&) const = &wxWindowBase::HitTest;
wxBorder (wxWindowBase::*_558)() const = &wxWindowBase::GetBorder;
bool (wxWindowBase::*_559)(wxMenu*, const wxPoint&) = &wxWindowBase::PopupMenu;
bool (wxWindowBase::*_560)() = &wxWindowBase::LineUp;
bool (wxWindowBase::*_561)() = &wxWindowBase::LineDown;
bool (wxWindowBase::*_562)() = &wxWindowBase::PageUp;
bool (wxWindowBase::*_563)() = &wxWindowBase::PageDown;
void (wxWindowBase::*_564)(wxToolTip*) = &wxWindowBase::SetToolTip;
void (wxWindowBase::*_565)() = &wxWindowBase::UnsetToolTip;
wxToolTip* (wxWindowBase::*_566)() const = &wxWindowBase::GetToolTip;
wxLayoutConstraints* (wxWindowBase::*_567)() const = &wxWindowBase::GetConstraints;
wxWindowList* (wxWindowBase::*_568)() const = &wxWindowBase::GetConstraintsInvolvedIn;
void (wxWindowBase::*_569)(bool) = &wxWindowBase::SetAutoLayout;
bool (wxWindowBase::*_570)() const = &wxWindowBase::GetAutoLayout;
wxSizer* (wxWindowBase::*_571)() const = &wxWindowBase::GetSizer;
wxSizer* (wxWindowBase::*_572)() const = &wxWindowBase::GetContainingSizer;
bool (wxWindowBase::*_573)() const = &wxWindowBase::HasCustomPalette;
class _574wxWindow : public wxWindowBase { public: static constexpr int (*_574)(int) = &_574wxWindow::WidthDefault; };
auto _574Protected = _574wxWindow::_574;
class _575wxWindow : public wxWindowBase { public: static constexpr int (*_575)(int) = &_575wxWindow::HeightDefault; };
auto _575Protected = _575wxWindow::_575;
bool (wxWindow::*_576)() const = &wxWindow::IsNativeWindowWrapper;
bool (wxBrushBase::*_577)() const = &wxBrushBase::IsTransparent;
bool (wxBrushBase::*_578)() const = &wxBrushBase::IsNonTransparent;
bool (wxBrush::*_579)(const wxBrush&) const = &wxBrush::operator!=;
extern "C" { void wxBrush_wxBrush___1__S_wxBrush(void* __instance, const wxBrush& _0) { new (__instance) wxBrush(_0); } }
extern "C" { void wxBrushList_wxBrushList___1__S_wxBrushList(void* __instance, const wxBrushList& _0) { new (__instance) wxBrushList(_0); } }
extern "C" { void wxBrushList__wxBrushList(wxBrushList* __instance) { delete __instance; } };
extern "C" { void wxBrushList_wxBrushList(void* __instance) { new (__instance) wxBrushList(); } }
class wxPenInfoBase____S_wxPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStylewxPenInfo : public wxPenInfo { public: wxPenInfoBase____S_wxPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStylewxPenInfo(const wxColour& colour, wxPenStyle style): wxPenInfo(colour, style) {} };
extern "C" { void wxPenInfoBase____S_wxPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStyle(void* __instance, const wxColour& colour, wxPenStyle style) { new (__instance) wxPenInfoBase____S_wxPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStylewxPenInfo(colour, style); } }
class wxPenInfoBase____S_wxGraphicsPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStylewxGraphicsPenInfo : public wxGraphicsPenInfo { public: wxPenInfoBase____S_wxGraphicsPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStylewxGraphicsPenInfo(const wxColour& colour, wxPenStyle style): wxGraphicsPenInfo(colour, style) {} };
extern "C" { void wxPenInfoBase____S_wxGraphicsPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStyle(void* __instance, const wxColour& colour, wxPenStyle style) { new (__instance) wxPenInfoBase____S_wxGraphicsPenInfo_wxPenInfoBase___1__S_wxColour___E_wxPenStylewxGraphicsPenInfo(colour, style); } }
extern "C" { void wxPenInfo_wxPenInfo___1__S_wxColour_I___E_wxPenStyle(void* __instance, const wxColour& colour, int width, wxPenStyle style) { new (__instance) wxPenInfo(colour, width, style); } }
int (wxPenInfo::*_580)() const = &wxPenInfo::GetWidth;
extern "C" { void wxPenInfo_wxPenInfo___1__S_wxPenInfo(void* __instance, const wxPenInfo& _0) { new (__instance) wxPenInfo(_0); } }
extern "C" { void wxPenInfo__wxPenInfo(wxPenInfo* __instance) { delete __instance; } };
bool (wxPenBase::*_581)() const = &wxPenBase::IsTransparent;
bool (wxPenBase::*_582)() const = &wxPenBase::IsNonTransparent;
bool (wxPen::*_583)(const wxPen&) const = &wxPen::operator!=;
extern "C" { void wxPen_wxPen___1__S_wxPen(void* __instance, const wxPen& _0) { new (__instance) wxPen(_0); } }
extern "C" { void wxPenList_wxPenList___1__S_wxPenList(void* __instance, const wxPenList& _0) { new (__instance) wxPenList(_0); } }
extern "C" { void wxPenList__wxPenList(wxPenList* __instance) { delete __instance; } };
extern "C" { void wxPenList_wxPenList(void* __instance) { new (__instance) wxPenList(); } }
extern "C" { void wxFontMetrics_wxFontMetrics(void* __instance) { new (__instance) wxFontMetrics(); } }
extern "C" { void wxFontMetrics_wxFontMetrics___1__S_wxFontMetrics(void* __instance, const wxFontMetrics& _0) { new (__instance) wxFontMetrics(_0); } }
wxWindow* (wxDC::*_584)() const = &wxDC::GetWindow;
void* (wxDC::*_585)() const = &wxDC::GetHandle;
bool (wxDC::*_586)() const = &wxDC::IsOk;
bool (wxDC::*_587)() const = &wxDC::CanDrawBitmap;
bool (wxDC::*_588)() const = &wxDC::CanGetTextExtent;
void (wxDC::*_589)(int*, int*) const = &wxDC::GetSize;
wxSize (wxDC::*_590)() const = &wxDC::GetSize;
void (wxDC::*_591)(int*, int*) const = &wxDC::GetSizeMM;
wxSize (wxDC::*_592)() const = &wxDC::GetSizeMM;
int (wxDC::*_593)() const = &wxDC::GetDepth;
wxSize (wxDC::*_594)() const = &wxDC::GetPPI;
double (wxDC::*_595)() const = &wxDC::GetContentScaleFactor;
void (wxDC::*_596)() = &wxDC::EndDoc;
void (wxDC::*_597)() = &wxDC::StartPage;
void (wxDC::*_598)() = &wxDC::EndPage;
void (wxDC::*_599)(int, int) = &wxDC::CalcBoundingBox;
void (wxDC::*_600)() = &wxDC::ResetBoundingBox;
int (wxDC::*_601)() const = &wxDC::MinX;
int (wxDC::*_602)() const = &wxDC::MaxX;
int (wxDC::*_603)() const = &wxDC::MinY;
int (wxDC::*_604)() const = &wxDC::MaxY;
void (wxDC::*_605)(const wxPen&) = &wxDC::SetPen;
void (wxDC::*_606)(const wxBrush&) = &wxDC::SetBrush;
void (wxDC::*_607)(const wxBrush&) = &wxDC::SetBackground;
void (wxDC::*_608)(int) = &wxDC::SetBackgroundMode;
int (wxDC::*_609)() const = &wxDC::GetBackgroundMode;
void (wxDC::*_610)(const wxColour&) = &wxDC::SetTextForeground;
void (wxDC::*_611)(const wxColour&) = &wxDC::SetTextBackground;
void (wxDC::*_612)(wxRasterOperationMode) = &wxDC::SetLogicalFunction;
wxRasterOperationMode (wxDC::*_613)() const = &wxDC::GetLogicalFunction;
int (wxDC::*_614)() const = &wxDC::GetCharHeight;
int (wxDC::*_615)() const = &wxDC::GetCharWidth;
wxFontMetrics (wxDC::*_616)() const = &wxDC::GetFontMetrics;
void (wxDC::*_617)() = &wxDC::Clear;
void (wxDC::*_618)(int, int, int, int) = &wxDC::SetClippingRegion;
void (wxDC::*_619)(const wxPoint&, const wxSize&) = &wxDC::SetClippingRegion;
void (wxDC::*_620)(const wxRect&) = &wxDC::SetClippingRegion;
void (wxDC::*_621)() = &wxDC::DestroyClippingRegion;
bool (wxDC::*_622)(int*, int*, int*, int*) const = &wxDC::GetClippingBox;
bool (wxDC::*_623)(wxRect&) const = &wxDC::GetClippingBox;
int (wxDC::*_624)(int) const = &wxDC::DeviceToLogicalX;
int (wxDC::*_625)(int) const = &wxDC::DeviceToLogicalY;
int (wxDC::*_626)(int) const = &wxDC::DeviceToLogicalXRel;
int (wxDC::*_627)(int) const = &wxDC::DeviceToLogicalYRel;
int (wxDC::*_628)(int) const = &wxDC::LogicalToDeviceX;
int (wxDC::*_629)(int) const = &wxDC::LogicalToDeviceY;
int (wxDC::*_630)(int) const = &wxDC::LogicalToDeviceXRel;
int (wxDC::*_631)(int) const = &wxDC::LogicalToDeviceYRel;
void (wxDC::*_632)(wxMappingMode) = &wxDC::SetMapMode;
wxMappingMode (wxDC::*_633)() const = &wxDC::GetMapMode;
void (wxDC::*_634)(double, double) = &wxDC::SetUserScale;
void (wxDC::*_635)(double*, double*) const = &wxDC::GetUserScale;
void (wxDC::*_636)(double, double) = &wxDC::SetLogicalScale;
void (wxDC::*_637)(double*, double*) const = &wxDC::GetLogicalScale;
void (wxDC::*_638)(int, int) = &wxDC::SetLogicalOrigin;
void (wxDC::*_639)(int*, int*) const = &wxDC::GetLogicalOrigin;
wxPoint (wxDC::*_640)() const = &wxDC::GetLogicalOrigin;
void (wxDC::*_641)(int, int) = &wxDC::SetDeviceOrigin;
void (wxDC::*_642)(int*, int*) const = &wxDC::GetDeviceOrigin;
wxPoint (wxDC::*_643)() const = &wxDC::GetDeviceOrigin;
void (wxDC::*_644)(bool, bool) = &wxDC::SetAxisOrientation;
bool (wxDC::*_645)() const = &wxDC::CanUseTransformMatrix;
void (wxDC::*_646)() = &wxDC::ResetTransformMatrix;
void (wxDC::*_647)(int, int) = &wxDC::SetDeviceLocalOrigin;
bool (wxDC::*_648)(int, int, const wxColour&, wxFloodFillStyle) = &wxDC::FloodFill;
bool (wxDC::*_649)(const wxPoint&, const wxColour&, wxFloodFillStyle) = &wxDC::FloodFill;
void (wxDC::*_650)(const wxRect&, const wxColour&, const wxColour&) = &wxDC::GradientFillConcentric;
void (wxDC::*_651)(const wxRect&, const wxColour&, const wxColour&, const wxPoint&) = &wxDC::GradientFillConcentric;
void (wxDC::*_652)(const wxRect&, const wxColour&, const wxColour&, wxDirection) = &wxDC::GradientFillLinear;
bool (wxDC::*_653)(int, int, wxColour*) const = &wxDC::GetPixel;
bool (wxDC::*_654)(const wxPoint&, wxColour*) const = &wxDC::GetPixel;
void (wxDC::*_655)(int, int, int, int) = &wxDC::DrawLine;
void (wxDC::*_656)(const wxPoint&, const wxPoint&) = &wxDC::DrawLine;
void (wxDC::*_657)(int, int) = &wxDC::CrossHair;
void (wxDC::*_658)(const wxPoint&) = &wxDC::CrossHair;
void (wxDC::*_659)(int, int, int, int, int, int) = &wxDC::DrawArc;
void (wxDC::*_660)(const wxPoint&, const wxPoint&, const wxPoint&) = &wxDC::DrawArc;
void (wxDC::*_661)(int, int, int, int) = &wxDC::DrawCheckMark;
void (wxDC::*_662)(const wxRect&) = &wxDC::DrawCheckMark;
void (wxDC::*_663)(int, int, int, int, double, double) = &wxDC::DrawEllipticArc;
void (wxDC::*_664)(const wxPoint&, const wxSize&, double, double) = &wxDC::DrawEllipticArc;
void (wxDC::*_665)(int, int) = &wxDC::DrawPoint;
void (wxDC::*_666)(const wxPoint&) = &wxDC::DrawPoint;
void (wxDC::*_667)(int, const wxPoint[], int, int) = &wxDC::DrawLines;
void (wxDC::*_668)(const wxPointList*, int, int) = &wxDC::DrawLines;
void (wxDC::*_669)(int, const wxPoint[], int, int, wxPolygonFillMode) = &wxDC::DrawPolygon;
void (wxDC::*_670)(const wxPointList*, int, int, wxPolygonFillMode) = &wxDC::DrawPolygon;
void (wxDC::*_671)(int, const int[], const wxPoint[], int, int, wxPolygonFillMode) = &wxDC::DrawPolyPolygon;
void (wxDC::*_672)(int, int, int, int) = &wxDC::DrawRectangle;
void (wxDC::*_673)(const wxPoint&, const wxSize&) = &wxDC::DrawRectangle;
void (wxDC::*_674)(const wxRect&) = &wxDC::DrawRectangle;
void (wxDC::*_675)(int, int, int, int, double) = &wxDC::DrawRoundedRectangle;
void (wxDC::*_676)(const wxPoint&, const wxSize&, double) = &wxDC::DrawRoundedRectangle;
void (wxDC::*_677)(const wxRect&, double) = &wxDC::DrawRoundedRectangle;
void (wxDC::*_678)(int, int, int) = &wxDC::DrawCircle;
void (wxDC::*_679)(const wxPoint&, int) = &wxDC::DrawCircle;
void (wxDC::*_680)(int, int, int, int) = &wxDC::DrawEllipse;
void (wxDC::*_681)(const wxPoint&, const wxSize&) = &wxDC::DrawEllipse;
void (wxDC::*_682)(const wxRect&) = &wxDC::DrawEllipse;
bool (wxDC::*_683)(int, int, int, int, wxDC*, int, int, wxRasterOperationMode, bool, int, int) = &wxDC::Blit;
bool (wxDC::*_684)(const wxPoint&, const wxSize&, wxDC*, const wxPoint&, wxRasterOperationMode, bool, const wxPoint&) = &wxDC::Blit;
bool (wxDC::*_685)(int, int, int, int, wxDC*, int, int, int, int, wxRasterOperationMode, bool, int, int) = &wxDC::StretchBlit;
bool (wxDC::*_686)(const wxPoint&, const wxSize&, wxDC*, const wxPoint&, const wxSize&, wxRasterOperationMode, bool, const wxPoint&) = &wxDC::StretchBlit;
void (wxDC::*_687)(int, int, int, int, int, int) = &wxDC::DrawSpline;
void (wxDC::*_688)(int, const wxPoint[]) = &wxDC::DrawSpline;
void (wxDC::*_689)(const wxPointList*) = &wxDC::DrawSpline;
class _690wxDC : public wxDC { public: static constexpr void (wxDC::*_690)(wxWindow*) = &_690wxDC::SetWindow; };
auto _690Protected = _690wxDC::_690;
extern "C" { void wxDCTextColourChanger_wxDCTextColourChanger_____S_wxDC(void* __instance, wxDC& dc) { new (__instance) wxDCTextColourChanger(dc); } }
extern "C" { void wxDCTextColourChanger_wxDCTextColourChanger_____S_wxDC___1__S_wxColour(void* __instance, wxDC& dc, const wxColour& col) { new (__instance) wxDCTextColourChanger(dc, col); } }
extern "C" { void wxDCTextColourChanger__wxDCTextColourChanger(wxDCTextColourChanger* __instance) { delete __instance; } };
void (wxDCTextColourChanger::*_691)(const wxColour&) = &wxDCTextColourChanger::Set;
extern "C" { void wxDCTextBgColourChanger_wxDCTextBgColourChanger_____S_wxDC(void* __instance, wxDC& dc) { new (__instance) wxDCTextBgColourChanger(dc); } }
extern "C" { void wxDCTextBgColourChanger_wxDCTextBgColourChanger_____S_wxDC___1__S_wxColour(void* __instance, wxDC& dc, const wxColour& col) { new (__instance) wxDCTextBgColourChanger(dc, col); } }
extern "C" { void wxDCTextBgColourChanger__wxDCTextBgColourChanger(wxDCTextBgColourChanger* __instance) { delete __instance; } };
void (wxDCTextBgColourChanger::*_692)(const wxColour&) = &wxDCTextBgColourChanger::Set;
extern "C" { void wxDCTextBgModeChanger_wxDCTextBgModeChanger_____S_wxDC(void* __instance, wxDC& dc) { new (__instance) wxDCTextBgModeChanger(dc); } }
extern "C" { void wxDCTextBgModeChanger_wxDCTextBgModeChanger_____S_wxDC_I(void* __instance, wxDC& dc, int mode) { new (__instance) wxDCTextBgModeChanger(dc, mode); } }
extern "C" { void wxDCTextBgModeChanger__wxDCTextBgModeChanger(wxDCTextBgModeChanger* __instance) { delete __instance; } };
void (wxDCTextBgModeChanger::*_693)(int) = &wxDCTextBgModeChanger::Set;
extern "C" { void wxDCPenChanger_wxDCPenChanger_____S_wxDC___1__S_wxPen(void* __instance, wxDC& dc, const wxPen& pen) { new (__instance) wxDCPenChanger(dc, pen); } }
extern "C" { void wxDCPenChanger__wxDCPenChanger(wxDCPenChanger* __instance) { delete __instance; } };
extern "C" { void wxDCBrushChanger_wxDCBrushChanger_____S_wxDC___1__S_wxBrush(void* __instance, wxDC& dc, const wxBrush& brush) { new (__instance) wxDCBrushChanger(dc, brush); } }
extern "C" { void wxDCBrushChanger__wxDCBrushChanger(wxDCBrushChanger* __instance) { delete __instance; } };
extern "C" { void wxDCClipper_wxDCClipper_____S_wxDC___1__S_wxRect(void* __instance, wxDC& dc, const wxRect& r) { new (__instance) wxDCClipper(dc, r); } }
extern "C" { void wxDCClipper_wxDCClipper_____S_wxDC_I_I_I_I(void* __instance, wxDC& dc, int x, int y, int w, int h) { new (__instance) wxDCClipper(dc, x, y, w, h); } }
extern "C" { void wxDCClipper__wxDCClipper(wxDCClipper* __instance) { delete __instance; } };
extern "C" { void wxDCFontChanger_wxDCFontChanger_____S_wxDC(void* __instance, wxDC& dc) { new (__instance) wxDCFontChanger(dc); } }
extern "C" { void wxDCFontChanger__wxDCFontChanger(wxDCFontChanger* __instance) { delete __instance; } };
bool (wxNonOwnedWindowBase::*_694)(const wxGraphicsPath&) = &wxNonOwnedWindowBase::SetShape;
extern "C" { void wxNonOwnedWindowBase_wxNonOwnedWindowBase(void* __instance) { new (__instance) wxNonOwnedWindowBase(); } }
extern "C" { void wxNonOwnedWindow_wxNonOwnedWindow(void* __instance) { new (__instance) wxNonOwnedWindow(); } }
wxNonOwnedWindowImpl* (wxNonOwnedWindow::*_695)() const = &wxNonOwnedWindow::GetNonOwnedPeer;
extern "C" { void wxGraphicsObject_wxGraphicsObject___1__S_wxGraphicsObject(void* __instance, const wxGraphicsObject& _0) { new (__instance) wxGraphicsObject(_0); } }
extern "C" { void wxGraphicsPen_wxGraphicsPen(void* __instance) { new (__instance) wxGraphicsPen(); } }
extern "C" { void wxGraphicsPen_wxGraphicsPen___1__S_wxGraphicsPen(void* __instance, const wxGraphicsPen& _0) { new (__instance) wxGraphicsPen(_0); } }
extern "C" { void wxGraphicsBrush_wxGraphicsBrush(void* __instance) { new (__instance) wxGraphicsBrush(); } }
extern "C" { void wxGraphicsBrush_wxGraphicsBrush___1__S_wxGraphicsBrush(void* __instance, const wxGraphicsBrush& _0) { new (__instance) wxGraphicsBrush(_0); } }
extern "C" { void wxGraphicsFont_wxGraphicsFont(void* __instance) { new (__instance) wxGraphicsFont(); } }
extern "C" { void wxGraphicsFont_wxGraphicsFont___1__S_wxGraphicsFont(void* __instance, const wxGraphicsFont& _0) { new (__instance) wxGraphicsFont(_0); } }
extern "C" { void wxGraphicsBitmap_wxGraphicsBitmap(void* __instance) { new (__instance) wxGraphicsBitmap(); } }
wxGraphicsBitmapData* (wxGraphicsBitmap::*_696)() = &wxGraphicsBitmap::GetBitmapData;
extern "C" { void wxGraphicsBitmap_wxGraphicsBitmap___1__S_wxGraphicsBitmap(void* __instance, const wxGraphicsBitmap& _0) { new (__instance) wxGraphicsBitmap(_0); } }
extern "C" { void wxGraphicsMatrix_wxGraphicsMatrix(void* __instance) { new (__instance) wxGraphicsMatrix(); } }
void (wxGraphicsMatrix::*_697)(const wxGraphicsMatrix&) = &wxGraphicsMatrix::Concat;
bool (wxGraphicsMatrix::*_698)(const wxGraphicsMatrix&) const = &wxGraphicsMatrix::IsEqual;
wxGraphicsMatrixData* (wxGraphicsMatrix::*_699)() = &wxGraphicsMatrix::GetMatrixData;
extern "C" { void wxGraphicsMatrix_wxGraphicsMatrix___1__S_wxGraphicsMatrix(void* __instance, const wxGraphicsMatrix& _0) { new (__instance) wxGraphicsMatrix(_0); } }
extern "C" { void wxGraphicsGradientStop_wxGraphicsGradientStop___S_wxColour_f(void* __instance, wxColour col, float pos) { new (__instance) wxGraphicsGradientStop(col, pos); } }
void (wxGraphicsGradientStop::*_700)(const wxColour&) = &wxGraphicsGradientStop::SetColour;
float (wxGraphicsGradientStop::*_701)() const = &wxGraphicsGradientStop::GetPosition;
void (wxGraphicsGradientStop::*_702)(float) = &wxGraphicsGradientStop::SetPosition;
extern "C" { void wxGraphicsGradientStop_wxGraphicsGradientStop___1__S_wxGraphicsGradientStop(void* __instance, const wxGraphicsGradientStop& _0) { new (__instance) wxGraphicsGradientStop(_0); } }
extern "C" { void wxGraphicsGradientStop__wxGraphicsGradientStop(wxGraphicsGradientStop* __instance) { delete __instance; } };
extern "C" { void wxGraphicsGradientStops_wxGraphicsGradientStops___S_wxColour_S0(void* __instance, wxColour startCol, wxColour endCol) { new (__instance) wxGraphicsGradientStops(startCol, endCol); } }
void (wxGraphicsGradientStops::*_703)(wxColour, float) = &wxGraphicsGradientStops::Add;
unsigned long (wxGraphicsGradientStops::*_704)() const = &wxGraphicsGradientStops::GetCount;
wxGraphicsGradientStop (wxGraphicsGradientStops::*_705)(unsigned int) const = &wxGraphicsGradientStops::Item;
void (wxGraphicsGradientStops::*_706)(wxColour) = &wxGraphicsGradientStops::SetStartColour;
wxColour (wxGraphicsGradientStops::*_707)() const = &wxGraphicsGradientStops::GetStartColour;
void (wxGraphicsGradientStops::*_708)(wxColour) = &wxGraphicsGradientStops::SetEndColour;
wxColour (wxGraphicsGradientStops::*_709)() const = &wxGraphicsGradientStops::GetEndColour;
extern "C" { void wxGraphicsGradientStops_wxGraphicsGradientStops___1__S_wxGraphicsGradientStops(void* __instance, const wxGraphicsGradientStops& _0) { new (__instance) wxGraphicsGradientStops(_0); } }
extern "C" { void wxGraphicsGradientStops__wxGraphicsGradientStops(wxGraphicsGradientStops* __instance) { delete __instance; } };
extern "C" { void wxGraphicsPenInfo_wxGraphicsPenInfo___1__S_wxColour_d___E_wxPenStyle(void* __instance, const wxColour& colour, double width, wxPenStyle style) { new (__instance) wxGraphicsPenInfo(colour, width, style); } }
double (wxGraphicsPenInfo::*_710)() const = &wxGraphicsPenInfo::GetWidth;
wxGradientType (wxGraphicsPenInfo::*_711)() const = &wxGraphicsPenInfo::GetGradientType;
double (wxGraphicsPenInfo::*_712)() const = &wxGraphicsPenInfo::GetX1;
double (wxGraphicsPenInfo::*_713)() const = &wxGraphicsPenInfo::GetY1;
double (wxGraphicsPenInfo::*_714)() const = &wxGraphicsPenInfo::GetX2;
double (wxGraphicsPenInfo::*_715)() const = &wxGraphicsPenInfo::GetY2;
double (wxGraphicsPenInfo::*_716)() const = &wxGraphicsPenInfo::GetStartX;
double (wxGraphicsPenInfo::*_717)() const = &wxGraphicsPenInfo::GetStartY;
double (wxGraphicsPenInfo::*_718)() const = &wxGraphicsPenInfo::GetEndX;
double (wxGraphicsPenInfo::*_719)() const = &wxGraphicsPenInfo::GetEndY;
double (wxGraphicsPenInfo::*_720)() const = &wxGraphicsPenInfo::GetRadius;
extern "C" { void wxGraphicsPenInfo_wxGraphicsPenInfo___1__S_wxGraphicsPenInfo(void* __instance, const wxGraphicsPenInfo& _0) { new (__instance) wxGraphicsPenInfo(_0); } }
extern "C" { void wxGraphicsPenInfo__wxGraphicsPenInfo(wxGraphicsPenInfo* __instance) { delete __instance; } };
extern "C" { void wxGraphicsPath_wxGraphicsPath(void* __instance) { new (__instance) wxGraphicsPath(); } }
wxGraphicsPathData* (wxGraphicsPath::*_721)() = &wxGraphicsPath::GetPathData;
extern "C" { void wxGraphicsPath_wxGraphicsPath___1__S_wxGraphicsPath(void* __instance, const wxGraphicsPath& _0) { new (__instance) wxGraphicsPath(_0); } }
wxWindow* (wxGraphicsContext::*_722)() const = &wxGraphicsContext::GetWindow;
wxGraphicsPen (wxGraphicsContext::*_723)(const wxGraphicsPenInfo&) const = &wxGraphicsContext::CreatePen;
void (wxGraphicsContext::*_724)(double*, double*) const = &wxGraphicsContext::GetSize;
void (wxGraphicsContext::*_725)() = &wxGraphicsContext::DisableOffset;
bool (wxGraphicsContext::*_726)() = &wxGraphicsContext::OffsetEnabled;
void (wxTopLevelWindowBase::*_727)(int) = &wxTopLevelWindowBase::CentreOnScreen;
void (wxTopLevelWindowBase::*_728)(int) = &wxTopLevelWindowBase::CenterOnScreen;
wxWindow* (wxTopLevelWindowBase::*_729)() const = &wxTopLevelWindowBase::GetDefaultItem;
wxWindow* (wxTopLevelWindowBase::*_730)(wxWindow*) = &wxTopLevelWindowBase::SetDefaultItem;
wxWindow* (wxTopLevelWindowBase::*_731)() const = &wxTopLevelWindowBase::GetTmpDefaultItem;
wxWindow* (wxTopLevelWindowBase::*_732)(wxWindow*) = &wxTopLevelWindowBase::SetTmpDefaultItem;
void (wxTopLevelWindowBase::*_733)(wxSizeEvent&) = &wxTopLevelWindowBase::OnSize;
void (wxTopLevelWindowBase::*_734)(wxActivateEvent&) = &wxTopLevelWindowBase::OnActivate;
class _735wxTopLevelWindowBase : public wxTopLevelWindowBase { public: static constexpr void (wxTopLevelWindowBase::*_735)() = &_735wxTopLevelWindowBase::DoLayout; };
auto _735Protected = _735wxTopLevelWindowBase::_735;
class _736wxTopLevelWindowBase : public wxTopLevelWindowBase { public: static constexpr int (*_736)(int) = &_736wxTopLevelWindowBase::WidthDefault; };
auto _736Protected = _736wxTopLevelWindowBase::_736;
class _737wxTopLevelWindowBase : public wxTopLevelWindowBase { public: static constexpr int (*_737)(int) = &_737wxTopLevelWindowBase::HeightDefault; };
auto _737Protected = _737wxTopLevelWindowBase::_737;
extern "C" { void wxTopLevelWindowMac_wxTopLevelWindowMac(void* __instance) { new (__instance) wxTopLevelWindowMac(); } }
extern "C" { void wxTopLevelWindow_wxTopLevelWindow(void* __instance) { new (__instance) wxTopLevelWindow(); } }
void (wxFrameBase::*_738)(int) = &wxFrameBase::SetStatusBarPane;
int (wxFrameBase::*_739)() const = &wxFrameBase::GetStatusBarPane;
extern "C" { void wxFrame_wxFrame(void* __instance) { new (__instance) wxFrame(); } }
extern "C" { void wxSizerFlags_wxSizerFlags_I(void* __instance, int proportion) { new (__instance) wxSizerFlags(proportion); } }
int (*_740)() = &wxSizerFlags::GetDefaultBorder;
float (*_741)() = &wxSizerFlags::GetDefaultBorderFractional;
int (wxSizerFlags::*_742)() const = &wxSizerFlags::GetProportion;
int (wxSizerFlags::*_743)() const = &wxSizerFlags::GetFlags;
int (wxSizerFlags::*_744)() const = &wxSizerFlags::GetBorderInPixels;
extern "C" { void wxSizerFlags_wxSizerFlags___1__S_wxSizerFlags(void* __instance, const wxSizerFlags& _0) { new (__instance) wxSizerFlags(_0); } }
extern "C" { void wxSizerSpacer_wxSizerSpacer___1__S_wxSize(void* __instance, const wxSize& size) { new (__instance) wxSizerSpacer(size); } }
void (wxSizerSpacer::*_745)(const wxSize&) = &wxSizerSpacer::SetSize;
void (wxSizerSpacer::*_746)(bool) = &wxSizerSpacer::Show;
bool (wxSizerSpacer::*_747)() const = &wxSizerSpacer::IsShown;
extern "C" { void wxSizerSpacer_wxSizerSpacer___1__S_wxSizerSpacer(void* __instance, const wxSizerSpacer& _0) { new (__instance) wxSizerSpacer(_0); } }
extern "C" { void wxSizerItem_wxSizerItem____S_wxWindow___1__S_wxSizerFlags(void* __instance, wxWindow* window, const wxSizerFlags& flags) { new (__instance) wxSizerItem(window, flags); } }
extern "C" { void wxSizerItem_wxSizerItem____S_wxSizer___1__S_wxSizerFlags(void* __instance, wxSizer* sizer, const wxSizerFlags& flags) { new (__instance) wxSizerItem(sizer, flags); } }
extern "C" { void wxSizerItem_wxSizerItem_I_I___1__S_wxSizerFlags(void* __instance, int width, int height, const wxSizerFlags& flags) { new (__instance) wxSizerItem(width, height, flags); } }
void (wxSizerItem::*_748)() = &wxSizerItem::DetachSizer;
wxSize (wxSizerItem::*_749)() const = &wxSizerItem::GetMinSize;
wxSize (wxSizerItem::*_750)() const = &wxSizerItem::GetMaxSize;
void (wxSizerItem::*_751)(const wxSize&) = &wxSizerItem::SetMinSize;
void (wxSizerItem::*_752)(int, int) = &wxSizerItem::SetMinSize;
void (wxSizerItem::*_753)(int, int) = &wxSizerItem::SetInitSize;
void (wxSizerItem::*_754)(int, int) = &wxSizerItem::SetRatio;
void (wxSizerItem::*_755)(const wxSize&) = &wxSizerItem::SetRatio;
void (wxSizerItem::*_756)(float) = &wxSizerItem::SetRatio;
float (wxSizerItem::*_757)() const = &wxSizerItem::GetRatio;
void (wxSizerItem::*_758)(int) = &wxSizerItem::SetId;
int (wxSizerItem::*_759)() const = &wxSizerItem::GetId;
bool (wxSizerItem::*_760)() const = &wxSizerItem::IsWindow;
bool (wxSizerItem::*_761)() const = &wxSizerItem::IsSizer;
bool (wxSizerItem::*_762)() const = &wxSizerItem::IsSpacer;
void (wxSizerItem::*_763)(int) = &wxSizerItem::SetProportion;
int (wxSizerItem::*_764)() const = &wxSizerItem::GetProportion;
void (wxSizerItem::*_765)(int) = &wxSizerItem::SetFlag;
int (wxSizerItem::*_766)() const = &wxSizerItem::GetFlag;
void (wxSizerItem::*_767)(int) = &wxSizerItem::SetBorder;
int (wxSizerItem::*_768)() const = &wxSizerItem::GetBorder;
wxWindow* (wxSizerItem::*_769)() const = &wxSizerItem::GetWindow;
wxSizer* (wxSizerItem::*_770)() const = &wxSizerItem::GetSizer;
void (wxSizerItem::*_771)(wxObject*) = &wxSizerItem::SetUserData;
wxObject* (wxSizerItem::*_772)() const = &wxSizerItem::GetUserData;
wxPoint (wxSizerItem::*_773)() const = &wxSizerItem::GetPosition;
void (wxSizerItem::*_774)(wxWindow*) = &wxSizerItem::AssignWindow;
void (wxSizerItem::*_775)(wxSizer*) = &wxSizerItem::AssignSizer;
void (wxSizerItem::*_776)(const wxSize&) = &wxSizerItem::AssignSpacer;
void (wxSizerItem::*_777)(int, int) = &wxSizerItem::AssignSpacer;
class _778wxSizerItem : public wxSizerItem { public: static constexpr void (wxSizerItem::*_778)() = &_778wxSizerItem::Init; };
auto _778Protected = _778wxSizerItem::_778;
wxwxSizerItemListNode* (wxwxSizerItemListNode::*_779)() const = &wxwxSizerItemListNode::GetNext;
wxwxSizerItemListNode* (wxwxSizerItemListNode::*_780)() const = &wxwxSizerItemListNode::GetPrevious;
wxSizerItem* (wxwxSizerItemListNode::*_781)() const = &wxwxSizerItemListNode::GetData;
void (wxwxSizerItemListNode::*_782)(wxSizerItem*) = &wxwxSizerItemListNode::SetData;
extern "C" { void wxSizerItemList_wxSizerItemList___E_wxKeyType(void* __instance, wxKeyType keyType) { new (__instance) wxSizerItemList(keyType); } }
extern "C" { void wxSizerItemList_wxSizerItemList___1__S_wxSizerItemList(void* __instance, const wxSizerItemList& list) { new (__instance) wxSizerItemList(list); } }
wxwxSizerItemListNode* (wxSizerItemList::*_783)() const = &wxSizerItemList::GetFirst;
wxwxSizerItemListNode* (wxSizerItemList::*_784)() const = &wxSizerItemList::GetLast;
wxwxSizerItemListNode* (wxSizerItemList::*_785)(unsigned long) const = &wxSizerItemList::Item;
wxSizerItem* (wxSizerItemList::*_786)(unsigned long) const = &wxSizerItemList::operator[];
wxwxSizerItemListNode* (wxSizerItemList::*_787)(wxSizerItem*) = &wxSizerItemList::Append;
wxwxSizerItemListNode* (wxSizerItemList::*_788)(wxSizerItem*) = &wxSizerItemList::Insert;
wxwxSizerItemListNode* (wxSizerItemList::*_789)(unsigned long, wxSizerItem*) = &wxSizerItemList::Insert;
wxwxSizerItemListNode* (wxSizerItemList::*_790)(wxwxSizerItemListNode*, wxSizerItem*) = &wxSizerItemList::Insert;
wxwxSizerItemListNode* (wxSizerItemList::*_791)(long, void*) = &wxSizerItemList::Append;
wxwxSizerItemListNode* (wxSizerItemList::*_792)(void*, void*) = &wxSizerItemList::Append;
wxwxSizerItemListNode* (wxSizerItemList::*_793)(wxwxSizerItemListNode*) = &wxSizerItemList::DetachNode;
bool (wxSizerItemList::*_794)(wxwxSizerItemListNode*) = &wxSizerItemList::DeleteNode;
bool (wxSizerItemList::*_795)(wxSizerItem*) = &wxSizerItemList::DeleteObject;
void (wxSizerItemList::*_796)(wxwxSizerItemListNode*) = &wxSizerItemList::Erase;
wxwxSizerItemListNode* (wxSizerItemList::*_797)(const wxSizerItem*) const = &wxSizerItemList::Find;
bool (wxSizerItemList::*_798)(const wxSizerItem*) const = &wxSizerItemList::Member;
int (wxSizerItemList::*_799)(wxSizerItem*) const = &wxSizerItemList::IndexOf;
extern "C" { void wxSizerItemList_wxSizerItemList_l___1___S_wxSizerItem(void* __instance, unsigned long n, const wxSizerItem*& v) { new (__instance) wxSizerItemList(n, v); } }
void (wxSizerItemList::*_800)(unsigned long, wxSizerItem*) = &wxSizerItemList::resize;
unsigned long (wxSizerItemList::*_801)() const = &wxSizerItemList::size;
unsigned long (wxSizerItemList::*_802)() const = &wxSizerItemList::max_size;
bool (wxSizerItemList::*_803)() const = &wxSizerItemList::empty;
void (wxSizerItemList::*_804)(const wxSizerItem*&) = &wxSizerItemList::push_front;
void (wxSizerItemList::*_805)() = &wxSizerItemList::pop_front;
void (wxSizerItemList::*_806)(const wxSizerItem*&) = &wxSizerItemList::push_back;
void (wxSizerItemList::*_807)() = &wxSizerItemList::pop_back;
void (wxSizerItemList::*_808)(unsigned long, const wxSizerItem*&) = &wxSizerItemList::assign;
void (wxSizerItemList::*_809)() = &wxSizerItemList::clear;
void (wxSizerItemList::*_810)(const wxSizerItem*&) = &wxSizerItemList::remove;
void (wxSizerItemList::*_811)() = &wxSizerItemList::reverse;
wxSizerItem* (wxSizer::*_812)(wxWindow*, int, int, int, wxObject*) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_813)(wxSizer*, int, int, int, wxObject*) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_814)(int, int, int, int, int, wxObject*) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_815)(wxWindow*, const wxSizerFlags&) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_816)(wxSizer*, const wxSizerFlags&) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_817)(int, int, const wxSizerFlags&) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_818)(wxSizerItem*) = &wxSizer::Add;
wxSizerItem* (wxSizer::*_819)(int) = &wxSizer::AddStretchSpacer;
wxSizerItem* (wxSizer::*_820)(unsigned long, wxWindow*, int, int, int, wxObject*) = &wxSizer::Insert;
wxSizerItem* (wxSizer::*_821)(unsigned long, wxSizer*, int, int, int, wxObject*) = &wxSizer::Insert;
wxSizerItem* (wxSizer::*_822)(unsigned long, int, int, int, int, int, wxObject*) = &wxSizer::Insert;
wxSizerItem* (wxSizer::*_823)(unsigned long, wxWindow*, const wxSizerFlags&) = &wxSizer::Insert;
wxSizerItem* (wxSizer::*_824)(unsigned long, wxSizer*, const wxSizerFlags&) = &wxSizer::Insert;
wxSizerItem* (wxSizer::*_825)(unsigned long, int, int, const wxSizerFlags&) = &wxSizer::Insert;
wxSizerItem* (wxSizer::*_826)(unsigned long, int) = &wxSizer::InsertSpacer;
wxSizerItem* (wxSizer::*_827)(unsigned long, int) = &wxSizer::InsertStretchSpacer;
wxSizerItem* (wxSizer::*_828)(wxWindow*, int, int, int, wxObject*) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_829)(wxSizer*, int, int, int, wxObject*) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_830)(int, int, int, int, int, wxObject*) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_831)(wxWindow*, const wxSizerFlags&) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_832)(wxSizer*, const wxSizerFlags&) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_833)(int, int, const wxSizerFlags&) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_834)(wxSizerItem*) = &wxSizer::Prepend;
wxSizerItem* (wxSizer::*_835)(int) = &wxSizer::PrependSpacer;
wxSizerItem* (wxSizer::*_836)(int) = &wxSizer::PrependStretchSpacer;
wxWindow* (wxSizer::*_837)() const = &wxSizer::GetContainingWindow;
void (wxSizer::*_838)(int, int) = &wxSizer::SetMinSize;
void (wxSizer::*_839)(const wxSize&) = &wxSizer::SetMinSize;
bool (wxSizer::*_840)(wxWindow*, int, int) = &wxSizer::SetItemMinSize;
bool (wxSizer::*_841)(wxWindow*, const wxSize&) = &wxSizer::SetItemMinSize;
bool (wxSizer::*_842)(wxSizer*, int, int) = &wxSizer::SetItemMinSize;
bool (wxSizer::*_843)(wxSizer*, const wxSize&) = &wxSizer::SetItemMinSize;
bool (wxSizer::*_844)(unsigned long, int, int) = &wxSizer::SetItemMinSize;
bool (wxSizer::*_845)(unsigned long, const wxSize&) = &wxSizer::SetItemMinSize;
wxSize (wxSizer::*_846)() const = &wxSizer::GetSize;
wxPoint (wxSizer::*_847)() const = &wxSizer::GetPosition;
void (wxSizer::*_848)(const wxPoint&, const wxSize&) = &wxSizer::SetDimension;
void (wxSizer::*_849)(int, int, int, int) = &wxSizer::SetDimension;
unsigned long (wxSizer::*_850)() const = &wxSizer::GetItemCount;
bool (wxSizer::*_851)() const = &wxSizer::IsEmpty;
bool (wxSizer::*_852)(wxSizer*, bool) = &wxSizer::Hide;
bool (wxSizer::*_853)(wxWindow*, bool) = &wxSizer::Hide;
bool (wxSizer::*_854)(unsigned long) = &wxSizer::Hide;
void (wxSizer::*_855)(bool) = &wxSizer::Show;
void (wxGridSizer::*_856)(int) = &wxGridSizer::SetCols;
void (wxGridSizer::*_857)(int) = &wxGridSizer::SetRows;
void (wxGridSizer::*_858)(int) = &wxGridSizer::SetVGap;
void (wxGridSizer::*_859)(int) = &wxGridSizer::SetHGap;
int (wxGridSizer::*_860)() const = &wxGridSizer::GetCols;
int (wxGridSizer::*_861)() const = &wxGridSizer::GetRows;
int (wxGridSizer::*_862)() const = &wxGridSizer::GetVGap;
int (wxGridSizer::*_863)() const = &wxGridSizer::GetHGap;
int (wxGridSizer::*_864)() const = &wxGridSizer::GetEffectiveColsCount;
int (wxGridSizer::*_865)() const = &wxGridSizer::GetEffectiveRowsCount;
class _866wxGridSizer : public wxGridSizer { public: static constexpr int (wxGridSizer::*_866)() const = &_866wxGridSizer::CalcCols; };
auto _866Protected = _866wxGridSizer::_866;
class _867wxGridSizer : public wxGridSizer { public: static constexpr int (wxGridSizer::*_867)() const = &_867wxGridSizer::CalcRows; };
auto _867Protected = _867wxGridSizer::_867;
extern "C" { void wxGridSizer_wxGridSizer___1__S_wxGridSizer(void* __instance, const wxGridSizer& _0) { new (__instance) wxGridSizer(_0); } }
void (wxFlexGridSizer::*_868)(int) = &wxFlexGridSizer::SetFlexibleDirection;
int (wxFlexGridSizer::*_869)() const = &wxFlexGridSizer::GetFlexibleDirection;
void (wxFlexGridSizer::*_870)(wxFlexSizerGrowMode) = &wxFlexGridSizer::SetNonFlexibleGrowMode;
wxFlexSizerGrowMode (wxFlexGridSizer::*_871)() const = &wxFlexGridSizer::GetNonFlexibleGrowMode;
extern "C" { void wxBoxSizer_wxBoxSizer_I(void* __instance, wxOrientation orient) { new (__instance) wxBoxSizer(orient); } }
wxOrientation (wxBoxSizer::*_872)() const = &wxBoxSizer::GetOrientation;
bool (wxBoxSizer::*_873)() const = &wxBoxSizer::IsVertical;
void (wxBoxSizer::*_874)(wxOrientation) = &wxBoxSizer::SetOrientation;
class _875wxBoxSizer : public wxBoxSizer { public: static constexpr int (wxBoxSizer::*_875)(const wxSize&) const = &_875wxBoxSizer::GetSizeInMajorDir; };
auto _875Protected = _875wxBoxSizer::_875;
class _876wxBoxSizer : public wxBoxSizer { public: static constexpr int (wxBoxSizer::*_876)(const wxSize&) const = &_876wxBoxSizer::GetSizeInMinorDir; };
auto _876Protected = _876wxBoxSizer::_876;
class _877wxBoxSizer : public wxBoxSizer { public: static constexpr wxSize (wxBoxSizer::*_877)(int, int) const = &_877wxBoxSizer::SizeFromMajorMinor; };
auto _877Protected = _877wxBoxSizer::_877;
extern "C" { void wxBoxSizer_wxBoxSizer___1__S_wxBoxSizer(void* __instance, const wxBoxSizer& _0) { new (__instance) wxBoxSizer(_0); } }
wxStaticBox* (wxStaticBoxSizer::*_878)() const = &wxStaticBoxSizer::GetStaticBox;
wxButton* (wxStdDialogButtonSizer::*_879)() const = &wxStdDialogButtonSizer::GetAffirmativeButton;
wxButton* (wxStdDialogButtonSizer::*_880)() const = &wxStdDialogButtonSizer::GetApplyButton;
wxButton* (wxStdDialogButtonSizer::*_881)() const = &wxStdDialogButtonSizer::GetNegativeButton;
wxButton* (wxStdDialogButtonSizer::*_882)() const = &wxStdDialogButtonSizer::GetCancelButton;
wxButton* (wxStdDialogButtonSizer::*_883)() const = &wxStdDialogButtonSizer::GetHelpButton;
extern "C" { void wxControlContainerBase_wxControlContainerBase(void* __instance) { new (__instance) wxControlContainerBase(); } }
void (wxControlContainerBase::*_884)(wxWindow*) = &wxControlContainerBase::SetContainerWindow;
void (wxControlContainerBase::*_885)() = &wxControlContainerBase::DisableSelfFocus;
void (wxControlContainerBase::*_886)() = &wxControlContainerBase::EnableSelfFocus;
bool (wxControlContainerBase::*_887)() const = &wxControlContainerBase::AcceptsFocusRecursively;
bool (wxControlContainerBase::*_888)() const = &wxControlContainerBase::AcceptsFocusFromKeyboard;
extern "C" { void wxControlContainerBase_wxControlContainerBase___1__S_wxControlContainerBase(void* __instance, const wxControlContainerBase& _0) { new (__instance) wxControlContainerBase(_0); } }
extern "C" { void wxPanelBase_wxPanelBase(void* __instance) { new (__instance) wxPanelBase(); } }
class _889wxPanelBase : public wxNavigationEnabled<wxWindow> { public: static constexpr void (wxNavigationEnabled<wxWindow>::*_889)(wxNavigationKeyEvent&) = &_889wxPanelBase::OnNavigationKey; };
auto _889Protected = _889wxPanelBase::_889;
class _890wxPanelBase : public wxNavigationEnabled<wxWindow> { public: static constexpr void (wxNavigationEnabled<wxWindow>::*_890)(wxFocusEvent&) = &_890wxPanelBase::OnFocus; };
auto _890Protected = _890wxPanelBase::_890;
class _891wxPanelBase : public wxNavigationEnabled<wxWindow> { public: static constexpr void (wxNavigationEnabled<wxWindow>::*_891)(wxChildFocusEvent&) = &_891wxPanelBase::OnChildFocus; };
auto _891Protected = _891wxPanelBase::_891;
extern "C" { void wxPanel_wxPanel(void* __instance) { new (__instance) wxPanel(); } }
