// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

enum class EventCategory : unsigned int
{
    UI = 1,
    USER_INPUT = 2,
    SOCKET = 4,
    TIMER = 8,
    THREAD = 16,
    UNKNOWN = 32,
    CLIPBOARD = 64,
    NATIVE_EVENTS = 3,
    ALL = 127
};

enum class IdleMode : unsigned int
{
    PROCESS_ALL = 0,
    PROCESS_SPECIFIED = 1
};

enum class MouseWheelAxis : unsigned int
{
    VERTICAL = 0,
    HORIZONTAL = 1
};

enum class UpdateUIMode : unsigned int
{
    PROCESS_ALL = 0,
    PROCESS_SPECIFIED = 1
};

enum class EventPropagation : unsigned int
{
    NONE = 0,
    MAX = 2147483647
};

enum class JoystickButton
{
    BUTTON_ANY = -1,
    BUTTON1 = 1,
    BUTTON2 = 2,
    BUTTON3 = 4,
    BUTTON4 = 8
};

enum class JoystickId : unsigned int
{
    JOYSTICK1 = 0,
    JOYSTICK2 = 1
};

enum class KeyCategoryFlags : unsigned int
{
    CATEGORY_ARROW = 1,
    CATEGORY_PAGING = 2,
    CATEGORY_JUMP = 4,
    CATEGORY_TAB = 8,
    CATEGORY_CUT = 16,
    CATEGORY_NAVIGATION = 7
};

class Event : public ::Ozone::Ozone::Object
{
public:

    Event(::Ozone::Event* instance, bool ownNativeInstance = false);

    Event(int winid, int commandType);

    Event(const ::Ozone::Ozone::Event& _0);

    ~Event();

    void SetEventType(int typ);

    int GetEventType() const;

    ::Ozone::Ozone::Object* GetEventObject() const;

    void SetEventObject(::Ozone::Ozone::Object* obj);

    long GetTimestamp() const;

    void SetTimestamp(long ts);

    int GetId() const;

    void SetId(int Id);

    ::Ozone::Ozone::Object* GetEventUserData() const;

    void Skip(bool skip);

    bool GetSkipped() const;

    virtual ::Ozone::Ozone::Event* Clone() const;

    virtual ::Ozone::Ozone::EventCategory GetEventCategory() const;

    bool IsCommandEvent() const;

    bool ShouldPropagate() const;

    int StopPropagation();

    void ResumePropagation(int propagationLevel);

    ::Ozone::Ozone::EvtHandler* GetPropagatedFrom() const;

    bool WasProcessed();

    void SetWillBeProcessedAgain();

    bool WillBeProcessedAgain();

    bool ShouldProcessOnlyIn(::Ozone::Ozone::EvtHandler* h) const;

    void DidntHonourProcessOnlyIn();

    ::Ozone::Ozone::Object* get_m_callbackUserData();

    void set_m_callbackUserData(::Ozone::Ozone::Object* value);
};

class PropagateOnce
{
public:

    PropagateOnce(::Ozone::PropagateOnce* instance, bool ownNativeInstance = false);

    PropagateOnce(::Ozone::Ozone::Event& event, ::Ozone::Ozone::EvtHandler* handler);

    PropagateOnce(const ::Ozone::Ozone::PropagateOnce& _0);

    ~PropagateOnce();

protected:

    bool __OwnsNativeInstance;
};

class IdleEvent : public ::Ozone::Ozone::Event
{
public:

    IdleEvent(::Ozone::IdleEvent* instance, bool ownNativeInstance = false);

    IdleEvent();

    IdleEvent(const ::Ozone::Ozone::IdleEvent& _0);

    ~IdleEvent();

    void RequestMore(bool needMore);

    bool MoreRequested() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;

    static void SetMode(::Ozone::Ozone::IdleMode mode);

    static ::Ozone::Ozone::IdleMode GetMode();
};

class ThreadEvent : public ::Ozone::Ozone::Event
{
public:

    ThreadEvent(::Ozone::ThreadEvent* instance, bool ownNativeInstance = false);

