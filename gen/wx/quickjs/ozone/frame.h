// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

enum class FrameFlags : signed char
{
    CENTRE = 1,
    FRAME_NO_TASKBAR = 2,
    FRAME_TOOL_WINDOW = 4,
    FRAME_FLOAT_ON_PARENT = 8
};

class Frame : public ::Ozone::Ozone::TopLevelWindow
{
public:

    Frame(::Ozone::Frame* instance, bool ownNativeInstance = false);

    Frame();

    Frame(::Ozone::Ozone::Window* parent, int id, const char* title, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, ::Ozone::Ozone::FrameStyle style, const char* name);

    Frame(const ::Ozone::Ozone::Frame& _0);

    ~Frame();

    bool Create(::Ozone::Ozone::Window* parent, int id, const char* title, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

    virtual bool ShowFullScreen(bool show, long style) override;

    virtual ::Ozone::Ozone::Point GetClientAreaOrigin() const override;

    virtual bool SendIdleEvents(::Ozone::Ozone::IdleEvent& event) override;

    ::Ozone::Ozone::Frame* New(::Ozone::Ozone::Window* parent, int winid, const char* title, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

    bool ProcessCommand(int winid);

    virtual void SetStatusText(const char* text, int number);

    virtual void SetStatusWidths(int n, int widths_field[]);

    void PushStatusText(const char* text, int number);

    void PopStatusText(int number);

    void SetStatusBarPane(int n);

    int GetStatusBarPane() const;

    virtual void UpdateWindowUI(long flags) override;

    virtual void OnInternalIdle() override;

    virtual void DoGiveHelp(const char* text, bool show);

    virtual bool IsClientAreaChild(const ::Ozone::Ozone::Window* child) const override;
};
