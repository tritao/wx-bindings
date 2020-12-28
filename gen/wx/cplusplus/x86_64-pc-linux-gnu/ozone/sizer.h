// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/sizer.h>
#include "ozone/gdicmn.h"
#include "ozone/object.h"
#include "ozone/window.h"

namespace Ozone
{
    class BoxSizer;
    class FlexGridSizer;
    class GridSizer;
    class Sizer;
    class SizerFlags;
    class SizerItem;
    class SizerItemList;
    class SizerSpacer;
    class StaticBoxSizer;
    class StdDialogButtonSizer;
    enum class FlexSizerGrowMode : unsigned int;
    enum class KeyType : unsigned int;
    enum class SizerOrientation : unsigned int;
}

namespace Ozone
{
    enum class FlexSizerGrowMode : unsigned int
    {
        NONE = 0,
        SPECIFIED = 1,
        ALL = 2
    };

    class SizerFlags
    {
    public:

        ::wxSizerFlags* __Instance;

        void* __ExternalInstance;

        SizerFlags(::wxSizerFlags* instance, bool ownNativeInstance = false);

        SizerFlags(int proportion);

        SizerFlags(const ::Ozone::SizerFlags& _0);

        ~SizerFlags();

        int GetProportion() const;

        int GetFlags() const;

        int GetBorderInPixels() const;

        static int GetDefaultBorder();

        static float GetDefaultBorderFractional();

    protected:

        bool __OwnsNativeInstance;
    };

    class SizerSpacer
    {
    public:

        ::wxSizerSpacer* __Instance;

        void* __ExternalInstance;

        SizerSpacer(::wxSizerSpacer* instance, bool ownNativeInstance = false);

        SizerSpacer(const ::Ozone::Size& size);

        SizerSpacer(const ::Ozone::SizerSpacer& _0);

        ~SizerSpacer();

        void SetSize(const ::Ozone::Size& size);

        void Show(bool show);

        bool IsShown() const;

    protected:

        bool __OwnsNativeInstance;
    };

    class SizerItem : public Ozone::Object
    {
    public:

        SizerItem(::wxSizerItem* instance, bool ownNativeInstance = false);

        SizerItem(::Ozone::Window* window, int proportion, int flag, int border, ::Ozone::Object* userData);

        SizerItem(::Ozone::Window* window, const ::Ozone::SizerFlags& flags);

        SizerItem(::Ozone::Sizer* sizer, int proportion, int flag, int border, ::Ozone::Object* userData);

        SizerItem(::Ozone::Sizer* sizer, const ::Ozone::SizerFlags& flags);

        SizerItem(int width, int height, int proportion, int flag, int border, ::Ozone::Object* userData);

        SizerItem(int width, int height, const ::Ozone::SizerFlags& flags);

        SizerItem();

        ~SizerItem();

        virtual void DeleteWindows();

        void DetachSizer();

        void DetachWindow();

        virtual ::Ozone::Size GetSize() const;

        virtual ::Ozone::Size CalcMin();

        virtual void SetDimension(const ::Ozone::Point& pos, const ::Ozone::Size& size);

        ::Ozone::Size GetMinSize() const;

        ::Ozone::Size GetMinSizeWithBorder() const;

        ::Ozone::Size GetMaxSize() const;

        ::Ozone::Size GetMaxSizeWithBorder() const;

        void SetMinSize(const ::Ozone::Size& size);

        void SetMinSize(int x, int y);

        void SetInitSize(int x, int y);

        void SetRatio(int width, int height);

        void SetRatio(const ::Ozone::Size& size);

        void SetRatio(float ratio);

        float GetRatio() const;

        virtual ::Ozone::Rect GetRect();

        void SetId(int id);

        int GetId() const;

        bool IsWindow() const;

        bool IsSizer() const;

        bool IsSpacer() const;

        void SetProportion(int proportion);

        int GetProportion() const;

        void SetFlag(int flag);

        int GetFlag() const;

        void SetBorder(int border);

        int GetBorder() const;

        ::Ozone::Window* GetWindow() const;

        ::Ozone::Sizer* GetSizer() const;

        ::Ozone::Size GetSpacer() const;

        bool IsShown() const;

        void Show(bool show);

        void SetUserData(::Ozone::Object* userData);

        ::Ozone::Object* GetUserData() const;

        ::Ozone::Point GetPosition() const;

        bool InformFirstDirection(int direction, int size, int availableOtherDir);

        void AssignWindow(::Ozone::Window* window);

        void AssignSizer(::Ozone::Sizer* sizer);

        void AssignSpacer(const ::Ozone::Size& size);

        void AssignSpacer(int w, int h);
    };

    class SizerItemList
    {
    public:

        ::wxSizerItemList* __Instance;

        void* __ExternalInstance;

        SizerItemList(::wxSizerItemList* instance, bool ownNativeInstance = false);

        SizerItemList(::Ozone::KeyType keyType);

        SizerItemList(const ::Ozone::SizerItemList& list);

        explicit SizerItemList(unsigned long n, ::Ozone::SizerItem*const & v);

        ~SizerItemList();

