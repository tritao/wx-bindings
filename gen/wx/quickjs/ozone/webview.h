// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

enum class WebViewReloadFlags : unsigned int
{
    WEBVIEW_RELOAD_DEFAULT = 0,
    WEBVIEW_RELOAD_NO_CACHE = 1
};

enum class WebViewZoomType : unsigned int
{
    WEBVIEW_ZOOM_TYPE_LAYOUT = 0,
    WEBVIEW_ZOOM_TYPE_TEXT = 1
};

enum class WebViewZoom : unsigned int
{
    WEBVIEW_ZOOM_TINY = 0,
    WEBVIEW_ZOOM_SMALL = 1,
    WEBVIEW_ZOOM_MEDIUM = 2,
    WEBVIEW_ZOOM_LARGE = 3,
    WEBVIEW_ZOOM_LARGEST = 4
};

enum class WebViewNavigationActionFlags : unsigned int
{
    WEBVIEW_NAV_ACTION_NONE = 0,
    WEBVIEW_NAV_ACTION_USER = 1,
    WEBVIEW_NAV_ACTION_OTHER = 2
};

enum class WebViewFindFlags : unsigned int
{
    WEBVIEW_FIND_WRAP = 0x1,
    WEBVIEW_FIND_ENTIRE_WORD = 0x2,
    WEBVIEW_FIND_MATCH_CASE = 0x4,
    WEBVIEW_FIND_HIGHLIGHT_RESULT = 0x8,
    WEBVIEW_FIND_BACKWARDS = 0x10,
    WEBVIEW_FIND_DEFAULT = 0
};

enum class WebViewNavigationError : unsigned int
{
    WEBVIEW_NAV_ERR_CONNECTION = 0,
    WEBVIEW_NAV_ERR_CERTIFICATE = 1,
    WEBVIEW_NAV_ERR_AUTH = 2,
    WEBVIEW_NAV_ERR_SECURITY = 3,
    WEBVIEW_NAV_ERR_NOT_FOUND = 4,
    WEBVIEW_NAV_ERR_REQUEST = 5,
    WEBVIEW_NAV_ERR_USER_CANCELLED = 6,
    WEBVIEW_NAV_ERR_OTHER = 7
};

class WebViewHandler
{
public:

    WebViewHandler(::Ozone::WebViewHandler* instance, bool ownNativeInstance = false);

    WebViewHandler(const char* scheme);

    WebViewHandler(const ::Ozone::Ozone::WebViewHandler& _0);

    ~WebViewHandler();

    virtual const char* GetName() const;

    virtual void SetSecurityURL(const char* url);

    virtual const char* GetSecurityURL() const;

protected:

    bool __OwnsNativeInstance;
};

class WebView
{
public:

    WebView(::Ozone::WebView* instance, bool ownNativeInstance = false);

    WebView();

    WebView(const ::Ozone::Ozone::WebView& _0);

    ~WebView();

    virtual bool Create(::Ozone::Ozone::Window* parent, int id, const char* url, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, long style, const char* name);

    virtual void EnableContextMenu(bool enable);

    virtual void EnableAccessToDevTools(bool _0);

    virtual const char* GetCurrentTitle() const;

    virtual const char* GetCurrentURL() const;

    virtual const char* GetPageSource() const;

    virtual const char* GetPageText() const;

    virtual bool IsBusy() const;

    virtual bool IsContextMenuEnabled() const;

    virtual bool IsAccessToDevToolsEnabled() const;

    virtual bool IsEditable() const;

    virtual void LoadURL(const char* url);

    virtual void Print();

    virtual void Reload(::Ozone::Ozone::WebViewReloadFlags flags);

    virtual bool RunScript(const char* javascript, const char* output) const;

    virtual void SetEditable(bool enable);

    void SetPage(const char* html, const char* baseUrl);

    virtual void Stop();

    virtual bool CanGoBack() const;

    virtual bool CanGoForward() const;

    virtual void GoBack();

    virtual void GoForward();

    virtual void ClearHistory();

    virtual void EnableHistory(bool enable);

    virtual bool CanSetZoomType(::Ozone::Ozone::WebViewZoomType type) const;

    virtual ::Ozone::Ozone::WebViewZoom GetZoom() const;

    virtual float GetZoomFactor() const;

    virtual ::Ozone::Ozone::WebViewZoomType GetZoomType() const;

    virtual void SetZoom(::Ozone::Ozone::WebViewZoom zoom);

    virtual void SetZoomFactor(float zoom);

    virtual void SetZoomType(::Ozone::Ozone::WebViewZoomType zoomType);

    virtual void SelectAll();

    virtual bool HasSelection() const;

    virtual void DeleteSelection();

    virtual const char* GetSelectedText() const;

    virtual const char* GetSelectedSource() const;

    virtual void ClearSelection();

    virtual bool CanCut() const;

    virtual bool CanCopy() const;

    virtual bool CanPaste() const;

    virtual void Cut();

    virtual void Copy();

    virtual void Paste();

    virtual bool CanUndo() const;

    virtual bool CanRedo() const;

    virtual void Undo();

    virtual void Redo();

    virtual void* GetNativeBackend() const;

    virtual long Find(const char* text, int flags);

    static ::Ozone::Ozone::WebView* New(const char* backend);

    static ::Ozone::Ozone::WebView* New(::Ozone::Ozone::Window* parent, int id, const char* url, const ::Ozone::Ozone::Point& pos, const ::Ozone::Ozone::Size& size, const char* backend, long style, const char* name);

    static bool IsBackendAvailable(const char* backend);

protected:

    bool __OwnsNativeInstance;
};

class WebViewEvent : public ::Ozone::Ozone::NotifyEvent
{
public:

    WebViewEvent(::Ozone::WebViewEvent* instance, bool ownNativeInstance = false);

    WebViewEvent();

    WebViewEvent(int type, int id, const char* url, const char* target, ::Ozone::Ozone::WebViewNavigationActionFlags flags);

    WebViewEvent(const ::Ozone::Ozone::WebViewEvent& _0);

    ~WebViewEvent();

    ::Ozone::Ozone::WebViewNavigationActionFlags GetNavigationAction() const;

    virtual ::Ozone::Ozone::Event* Clone() const override;
};
