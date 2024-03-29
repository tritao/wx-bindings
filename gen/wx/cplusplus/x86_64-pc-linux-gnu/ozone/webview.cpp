// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "ozone/webview.h"
#include "ozone/event.h"
#include "ozone/gdicmn.h"
#include "ozone/webview.h"
#include "ozone/window.h"

#include <wx/eventfilter.h>

::Ozone::WebViewHandler::WebViewHandler(::wxWebViewHandler* instance, bool ownNativeInstance)
    : __OwnsNativeInstance(ownNativeInstance)
{
    __Instance = instance;
}

::Ozone::WebViewHandler::~WebViewHandler()
{
}

Ozone::WebViewHandler::WebViewHandler(const char* scheme)
{
    __OwnsNativeInstance = true;
}

const char* Ozone::WebViewHandler::GetName() const
{
    ::wxString __ret = ((::wxWebViewHandler*)__Instance)->GetName();
    return strdup(__ret.utf8_str().data());
}

void Ozone::WebViewHandler::SetSecurityURL(const char* url)
{
    auto __arg0 = url;
    ((::wxWebViewHandler*)__Instance)->SetSecurityURL(__arg0);
}

const char* Ozone::WebViewHandler::GetSecurityURL() const
{
    ::wxString __ret = ((::wxWebViewHandler*)__Instance)->GetSecurityURL();
    return strdup(__ret.utf8_str().data());
}

Ozone::WebViewHandler::WebViewHandler(const ::Ozone::WebViewHandler& _0)
{
    __OwnsNativeInstance = true;
}

::Ozone::WebView::WebView(::wxWebView* instance, bool ownNativeInstance)
    : ::Ozone::Control((::wxControl*)instance, ownNativeInstance)
{
    __Instance = instance;

    auto __instance = (wxWebView*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

::Ozone::WebView::~WebView()
{
}

Ozone::WebView::WebView()
    : ::Ozone::Control((::wxControl*)nullptr)
{
    __OwnsNativeInstance = true;
}

bool Ozone::WebView::Create(::Ozone::Window* parent, int id, const char* url, const ::Ozone::Point& pos, const ::Ozone::Size& size, long style, const char* name)
{
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)id;
    auto __arg2 = url;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg6 = name;
    bool __ret = ((::wxWebView*)__Instance)->Create(__arg0, __arg1, __arg2, __arg3, __arg4, style, __arg6);
    return __ret;
}

::Ozone::WebView* Ozone::WebView::New(const char* backend)
{
    auto __arg0 = backend;
    ::wxWebView* __ret = ::wxWebView::New(__arg0);
    return (__ret == nullptr) ? nullptr : new Ozone::WebView((::wxWebView*)__ret);
}

::Ozone::WebView* Ozone::WebView::New(::Ozone::Window* parent, int id, const char* url, const ::Ozone::Point& pos, const ::Ozone::Size& size, const char* backend, long style, const char* name)
{
    auto __arg0 = parent ? (::wxWindow*)parent->__Instance : nullptr;
    auto __arg1 = (::wxWindowID)id;
    auto __arg2 = url;
    auto &__arg3 = *(::wxPoint*)pos.__Instance;
    auto &__arg4 = *(::wxSize*)size.__Instance;
    auto __arg5 = backend;
    auto __arg7 = name;
    ::wxWebView* __ret = ::wxWebView::New(__arg0, __arg1, __arg2, __arg3, __arg4, __arg5, style, __arg7);
    return (__ret == nullptr) ? nullptr : new Ozone::WebView((::wxWebView*)__ret);
}

bool Ozone::WebView::IsBackendAvailable(const char* backend)
{
    auto __arg0 = backend;
    bool __ret = ::wxWebView::IsBackendAvailable(__arg0);
    return __ret;
}

void Ozone::WebView::EnableContextMenu(bool enable)
{
    ((::wxWebView*)__Instance)->EnableContextMenu(enable);
}

void Ozone::WebView::EnableAccessToDevTools(bool _0)
{
    ((::wxWebView*)__Instance)->EnableAccessToDevTools(_0);
}

const char* Ozone::WebView::GetCurrentTitle() const
{
    ::wxString __ret = ((::wxWebView*)__Instance)->GetCurrentTitle();
    return strdup(__ret.utf8_str().data());
}

const char* Ozone::WebView::GetCurrentURL() const
{
    ::wxString __ret = ((::wxWebView*)__Instance)->GetCurrentURL();
    return strdup(__ret.utf8_str().data());
}

const char* Ozone::WebView::GetPageSource() const
{
    ::wxString __ret = ((::wxWebView*)__Instance)->GetPageSource();
    return strdup(__ret.utf8_str().data());
}

const char* Ozone::WebView::GetPageText() const
{
    ::wxString __ret = ((::wxWebView*)__Instance)->GetPageText();
    return strdup(__ret.utf8_str().data());
}

bool Ozone::WebView::IsBusy() const
{
    bool __ret = ((::wxWebView*)__Instance)->IsBusy();
    return __ret;
}

bool Ozone::WebView::IsContextMenuEnabled() const
{
    bool __ret = ((::wxWebView*)__Instance)->IsContextMenuEnabled();
    return __ret;
}

bool Ozone::WebView::IsAccessToDevToolsEnabled() const
{
    bool __ret = ((::wxWebView*)__Instance)->IsAccessToDevToolsEnabled();
    return __ret;
}

bool Ozone::WebView::IsEditable() const
{
    bool __ret = ((::wxWebView*)__Instance)->IsEditable();
    return __ret;
}

void Ozone::WebView::LoadURL(const char* url)
{
    auto __arg0 = url;
    ((::wxWebView*)__Instance)->LoadURL(__arg0);
}

void Ozone::WebView::Print()
{
    ((::wxWebView*)__Instance)->Print();
}

void Ozone::WebView::Reload(::Ozone::WebViewReloadFlags flags)
{
    auto __arg0 = (::wxWebViewReloadFlags)flags;
    ((::wxWebView*)__Instance)->Reload(__arg0);
}

bool Ozone::WebView::RunScript(const char* javascript, const char* output) const
{
    auto __arg0 = javascript;
    auto __arg1_str = new wxString(output);
    auto __arg1 = __arg1_str;
    bool __ret = ((::wxWebView*)__Instance)->RunScript(__arg0, __arg1);
    return __ret;
}

void Ozone::WebView::SetEditable(bool enable)
{
    ((::wxWebView*)__Instance)->SetEditable(enable);
}

void Ozone::WebView::SetPage(const char* html, const char* baseUrl)
{
    auto __arg0 = html;
    auto __arg1 = baseUrl;
    ((::wxWebView*)__Instance)->SetPage(__arg0, __arg1);
}

void Ozone::WebView::Stop()
{
    ((::wxWebView*)__Instance)->Stop();
}

bool Ozone::WebView::CanGoBack() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanGoBack();
    return __ret;
}

