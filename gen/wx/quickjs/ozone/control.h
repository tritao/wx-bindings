// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

class Control : public ::Ozone::Ozone::Window
{
public:

    Control(::Ozone::Control* instance, bool ownNativeInstance = false);

    Control();

    Control(const ::Ozone::Ozone::Control& _0);

    ~Control();

    virtual ::Ozone::Ozone::VisualAttributes GetDefaultAttributes() const override;

    int GetAlignment() const;

    virtual void SetLabel(const char* label) override;

    virtual const char* GetLabel() const override;

    virtual void SetLabelText(const char* text);

    virtual const char* GetLabelText() const;

    bool SetLabelMarkup(const char* markup);

    virtual bool ShouldInheritColours() const override;

    virtual void Command(::Ozone::Ozone::CommandEvent& event);

    virtual void DoUpdateWindowUI(::Ozone::Ozone::UpdateUIEvent& event) override;

    ::Ozone::Ozone::Size GetSizeFromTextSize(int xlen, int ylen) const;

    ::Ozone::Ozone::Size GetSizeFromTextSize(const ::Ozone::Ozone::Size& tsize) const;

    static const char* GetLabelText(const char* label);

    static const char* RemoveMnemonics(const char* str);

    static const char* EscapeMnemonics(const char* str);

    static const char* Ellipsize(const char* label, const ::Ozone::Ozone::DC& dc, ::Ozone::Ozone::EllipsizeMode mode, int maxWidth, int flags);

    static int FindAccelIndex(const char* label, const char* labelOnly);

    static ::Ozone::Ozone::VisualAttributes GetCompositeControlsDefaultAttributes(::Ozone::Ozone::WindowVariant variant);
};