    ThreadEvent(int eventType, int id);

    ThreadEvent(const ::Ozone::Ozone::ThreadEvent& _0);

    ~ThreadEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    virtual ::Ozone::Ozone::EventCategory GetEventCategory() const override;
};

class AsyncMethodCallEvent : public ::Ozone::Ozone::Event
{
public:

    AsyncMethodCallEvent(::Ozone::AsyncMethodCallEvent* instance, bool ownNativeInstance = false);

    AsyncMethodCallEvent(::Ozone::Ozone::Object* object);

    AsyncMethodCallEvent(const ::Ozone::Ozone::AsyncMethodCallEvent& _0);

    ~AsyncMethodCallEvent();

    virtual void Execute();
};

class CommandEvent : public ::Ozone::Ozone::Event
{
public:

    CommandEvent(::Ozone::CommandEvent* instance, bool ownNativeInstance = false);

    CommandEvent(int commandType, int winid);

    CommandEvent(const ::Ozone::Ozone::CommandEvent& _0);

    ~CommandEvent();

    const char* GetString() const;

    int GetSelection() const;

    bool IsChecked() const;

    bool IsSelection() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;

    virtual ::Ozone::Ozone::EventCategory GetEventCategory() const override;
};

class NotifyEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    NotifyEvent(::Ozone::NotifyEvent* instance, bool ownNativeInstance = false);

    NotifyEvent(int commandType, int winid);

    NotifyEvent(const ::Ozone::Ozone::NotifyEvent& _0);

    ~NotifyEvent();

    void Veto();

    void Allow();

    bool IsAllowed() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class ScrollEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    ScrollEvent(::Ozone::ScrollEvent* instance, bool ownNativeInstance = false);

    ScrollEvent(int commandType, int winid, int pos, int orient);

    ScrollEvent(const ::Ozone::Ozone::ScrollEvent& _0);

    ~ScrollEvent();

    int GetOrientation() const;

    int GetPosition() const;

    void SetOrientation(int orient);

    void SetPosition(int pos);

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class ScrollWinEvent : public ::Ozone::Ozone::Event
{
public:

    ScrollWinEvent(::Ozone::ScrollWinEvent* instance, bool ownNativeInstance = false);

    ScrollWinEvent(int commandType, int pos, int orient);

    ScrollWinEvent(const ::Ozone::Ozone::ScrollWinEvent& _0);

    ~ScrollWinEvent();

    int GetOrientation() const;

    int GetPosition() const;

    void SetOrientation(int orient);

    void SetPosition(int pos);

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class MouseEvent : public ::Ozone::Ozone::Event
{
public:

    MouseEvent(::Ozone::MouseEvent* instance, bool ownNativeInstance = false);

    MouseEvent(int mouseType);

    MouseEvent(const ::Ozone::Ozone::MouseEvent& _0);

    ~MouseEvent();

    bool IsButton() const;

    bool ButtonDown(int but) const;

    bool ButtonDClick(int but) const;

    bool ButtonUp(int but) const;

    bool Button(int but) const;

    int GetButton() const;

    bool LeftDown() const;

    bool MiddleDown() const;

    bool RightDown() const;

    bool Aux1Down() const;

    bool Aux2Down() const;

    bool LeftUp() const;

    bool MiddleUp() const;

    bool RightUp() const;

    bool Aux1Up() const;

    bool Aux2Up() const;

    bool LeftDClick() const;

    bool MiddleDClick() const;

    bool RightDClick() const;

    bool Aux1DClick() const;

    bool Aux2DClick() const;

    bool Magnify() const;

    bool Dragging() const;

    bool Moving() const;

    bool Entering() const;

    bool Leaving() const;

    int GetClickCount() const;

    ::Ozone::Ozone::Point GetLogicalPosition(const ::Ozone::Ozone::DC& dc) const;

    int GetWheelRotation() const;

    int GetWheelDelta() const;

    bool IsWheelInverted() const;

    ::Ozone::Ozone::MouseWheelAxis GetWheelAxis() const;

    int GetLinesPerAction() const;

    int GetColumnsPerAction() const;

    bool IsPageScroll() const;

    float GetMagnification() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;

    virtual ::Ozone::Ozone::EventCategory GetEventCategory() const override;

    int get_m_clickCount();

    void set_m_clickCount(int value);

    ::Ozone::Ozone::MouseWheelAxis get_m_wheelAxis();

    void set_m_wheelAxis(::Ozone::Ozone::MouseWheelAxis value);

    int get_m_wheelRotation();

    void set_m_wheelRotation(int value);

    int get_m_wheelDelta();

    void set_m_wheelDelta(int value);

    bool get_m_wheelInverted();

    void set_m_wheelInverted(bool value);

    int get_m_linesPerAction();

    void set_m_linesPerAction(int value);

    int get_m_columnsPerAction();

    void set_m_columnsPerAction(int value);

    float get_m_magnification();

    void set_m_magnification(float value);

    operator ::Ozone::Ozone::MouseEvent(int mouseType);
};

class SetCursorEvent : public ::Ozone::Ozone::Event
{
public:

    SetCursorEvent(::Ozone::SetCursorEvent* instance, bool ownNativeInstance = false);

    SetCursorEvent(int x, int y);

    SetCursorEvent(const ::Ozone::Ozone::SetCursorEvent& _0);

    ~SetCursorEvent();

    int GetX() const;

    int GetY() const;

    bool HasCursor() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class GestureEvent : public ::Ozone::Ozone::Event
{
public:

    GestureEvent(::Ozone::GestureEvent* instance, bool ownNativeInstance = false);

    GestureEvent(int winid, int type);

    GestureEvent(const ::Ozone::Ozone::GestureEvent& _0);

    ~GestureEvent();

    void SetPosition(const ::Ozone::Ozone::Point& pos);

    bool IsGestureStart() const;

    void SetGestureStart(bool isStart);

    bool IsGestureEnd() const;

    void SetGestureEnd(bool isEnd);

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class PanGestureEvent : public ::Ozone::Ozone::GestureEvent
{
public:

    PanGestureEvent(::Ozone::PanGestureEvent* instance, bool ownNativeInstance = false);

    PanGestureEvent(int winid);

    PanGestureEvent(const ::Ozone::Ozone::PanGestureEvent& _0);

    ~PanGestureEvent();

    ::Ozone::Ozone::Point GetDelta() const;

    void SetDelta(const ::Ozone::Ozone::Point& delta);

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::PanGestureEvent(int winid);
};

class ZoomGestureEvent : public ::Ozone::Ozone::GestureEvent
{
public:

    ZoomGestureEvent(::Ozone::ZoomGestureEvent* instance, bool ownNativeInstance = false);

    ZoomGestureEvent(int winid);

    ZoomGestureEvent(const ::Ozone::Ozone::ZoomGestureEvent& _0);

    ~ZoomGestureEvent();

    double GetZoomFactor() const;

    void SetZoomFactor(double zoomFactor);

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::ZoomGestureEvent(int winid);
};

class RotateGestureEvent : public ::Ozone::Ozone::GestureEvent
{
public:

    RotateGestureEvent(::Ozone::RotateGestureEvent* instance, bool ownNativeInstance = false);

    RotateGestureEvent(int winid);

    RotateGestureEvent(const ::Ozone::Ozone::RotateGestureEvent& _0);

    ~RotateGestureEvent();

    double GetRotationAngle() const;

    void SetRotationAngle(double rotationAngle);

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::RotateGestureEvent(int winid);
};

class TwoFingerTapEvent : public ::Ozone::Ozone::GestureEvent
{
public:

    TwoFingerTapEvent(::Ozone::TwoFingerTapEvent* instance, bool ownNativeInstance = false);

    TwoFingerTapEvent(int winid);

    TwoFingerTapEvent(const ::Ozone::Ozone::TwoFingerTapEvent& _0);

    ~TwoFingerTapEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::TwoFingerTapEvent(int winid);
};

class LongPressEvent : public ::Ozone::Ozone::GestureEvent
{
public:

    LongPressEvent(::Ozone::LongPressEvent* instance, bool ownNativeInstance = false);

    LongPressEvent(int winid);

    LongPressEvent(const ::Ozone::Ozone::LongPressEvent& _0);

    ~LongPressEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::LongPressEvent(int winid);
};

class PressAndTapEvent : public ::Ozone::Ozone::GestureEvent
{
public:

    PressAndTapEvent(::Ozone::PressAndTapEvent* instance, bool ownNativeInstance = false);

    PressAndTapEvent(int winid);

    PressAndTapEvent(const ::Ozone::Ozone::PressAndTapEvent& _0);

    ~PressAndTapEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::PressAndTapEvent(int winid);
};

class KeyEvent : public ::Ozone::Ozone::Event
{
public:

    KeyEvent(::Ozone::KeyEvent* instance, bool ownNativeInstance = false);

    KeyEvent(int keyType);

    KeyEvent(int eventType, const ::Ozone::Ozone::KeyEvent& evt);

    KeyEvent(const ::Ozone::Ozone::KeyEvent& _0);

    ~KeyEvent();

    int GetKeyCode() const;

    bool IsKeyInCategory(int category) const;

    wchar_t GetUnicodeKey() const;

    unsigned int GetRawKeyCode() const;

    unsigned int GetRawKeyFlags() const;

    ::Ozone::Ozone::Point GetPosition() const;

    int GetX() const;

    int GetY() const;

    void DoAllowNextEvent();

    bool IsNextEventAllowed() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;

    virtual ::Ozone::Ozone::EventCategory GetEventCategory() const override;

    int get_m_x();

    void set_m_x(int value);

    int get_m_y();

    void set_m_y(int value);

    long get_m_keyCode();

    void set_m_keyCode(long value);

    wchar_t get_m_uniChar();

    void set_m_uniChar(wchar_t value);

    unsigned int get_m_rawCode();

    void set_m_rawCode(unsigned int value);

    unsigned int get_m_rawFlags();

    void set_m_rawFlags(unsigned int value);

    operator ::Ozone::Ozone::KeyEvent(int keyType);
};

class SizeEvent : public ::Ozone::Ozone::Event
{
public:

    SizeEvent(::Ozone::SizeEvent* instance, bool ownNativeInstance = false);

    SizeEvent();

    SizeEvent(const ::Ozone::Ozone::Size& sz, int winid);

    SizeEvent(const ::Ozone::Ozone::Rect& rect, int id);

    SizeEvent(const ::Ozone::Ozone::SizeEvent& _0);

    ~SizeEvent();

    ::Ozone::Ozone::Size GetSize() const;

    void SetSize(::Ozone::Ozone::Size size);

    ::Ozone::Ozone::Rect GetRect() const;

    void SetRect(const ::Ozone::Ozone::Rect& rect);

    virtual ::Ozone::Ozone::Event* Clone() const override;

    ::Ozone::Ozone::Size get_m_size();

    void set_m_size(::Ozone::Ozone::Size value);

    ::Ozone::Ozone::Rect get_m_rect();

    void set_m_rect(::Ozone::Ozone::Rect value);
};

class MoveEvent : public ::Ozone::Ozone::Event
{
public:

    MoveEvent(::Ozone::MoveEvent* instance, bool ownNativeInstance = false);

    MoveEvent();

    MoveEvent(const ::Ozone::Ozone::Point& pos, int winid);

    MoveEvent(const ::Ozone::Ozone::Rect& rect, int id);

    MoveEvent(const ::Ozone::Ozone::MoveEvent& _0);

    ~MoveEvent();

    ::Ozone::Ozone::Point GetPosition() const;

    void SetPosition(const ::Ozone::Ozone::Point& pos);

    ::Ozone::Ozone::Rect GetRect() const;

    void SetRect(const ::Ozone::Ozone::Rect& rect);

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class PaintEvent : public ::Ozone::Ozone::Event
{
public:

    PaintEvent(::Ozone::PaintEvent* instance, bool ownNativeInstance = false);

    PaintEvent(const ::Ozone::Ozone::PaintEvent& _0);

    ~PaintEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class NcPaintEvent : public ::Ozone::Ozone::Event
{
public:

    NcPaintEvent(::Ozone::NcPaintEvent* instance, bool ownNativeInstance = false);

    NcPaintEvent(const ::Ozone::Ozone::NcPaintEvent& _0);

    ~NcPaintEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class EraseEvent : public ::Ozone::Ozone::Event
{
public:

    EraseEvent(::Ozone::EraseEvent* instance, bool ownNativeInstance = false);

    EraseEvent(int Id, ::Ozone::Ozone::DC* dc);

    EraseEvent(const ::Ozone::Ozone::EraseEvent& _0);

    ~EraseEvent();

    ::Ozone::Ozone::DC* GetDC() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class FocusEvent : public ::Ozone::Ozone::Event
{
public:

    FocusEvent(::Ozone::FocusEvent* instance, bool ownNativeInstance = false);

    FocusEvent(int type, int winid);

    FocusEvent(const ::Ozone::Ozone::FocusEvent& _0);

    ~FocusEvent();

    ::Ozone::Ozone::Window* GetWindow() const;

    void SetWindow(::Ozone::Ozone::Window* win);

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class ChildFocusEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    ChildFocusEvent(::Ozone::ChildFocusEvent* instance, bool ownNativeInstance = false);

    ChildFocusEvent(::Ozone::Ozone::Window* win);

    ChildFocusEvent(const ::Ozone::Ozone::ChildFocusEvent& _0);

    ~ChildFocusEvent();

    ::Ozone::Ozone::Window* GetWindow() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class ActivateEvent : public ::Ozone::Ozone::Event
{
public:

    enum class Reason : unsigned int
    {
        Mouse = 0,
        Unknown = 1
    };

    ActivateEvent(::Ozone::ActivateEvent* instance, bool ownNativeInstance = false);

    ActivateEvent(int type, bool active, int Id, ::Ozone::Ozone::ActivateEvent::Reason activationReason);

    ActivateEvent(const ::Ozone::Ozone::ActivateEvent& _0);

    ~ActivateEvent();

    bool GetActive() const;

    ::Ozone::Ozone::ActivateEvent::Reason GetActivationReason() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class InitDialogEvent : public ::Ozone::Ozone::Event
{
public:

    InitDialogEvent(::Ozone::InitDialogEvent* instance, bool ownNativeInstance = false);

    InitDialogEvent(int Id);

    InitDialogEvent(const ::Ozone::Ozone::InitDialogEvent& _0);

    ~InitDialogEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::InitDialogEvent(int Id);
};

class MenuEvent : public ::Ozone::Ozone::Event
{
public:

    MenuEvent(::Ozone::MenuEvent* instance, bool ownNativeInstance = false);

    MenuEvent(const ::Ozone::Ozone::MenuEvent& _0);

    ~MenuEvent();

    int GetMenuId() const;

    bool IsPopup() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class CloseEvent : public ::Ozone::Ozone::Event
{
public:

    CloseEvent(::Ozone::CloseEvent* instance, bool ownNativeInstance = false);

    CloseEvent(int type, int winid);

    CloseEvent(const ::Ozone::Ozone::CloseEvent& _0);

    ~CloseEvent();

    void SetLoggingOff(bool logOff);

    bool GetLoggingOff() const;

    void Veto(bool veto);

    void SetCanVeto(bool canVeto);

    bool CanVeto() const;

    bool GetVeto() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class ShowEvent : public ::Ozone::Ozone::Event
{
public:

    ShowEvent(::Ozone::ShowEvent* instance, bool ownNativeInstance = false);

    ShowEvent(int winid, bool show);

    ShowEvent(const ::Ozone::Ozone::ShowEvent& _0);

    ~ShowEvent();

    void SetShow(bool show);

    bool IsShown() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class IconizeEvent : public ::Ozone::Ozone::Event
{
public:

    IconizeEvent(::Ozone::IconizeEvent* instance, bool ownNativeInstance = false);

    IconizeEvent(int winid, bool iconized);

    IconizeEvent(const ::Ozone::Ozone::IconizeEvent& _0);

    ~IconizeEvent();

    bool IsIconized() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class MaximizeEvent : public ::Ozone::Ozone::Event
{
public:

    MaximizeEvent(::Ozone::MaximizeEvent* instance, bool ownNativeInstance = false);

    MaximizeEvent(int winid);

    MaximizeEvent(const ::Ozone::Ozone::MaximizeEvent& _0);

    ~MaximizeEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::MaximizeEvent(int winid);
};

class JoystickEvent : public ::Ozone::Ozone::Event
{
public:

    JoystickEvent(::Ozone::JoystickEvent* instance, bool ownNativeInstance = false);

    JoystickEvent(int type, int state, int joystick, int change);

    JoystickEvent(const ::Ozone::Ozone::JoystickEvent& _0);

    ~JoystickEvent();

    ::Ozone::Ozone::Point GetPosition() const;

    int GetZPosition() const;

    int GetButtonState() const;

    int GetButtonChange() const;

    int GetButtonOrdinal() const;

    int GetJoystick() const;

    void SetJoystick(int stick);

    void SetButtonState(int state);

    void SetButtonChange(int change);

    void SetPosition(const ::Ozone::Ozone::Point& pos);

    void SetZPosition(int zPos);

    bool IsButton() const;

    bool IsMove() const;

    bool IsZMove() const;

    bool ButtonDown(int but) const;

    bool ButtonUp(int but) const;

    bool ButtonIsDown(int but) const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class UpdateUIEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    UpdateUIEvent(::Ozone::UpdateUIEvent* instance, bool ownNativeInstance = false);

    UpdateUIEvent(int commandId);

    UpdateUIEvent(const ::Ozone::Ozone::UpdateUIEvent& _0);

    ~UpdateUIEvent();

    bool GetChecked() const;

    bool GetEnabled() const;

    bool GetShown() const;

    const char* GetText() const;

    bool GetSetText() const;

    bool GetSetChecked() const;

    bool GetSetEnabled() const;

    bool GetSetShown() const;

    void Check(bool check);

    void Enable(bool enable);

    void Show(bool show);

    void SetText(const char* text);

    bool IsCheckable() const;

    void DisallowCheck();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::UpdateUIEvent(int commandId);

    static void SetUpdateInterval(long updateInterval);

    static long GetUpdateInterval();

    static void ResetUpdateTime();

    static void SetMode(::Ozone::Ozone::UpdateUIMode mode);

    static ::Ozone::Ozone::UpdateUIMode GetMode();
};

class SysColourChangedEvent : public ::Ozone::Ozone::Event
{
public:

    SysColourChangedEvent(::Ozone::SysColourChangedEvent* instance, bool ownNativeInstance = false);

    SysColourChangedEvent();

    SysColourChangedEvent(const ::Ozone::Ozone::SysColourChangedEvent& _0);

    ~SysColourChangedEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class MouseCaptureChangedEvent : public ::Ozone::Ozone::Event
{
public:

    MouseCaptureChangedEvent(::Ozone::MouseCaptureChangedEvent* instance, bool ownNativeInstance = false);

    MouseCaptureChangedEvent(int winid, ::Ozone::Ozone::Window* gainedCapture);

    MouseCaptureChangedEvent(const ::Ozone::Ozone::MouseCaptureChangedEvent& _0);

    ~MouseCaptureChangedEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    ::Ozone::Ozone::Window* GetCapturedWindow() const;
};

class MouseCaptureLostEvent : public ::Ozone::Ozone::Event
{
public:

    MouseCaptureLostEvent(::Ozone::MouseCaptureLostEvent* instance, bool ownNativeInstance = false);

    MouseCaptureLostEvent(int winid);

    MouseCaptureLostEvent(const ::Ozone::Ozone::MouseCaptureLostEvent& _0);

    ~MouseCaptureLostEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::MouseCaptureLostEvent(int winid);
};

class DisplayChangedEvent : public ::Ozone::Ozone::Event
{
public:

    DisplayChangedEvent(::Ozone::DisplayChangedEvent* instance, bool ownNativeInstance = false);

    DisplayChangedEvent();

    DisplayChangedEvent(const ::Ozone::Ozone::DisplayChangedEvent& _0);

    ~DisplayChangedEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class DPIChangedEvent : public ::Ozone::Ozone::Event
{
public:

    DPIChangedEvent(::Ozone::DPIChangedEvent* instance, bool ownNativeInstance = false);

    explicit DPIChangedEvent(const ::Ozone::Ozone::Size& oldDPI, const ::Ozone::Ozone::Size& newDPI);

    DPIChangedEvent(const ::Ozone::Ozone::DPIChangedEvent& _0);

    ~DPIChangedEvent();

    ::Ozone::Ozone::Size GetOldDPI() const;

    ::Ozone::Ozone::Size GetNewDPI() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class PaletteChangedEvent : public ::Ozone::Ozone::Event
{
public:

    PaletteChangedEvent(::Ozone::PaletteChangedEvent* instance, bool ownNativeInstance = false);

    PaletteChangedEvent(int winid);

    PaletteChangedEvent(const ::Ozone::Ozone::PaletteChangedEvent& _0);

    ~PaletteChangedEvent();

    void SetChangedWindow(::Ozone::Ozone::Window* win);

    ::Ozone::Ozone::Window* GetChangedWindow() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::PaletteChangedEvent(int winid);
};

class QueryNewPaletteEvent : public ::Ozone::Ozone::Event
{
public:

    QueryNewPaletteEvent(::Ozone::QueryNewPaletteEvent* instance, bool ownNativeInstance = false);

    QueryNewPaletteEvent(int winid);

    QueryNewPaletteEvent(const ::Ozone::Ozone::QueryNewPaletteEvent& _0);

    ~QueryNewPaletteEvent();

    void SetPaletteRealized(bool realized);

    bool GetPaletteRealized() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;

    operator ::Ozone::Ozone::QueryNewPaletteEvent(int winid);
};

class NavigationKeyEvent : public ::Ozone::Ozone::Event
{
public:

    enum class NavigationKeyEventFlags : unsigned int
    {
        IsBackward = 0x0,
        IsForward = 0x1,
        WinChange = 0x2,
        FromTab = 0x4
    };

    NavigationKeyEvent(::Ozone::NavigationKeyEvent* instance, bool ownNativeInstance = false);

    NavigationKeyEvent();

    NavigationKeyEvent(const ::Ozone::Ozone::NavigationKeyEvent& _0);

    ~NavigationKeyEvent();

    bool GetDirection() const;

    void SetDirection(bool bForward);

    bool IsWindowChange() const;

    void SetWindowChange(bool bIs);

    bool IsFromTab() const;

    void SetFromTab(bool bIs);

    ::Ozone::Ozone::Window* GetCurrentFocus() const;

    void SetCurrentFocus(::Ozone::Ozone::Window* win);

    void SetFlags(long flags);

    virtual ::Ozone::Ozone::Event* Clone() const override;

    long get_m_flags();

    void set_m_flags(long value);

    ::Ozone::Ozone::Window* get_m_focus();

    void set_m_focus(::Ozone::Ozone::Window* value);
};

class WindowCreateEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    WindowCreateEvent(::Ozone::WindowCreateEvent* instance, bool ownNativeInstance = false);

    WindowCreateEvent(::Ozone::Ozone::Window* win);

    WindowCreateEvent(const ::Ozone::Ozone::WindowCreateEvent& _0);

    ~WindowCreateEvent();

    ::Ozone::Ozone::Window* GetWindow() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class WindowDestroyEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    WindowDestroyEvent(::Ozone::WindowDestroyEvent* instance, bool ownNativeInstance = false);

    WindowDestroyEvent(::Ozone::Ozone::Window* win);

    WindowDestroyEvent(const ::Ozone::Ozone::WindowDestroyEvent& _0);

    ~WindowDestroyEvent();

    ::Ozone::Ozone::Window* GetWindow() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class HelpEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    enum class Source : unsigned int
    {
        Unknown = 0,
        Keyboard = 1,
        HelpButton = 2
    };

    HelpEvent(::Ozone::HelpEvent* instance, bool ownNativeInstance = false);

    HelpEvent(int type, int winid, const ::Ozone::Ozone::Point& pt, ::Ozone::Ozone::HelpEvent::Source origin);

    HelpEvent(const ::Ozone::Ozone::HelpEvent& _0);

    ~HelpEvent();

    void SetPosition(const ::Ozone::Ozone::Point& pos);

    void SetLink(const char* link);

    void SetTarget(const char* target);

    virtual ::Ozone::Ozone::Event* Clone() const override;

    ::Ozone::Ozone::HelpEvent::Source GetOrigin() const;

    void SetOrigin(::Ozone::Ozone::HelpEvent::Source origin);
};

class ClipboardTextEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    ClipboardTextEvent(::Ozone::ClipboardTextEvent* instance, bool ownNativeInstance = false);

    ClipboardTextEvent(int type, int winid);

    ClipboardTextEvent(const ::Ozone::Ozone::ClipboardTextEvent& _0);

    ~ClipboardTextEvent();

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class ContextMenuEvent : public ::Ozone::Ozone::CommandEvent
{
public:

    ContextMenuEvent(::Ozone::ContextMenuEvent* instance, bool ownNativeInstance = false);

    ContextMenuEvent(int type, int winid, const ::Ozone::Ozone::Point& pt);

    ContextMenuEvent(const ::Ozone::Ozone::ContextMenuEvent& _0);

    ~ContextMenuEvent();

    void SetPosition(const ::Ozone::Ozone::Point& pos);

    virtual ::Ozone::Ozone::Event* Clone() const override;
};

class EvtHandler : public ::Ozone::Ozone::Object
{
public:

    EvtHandler(::Ozone::EvtHandler* instance, bool ownNativeInstance = false);

    EvtHandler();

    EvtHandler(const ::Ozone::Ozone::EvtHandler& _0);

    ~EvtHandler();

    ::Ozone::Ozone::EvtHandler* GetNextHandler() const;

    ::Ozone::Ozone::EvtHandler* GetPreviousHandler() const;

    virtual void SetNextHandler(::Ozone::Ozone::EvtHandler* handler);

    virtual void SetPreviousHandler(::Ozone::Ozone::EvtHandler* handler);

    void SetEvtHandlerEnabled(bool enabled);

    bool GetEvtHandlerEnabled() const;

    void Unlink();

    bool IsUnlinked() const;

    virtual bool ProcessEvent(::Ozone::Ozone::Event& event);

    bool SafelyProcessEvent(::Ozone::Ozone::Event& event);

    bool ProcessEventLocally(::Ozone::Ozone::Event& event);

    virtual void QueueEvent(::Ozone::Ozone::Event* event);

    virtual void AddPendingEvent(const ::Ozone::Ozone::Event& event);

    void ProcessPendingEvents();

    void DeletePendingEvents();

    bool ProcessThreadEvent(const ::Ozone::Ozone::Event& event);

    bool SearchDynamicEventTable(::Ozone::Ozone::Event& event);

    void ClearEventHashTable();

    void OnSinkDestroyed(::Ozone::Ozone::EvtHandler* sink);

    static void WXConsumeException();
};

extern "C" JSValue js_NewEventType(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv);
extern "C" JSValue js_PostEvent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv);
extern "C" JSValue js_QueueEvent(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv);
extern "C" JSValue js_FindFocusDescendant(JSContext* ctx, JSValueConst this_val,
    int argc, JSValueConst* argv);