bool Ozone::WebView::CanGoForward() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanGoForward();
    return __ret;
}

void Ozone::WebView::GoBack()
{
    ((::wxWebView*)__Instance)->GoBack();
}

void Ozone::WebView::GoForward()
{
    ((::wxWebView*)__Instance)->GoForward();
}

void Ozone::WebView::ClearHistory()
{
    ((::wxWebView*)__Instance)->ClearHistory();
}

void Ozone::WebView::EnableHistory(bool enable)
{
    ((::wxWebView*)__Instance)->EnableHistory(enable);
}

bool Ozone::WebView::CanSetZoomType(::Ozone::WebViewZoomType type) const
{
    auto __arg0 = (::wxWebViewZoomType)type;
    bool __ret = ((::wxWebView*)__Instance)->CanSetZoomType(__arg0);
    return __ret;
}

::Ozone::WebViewZoom Ozone::WebView::GetZoom() const
{
    ::wxWebViewZoom __ret = ((::wxWebView*)__Instance)->GetZoom();
    return (::Ozone::WebViewZoom)__ret;
}

float Ozone::WebView::GetZoomFactor() const
{
    float __ret = ((::wxWebView*)__Instance)->GetZoomFactor();
    return __ret;
}

::Ozone::WebViewZoomType Ozone::WebView::GetZoomType() const
{
    ::wxWebViewZoomType __ret = ((::wxWebView*)__Instance)->GetZoomType();
    return (::Ozone::WebViewZoomType)__ret;
}

void Ozone::WebView::SetZoom(::Ozone::WebViewZoom zoom)
{
    auto __arg0 = (::wxWebViewZoom)zoom;
    ((::wxWebView*)__Instance)->SetZoom(__arg0);
}

void Ozone::WebView::SetZoomFactor(float zoom)
{
    ((::wxWebView*)__Instance)->SetZoomFactor(zoom);
}

void Ozone::WebView::SetZoomType(::Ozone::WebViewZoomType zoomType)
{
    auto __arg0 = (::wxWebViewZoomType)zoomType;
    ((::wxWebView*)__Instance)->SetZoomType(__arg0);
}

void Ozone::WebView::SelectAll()
{
    ((::wxWebView*)__Instance)->SelectAll();
}

bool Ozone::WebView::HasSelection() const
{
    bool __ret = ((::wxWebView*)__Instance)->HasSelection();
    return __ret;
}

void Ozone::WebView::DeleteSelection()
{
    ((::wxWebView*)__Instance)->DeleteSelection();
}

const char* Ozone::WebView::GetSelectedText() const
{
    ::wxString __ret = ((::wxWebView*)__Instance)->GetSelectedText();
    return strdup(__ret.utf8_str().data());
}

const char* Ozone::WebView::GetSelectedSource() const
{
    ::wxString __ret = ((::wxWebView*)__Instance)->GetSelectedSource();
    return strdup(__ret.utf8_str().data());
}

void Ozone::WebView::ClearSelection()
{
    ((::wxWebView*)__Instance)->ClearSelection();
}

bool Ozone::WebView::CanCut() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanCut();
    return __ret;
}