        ::Ozone::SizerItem* operator[](unsigned long index) const;

        bool DeleteObject(::Ozone::SizerItem* object);

        bool Member(const ::Ozone::SizerItem* object) const;

        int IndexOf(::Ozone::SizerItem* object) const;

        void resize(unsigned long n, ::Ozone::SizerItem* v);

        unsigned long size() const;

        unsigned long max_size() const;

        bool empty() const;

        void push_front(::Ozone::SizerItem*const & v);

        void pop_front();

        void push_back(::Ozone::SizerItem*const & v);

        void pop_back();

        void assign(unsigned long n, ::Ozone::SizerItem*const & v);

        void clear();

        void remove(::Ozone::SizerItem*const & v);

        void reverse();

    protected:

        bool __OwnsNativeInstance;
    };

    class Sizer : public Ozone::Object
    {
    public:

        Sizer(::wxSizer* instance, bool ownNativeInstance = false);

        Sizer();

        Sizer(const ::Ozone::Sizer& _0);

        ~Sizer();

        ::Ozone::SizerItem* Add(::Ozone::Window* window, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Add(::Ozone::Sizer* sizer, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Add(int width, int height, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Add(::Ozone::Window* window, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Add(::Ozone::Sizer* sizer, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Add(int width, int height, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Add(::Ozone::SizerItem* item);

        virtual ::Ozone::SizerItem* AddSpacer(int size);

        ::Ozone::SizerItem* AddStretchSpacer(int prop);

        ::Ozone::SizerItem* Insert(unsigned long index, ::Ozone::Window* window, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Insert(unsigned long index, ::Ozone::Sizer* sizer, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Insert(unsigned long index, int width, int height, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Insert(unsigned long index, ::Ozone::Window* window, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Insert(unsigned long index, ::Ozone::Sizer* sizer, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Insert(unsigned long index, int width, int height, const ::Ozone::SizerFlags& flags);

        virtual ::Ozone::SizerItem* Insert(unsigned long index, ::Ozone::SizerItem* item);

        ::Ozone::SizerItem* InsertSpacer(unsigned long index, int size);

        ::Ozone::SizerItem* InsertStretchSpacer(unsigned long index, int prop);

        ::Ozone::SizerItem* Prepend(::Ozone::Window* window, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Prepend(::Ozone::Sizer* sizer, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Prepend(int width, int height, int proportion, int flag, int border, ::Ozone::Object* userData);

        ::Ozone::SizerItem* Prepend(::Ozone::Window* window, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Prepend(::Ozone::Sizer* sizer, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Prepend(int width, int height, const ::Ozone::SizerFlags& flags);

        ::Ozone::SizerItem* Prepend(::Ozone::SizerItem* item);

        ::Ozone::SizerItem* PrependSpacer(int size);

        ::Ozone::SizerItem* PrependStretchSpacer(int prop);

        void SetContainingWindow(::Ozone::Window* window);

        ::Ozone::Window* GetContainingWindow() const;

        virtual bool Remove(::Ozone::Sizer* sizer);

        virtual bool Remove(int index);

        virtual bool Detach(::Ozone::Window* window);

        virtual bool Detach(::Ozone::Sizer* sizer);

        virtual bool Detach(int index);

        virtual bool Replace(::Ozone::Window* oldwin, ::Ozone::Window* newwin, bool recursive);

        virtual bool Replace(::Ozone::Sizer* oldsz, ::Ozone::Sizer* newsz, bool recursive);

        virtual bool Replace(unsigned long index, ::Ozone::SizerItem* newitem);

        virtual void Clear(bool delete_windows);

        virtual void DeleteWindows();

        virtual bool InformFirstDirection(int _0, int _1, int _2);

        void SetMinSize(int width, int height);

        void SetMinSize(const ::Ozone::Size& size);

        bool SetItemMinSize(::Ozone::Window* window, int width, int height);

        bool SetItemMinSize(::Ozone::Window* window, const ::Ozone::Size& size);

        bool SetItemMinSize(::Ozone::Sizer* sizer, int width, int height);

        bool SetItemMinSize(::Ozone::Sizer* sizer, const ::Ozone::Size& size);

        bool SetItemMinSize(unsigned long index, int width, int height);

        bool SetItemMinSize(unsigned long index, const ::Ozone::Size& size);

        ::Ozone::Size GetSize() const;

        ::Ozone::Point GetPosition() const;

        ::Ozone::Size GetMinSize();

        virtual ::Ozone::Size CalcMin();

        virtual void RepositionChildren(const ::Ozone::Size& _0);

        virtual void RecalcSizes();

        virtual void Layout();

        ::Ozone::Size ComputeFittingClientSize(::Ozone::Window* window);

        ::Ozone::Size ComputeFittingWindowSize(::Ozone::Window* window);

        ::Ozone::Size Fit(::Ozone::Window* window);

        void FitInside(::Ozone::Window* window);

        void SetSizeHints(::Ozone::Window* window);

        void SetDimension(const ::Ozone::Point& pos, const ::Ozone::Size& size);

        void SetDimension(int x, int y, int width, int height);

        unsigned long GetItemCount() const;

        bool IsEmpty() const;

        ::Ozone::SizerItem* GetItem(::Ozone::Window* window, bool recursive);

        ::Ozone::SizerItem* GetItem(::Ozone::Sizer* sizer, bool recursive);

        ::Ozone::SizerItem* GetItem(unsigned long index);

        ::Ozone::SizerItem* GetItemById(int id, bool recursive);

        bool Show(::Ozone::Window* window, bool show, bool recursive);

        bool Show(::Ozone::Sizer* sizer, bool show, bool recursive);

        bool Show(unsigned long index, bool show);

        bool Hide(::Ozone::Sizer* sizer, bool recursive);

        bool Hide(::Ozone::Window* window, bool recursive);

        bool Hide(unsigned long index);

        bool IsShown(::Ozone::Window* window) const;

        bool IsShown(::Ozone::Sizer* sizer) const;

        bool IsShown(unsigned long index) const;

        virtual void ShowItems(bool show);

        void Show(bool show);

        virtual bool AreAnyItemsShown() const;
    };

    class GridSizer : public Ozone::Sizer
    {
    public:

        GridSizer(::wxGridSizer* instance, bool ownNativeInstance = false);

        GridSizer(int cols, int vgap, int hgap);

        GridSizer(int cols, const ::Ozone::Size& gap);

        GridSizer(int rows, int cols, int vgap, int hgap);

        GridSizer(int rows, int cols, const ::Ozone::Size& gap);

        GridSizer(const ::Ozone::GridSizer& _0);

        ~GridSizer();

        virtual void RepositionChildren(const ::Ozone::Size& minSize) override;

        virtual ::Ozone::Size CalcMin() override;

        void SetCols(int cols);

        void SetRows(int rows);

        void SetVGap(int gap);

        void SetHGap(int gap);

        int GetCols() const;

        int GetRows() const;

        int GetVGap() const;

        int GetHGap() const;

        int GetEffectiveColsCount() const;

        int GetEffectiveRowsCount() const;

        int CalcRowsCols(int& rows, int& cols) const;
    };

    class FlexGridSizer : public Ozone::GridSizer
    {
    public:

        FlexGridSizer(::wxFlexGridSizer* instance, bool ownNativeInstance = false);

        FlexGridSizer(int cols, int vgap, int hgap);

        FlexGridSizer(int cols, const ::Ozone::Size& gap);

        FlexGridSizer(int rows, int cols, int vgap, int hgap);

        FlexGridSizer(int rows, int cols, const ::Ozone::Size& gap);

        ~FlexGridSizer();

        void AddGrowableRow(unsigned long idx, int proportion);

        void RemoveGrowableRow(unsigned long idx);

        void AddGrowableCol(unsigned long idx, int proportion);

        void RemoveGrowableCol(unsigned long idx);

        bool IsRowGrowable(unsigned long idx);

        bool IsColGrowable(unsigned long idx);

        void SetFlexibleDirection(int direction);

        int GetFlexibleDirection() const;

        void SetNonFlexibleGrowMode(::Ozone::FlexSizerGrowMode mode);

        ::Ozone::FlexSizerGrowMode GetNonFlexibleGrowMode() const;

        virtual void RepositionChildren(const ::Ozone::Size& minSize) override;

        virtual ::Ozone::Size CalcMin() override;
    };

    class BoxSizer : public Ozone::Sizer
    {
    public:

        BoxSizer(::wxBoxSizer* instance, bool ownNativeInstance = false);

        BoxSizer(::Ozone::SizerOrientation orient);

        BoxSizer(const ::Ozone::BoxSizer& _0);

        ~BoxSizer();

        virtual ::Ozone::SizerItem* AddSpacer(int size) override;

        ::Ozone::SizerOrientation GetOrientation() const;

        bool IsVertical() const;

        void SetOrientation(::Ozone::SizerOrientation orient);

        virtual ::Ozone::Size CalcMin() override;

        virtual void RepositionChildren(const ::Ozone::Size& minSize) override;

        virtual bool InformFirstDirection(int direction, int size, int availableOtherDir) override;
    };

    class StaticBoxSizer : public Ozone::BoxSizer
    {
    public:

        StaticBoxSizer(::wxStaticBoxSizer* instance, bool ownNativeInstance = false);

        StaticBoxSizer(::Ozone::SizerOrientation orient, ::Ozone::Window* win, const char* label);

        ~StaticBoxSizer();

        virtual ::Ozone::Size CalcMin() override;

        virtual void RepositionChildren(const ::Ozone::Size& minSize) override;

        virtual void ShowItems(bool show) override;

        virtual bool AreAnyItemsShown() const override;

        virtual bool Detach(::Ozone::Window* window) override;

        virtual bool Detach(::Ozone::Sizer* sizer) override;

        virtual bool Detach(int index) override;
    };

    class StdDialogButtonSizer : public Ozone::BoxSizer
    {
    public:

        StdDialogButtonSizer(::wxStdDialogButtonSizer* instance, bool ownNativeInstance = false);

        StdDialogButtonSizer();

        ~StdDialogButtonSizer();

        void Realize();
    };
}