bool Ozone::WebView::CanCopy() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanCopy();
    return __ret;
}

bool Ozone::WebView::CanPaste() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanPaste();
    return __ret;
}

void Ozone::WebView::Cut()
{
    ((::wxWebView*)__Instance)->Cut();
}

void Ozone::WebView::Copy()
{
    ((::wxWebView*)__Instance)->Copy();
}

void Ozone::WebView::Paste()
{
    ((::wxWebView*)__Instance)->Paste();
}

bool Ozone::WebView::CanUndo() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanUndo();
    return __ret;
}

bool Ozone::WebView::CanRedo() const
{
    bool __ret = ((::wxWebView*)__Instance)->CanRedo();
    return __ret;
}

void Ozone::WebView::Undo()
{
    ((::wxWebView*)__Instance)->Undo();
}

void Ozone::WebView::Redo()
{
    ((::wxWebView*)__Instance)->Redo();
}

void* Ozone::WebView::GetNativeBackend() const
{
    void* __ret = ((::wxWebView*)__Instance)->GetNativeBackend();
    return __ret;
}

long Ozone::WebView::Find(const char* text, int flags)
{
    auto __arg0 = text;
    long __ret = ((::wxWebView*)__Instance)->Find(__arg0, flags);
    return __ret;
}

int Ozone::WebView::HandleEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();

    if(eventType == wxEVT_WEBVIEW_NAVIGATING)
    {
        if (!OnWebviewNavigating.empty())
        {
            wxWebViewEvent* _event = wxStaticCast(&event, wxWebViewEvent);
            Ozone::WebViewEvent _e(_event);
            OnWebviewNavigating(_e);
        }
    }
    else if(eventType == wxEVT_WEBVIEW_NAVIGATED)
    {
        if (!OnWebviewNavigated.empty())
        {
            wxWebViewEvent* _event = wxStaticCast(&event, wxWebViewEvent);
            Ozone::WebViewEvent _e(_event);
            OnWebviewNavigated(_e);
        }
    }
    else if(eventType == wxEVT_WEBVIEW_LOADED)
    {
        if (!OnWebviewLoaded.empty())
        {
            wxWebViewEvent* _event = wxStaticCast(&event, wxWebViewEvent);
            Ozone::WebViewEvent _e(_event);
            OnWebviewLoaded(_e);
        }
    }
    else if(eventType == wxEVT_WEBVIEW_ERROR)
    {
        if (!OnWebviewError.empty())
        {
            wxWebViewEvent* _event = wxStaticCast(&event, wxWebViewEvent);
            Ozone::WebViewEvent _e(_event);
            OnWebviewError(_e);
        }
    }
    else if(eventType == wxEVT_WEBVIEW_NEWWINDOW)
    {
        if (!OnWebviewNewwindow.empty())
        {
            wxWebViewEvent* _event = wxStaticCast(&event, wxWebViewEvent);
            Ozone::WebViewEvent _e(_event);
            OnWebviewNewwindow(_e);
        }
    }
    else if(eventType == wxEVT_WEBVIEW_TITLE_CHANGED)
    {
        if (!OnWebviewTitleChanged.empty())
        {
            wxWebViewEvent* _event = wxStaticCast(&event, wxWebViewEvent);
            Ozone::WebViewEvent _e(_event);
            OnWebviewTitleChanged(_e);
        }
    }

    return Control::HandleEvent(event);
}

::Ozone::WebViewEvent::WebViewEvent(::wxWebViewEvent* instance, bool ownNativeInstance)
    : ::Ozone::NotifyEvent((::wxNotifyEvent*)instance, ownNativeInstance)
{
    __Instance = instance;
}

::Ozone::WebViewEvent::~WebViewEvent()
{
}

Ozone::WebViewEvent::WebViewEvent()
    : ::Ozone::NotifyEvent((::wxNotifyEvent*)nullptr)
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxWebViewEvent();
}

Ozone::WebViewEvent::WebViewEvent(int type, int id, const char* url, const char* target, ::Ozone::WebViewNavigationActionFlags flags)
    : ::Ozone::NotifyEvent((::wxNotifyEvent*)nullptr)
{
    __OwnsNativeInstance = true;
    auto __arg0 = (::wxEventType)type;
    auto __arg2 = url;
    auto __arg3 = target;
    auto __arg4 = (::wxWebViewNavigationActionFlags)flags;
    __Instance = new ::wxWebViewEvent(__arg0, id, __arg2, __arg3, __arg4);
}

::Ozone::WebViewNavigationActionFlags Ozone::WebViewEvent::GetNavigationAction() const
{
    ::wxWebViewNavigationActionFlags __ret = ((::wxWebViewEvent*)__Instance)->GetNavigationAction();
    return (::Ozone::WebViewNavigationActionFlags)__ret;
}

::Ozone::Event* Ozone::WebViewEvent::Clone() const
{
    ::wxEvent* __ret = ((::wxWebViewEvent*)__Instance)->Clone();
    return (__ret == nullptr) ? nullptr : new Ozone::Event((::wxEvent*)__ret);
}

