// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "ozone/app.h"
#include "ozone/app.h"
#include "ozone/event.h"
#include "ozone/object.h"
#include "ozone/window.h"

#include <wx/eventfilter.h>

Ozone::AppConsole::AppConsole(::wxAppConsole* instance, bool ownNativeInstance)
    : Ozone::EvtHandler((::wxEvtHandler*)instance, ownNativeInstance)
{
    __Instance = instance;

    auto __instance = (wxAppConsole*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

Ozone::AppConsole::~AppConsole()
{
}

Ozone::AppConsole::AppConsole()
    : Ozone::EvtHandler((::wxEvtHandler*)nullptr)
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxAppConsole();

    auto __instance = (wxAppConsole*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

bool Ozone::AppConsole::Initialize(int& argc, wchar_t** argv)
{
    int& __arg0 = (int&)argc;
    auto __arg1 = (::wxChar**)argv;
    bool __ret = ((::wxAppConsole*)__Instance)->Initialize(__arg0, __arg1);
    argc = __arg0;
    return __ret;
}

void Ozone::AppConsole::CheckSignal()
{
    ((::wxAppConsole*)__Instance)->CheckSignal();
}

bool Ozone::AppConsole::CallOnInit()
{
    bool __ret = ((::wxAppConsole*)__Instance)->CallOnInit();
    return __ret;
}

bool Ozone::AppConsole::OnInit()
{
    bool __ret = ((::wxAppConsole*)__Instance)->OnInit();
    return __ret;
}

int Ozone::AppConsole::OnRun()
{
    int __ret = ((::wxAppConsole*)__Instance)->OnRun();
    return __ret;
}

void Ozone::AppConsole::OnLaunched()
{
    ((::wxAppConsole*)__Instance)->OnLaunched();
}

int Ozone::AppConsole::OnExit()
{
    int __ret = ((::wxAppConsole*)__Instance)->OnExit();
    return __ret;
}

void Ozone::AppConsole::CleanUp()
{
    ((::wxAppConsole*)__Instance)->CleanUp();
}

void Ozone::AppConsole::OnFatalException()
{
    ((::wxAppConsole*)__Instance)->OnFatalException();
}

void Ozone::AppConsole::Exit()
{
    ((::wxAppConsole*)__Instance)->Exit();
}

const char* Ozone::AppConsole::GetAppName() const
{
    ::wxString __ret = ((::wxAppConsole*)__Instance)->GetAppName();
    return __ret.c_str();
}

void Ozone::AppConsole::SetAppName(const char* name)
{
    auto __arg0 = name;
    ((::wxAppConsole*)__Instance)->SetAppName(__arg0);
}

const char* Ozone::AppConsole::GetAppDisplayName() const
{
    ::wxString __ret = ((::wxAppConsole*)__Instance)->GetAppDisplayName();
    return __ret.c_str();
}

void Ozone::AppConsole::SetAppDisplayName(const char* name)
{
    auto __arg0 = name;
    ((::wxAppConsole*)__Instance)->SetAppDisplayName(__arg0);
}

const char* Ozone::AppConsole::GetClassName() const
{
    ::wxString __ret = ((::wxAppConsole*)__Instance)->GetClassName();
    return __ret.c_str();
}

void Ozone::AppConsole::SetClassName(const char* name)
{
    auto __arg0 = name;
    ((::wxAppConsole*)__Instance)->SetClassName(__arg0);
}

void Ozone::AppConsole::SetVendorName(const char* name)
{
    auto __arg0 = name;
    ((::wxAppConsole*)__Instance)->SetVendorName(__arg0);
}

void Ozone::AppConsole::SetVendorDisplayName(const char* name)
{
    auto __arg0 = name;
    ((::wxAppConsole*)__Instance)->SetVendorDisplayName(__arg0);
}

void Ozone::AppConsole::SetCLocale()
{
    ((::wxAppConsole*)__Instance)->SetCLocale();
}

bool Ozone::AppConsole::IsMainLoopRunning()
{
    bool __ret = ::wxAppConsoleBase::IsMainLoopRunning();
    return __ret;
}

void Ozone::AppConsole::OnUnhandledException()
{
    ((::wxAppConsole*)__Instance)->OnUnhandledException();
}

bool Ozone::AppConsole::OnExceptionInMainLoop()
{
    bool __ret = ((::wxAppConsole*)__Instance)->OnExceptionInMainLoop();
    return __ret;
}

bool Ozone::AppConsole::StoreCurrentException()
{
    bool __ret = ((::wxAppConsole*)__Instance)->StoreCurrentException();
    return __ret;
}

void Ozone::AppConsole::RethrowStoredException()
{
    ((::wxAppConsole*)__Instance)->RethrowStoredException();
}

void Ozone::AppConsole::ProcessPendingEvents()
{
    ((::wxAppConsole*)__Instance)->ProcessPendingEvents();
}

bool Ozone::AppConsole::HasPendingEvents() const
{
    bool __ret = ((::wxAppConsole*)__Instance)->HasPendingEvents();
    return __ret;
}

void Ozone::AppConsole::SuspendProcessingOfPendingEvents()
{
    ((::wxAppConsole*)__Instance)->SuspendProcessingOfPendingEvents();
}

void Ozone::AppConsole::ResumeProcessingOfPendingEvents()
{
    ((::wxAppConsole*)__Instance)->ResumeProcessingOfPendingEvents();
}

void Ozone::AppConsole::RemovePendingEventHandler(::Ozone::EvtHandler* toRemove)
{
    auto __arg0 = toRemove ? (::wxEvtHandler*)toRemove->__Instance : nullptr;
    ((::wxAppConsole*)__Instance)->RemovePendingEventHandler(__arg0);
}

void Ozone::AppConsole::AppendPendingEventHandler(::Ozone::EvtHandler* toAppend)
{
    auto __arg0 = toAppend ? (::wxEvtHandler*)toAppend->__Instance : nullptr;
    ((::wxAppConsole*)__Instance)->AppendPendingEventHandler(__arg0);
}

void Ozone::AppConsole::DelayPendingEventHandler(::Ozone::EvtHandler* toDelay)
{
    auto __arg0 = toDelay ? (::wxEvtHandler*)toDelay->__Instance : nullptr;
    ((::wxAppConsole*)__Instance)->DelayPendingEventHandler(__arg0);
}

void Ozone::AppConsole::DeletePendingEvents()
{
    ((::wxAppConsole*)__Instance)->DeletePendingEvents();
}

void Ozone::AppConsole::ScheduleForDestruction(::Ozone::Object* object)
{
    auto __arg0 = object ? (::wxObject*)object->__Instance : nullptr;
    ((::wxAppConsole*)__Instance)->ScheduleForDestruction(__arg0);
}

bool Ozone::AppConsole::IsScheduledForDestruction(::Ozone::Object* object) const
{
    auto __arg0 = object ? (::wxObject*)object->__Instance : nullptr;
    bool __ret = ((::wxAppConsole*)__Instance)->IsScheduledForDestruction(__arg0);
    return __ret;
}

bool Ozone::AppConsole::Pending()
{
    bool __ret = ((::wxAppConsole*)__Instance)->Pending();
    return __ret;
}

bool Ozone::AppConsole::Dispatch()
{
    bool __ret = ((::wxAppConsole*)__Instance)->Dispatch();
    return __ret;
}

int Ozone::AppConsole::MainLoop()
{
    int __ret = ((::wxAppConsole*)__Instance)->MainLoop();
    return __ret;
}

void Ozone::AppConsole::ExitMainLoop()
{
    ((::wxAppConsole*)__Instance)->ExitMainLoop();
}

bool Ozone::AppConsole::Yield(bool onlyIfNeeded)
{
    bool __ret = ((::wxAppConsole*)__Instance)->Yield(onlyIfNeeded);
    return __ret;
}

void Ozone::AppConsole::WakeUpIdle()
{
    ((::wxAppConsole*)__Instance)->WakeUpIdle();
}

bool Ozone::AppConsole::ProcessIdle()
{
    bool __ret = ((::wxAppConsole*)__Instance)->ProcessIdle();
    return __ret;
}

bool Ozone::AppConsole::UsesEventLoop() const
{
    bool __ret = ((::wxAppConsole*)__Instance)->UsesEventLoop();
    return __ret;
}

void Ozone::AppConsole::OnAssertFailure(wchar_t* file, int line, wchar_t* func, wchar_t* cond, wchar_t* msg)
{
    auto __arg0 = (::wxChar*)file;
    auto __arg2 = (::wxChar*)func;
    auto __arg3 = (::wxChar*)cond;
    auto __arg4 = (::wxChar*)msg;
    ((::wxAppConsole*)__Instance)->OnAssertFailure(__arg0, line, __arg2, __arg3, __arg4);
}

void Ozone::AppConsole::OnAssert(wchar_t* file, int line, wchar_t* cond, wchar_t* msg)
{
    auto __arg0 = (::wxChar*)file;
    auto __arg2 = (::wxChar*)cond;
    auto __arg3 = (::wxChar*)msg;
    ((::wxAppConsole*)__Instance)->OnAssert(__arg0, line, __arg2, __arg3);
}

bool Ozone::AppConsole::CheckBuildOptions(const char* optionsSignature, const char* componentName)
{
    auto __arg0 = (const char*)optionsSignature;
    auto __arg1 = (const char*)componentName;
    bool __ret = ::wxAppConsoleBase::CheckBuildOptions(__arg0, __arg1);
    return __ret;
}

::Ozone::AppConsole* Ozone::AppConsole::GetInstance()
{
    ::wxAppConsole* __ret = ::wxAppConsoleBase::GetInstance();
    return (__ret == nullptr) ? nullptr : new Ozone::AppConsole((::wxAppConsole*)__ret);
}

void Ozone::AppConsole::SetInstance(::Ozone::AppConsole* app)
{
    auto __arg0 = app ? (::wxAppConsole*)app->__Instance : nullptr;
    ::wxAppConsoleBase::SetInstance(__arg0);
}

int Ozone::AppConsole::get_argc()
{
    int __ret = ((::wxAppConsole*)__Instance)->argc;
    return __ret;
}


void Ozone::AppConsole::set_argc(int value)
{
    ((::wxAppConsole*)__Instance)->argc = value;
}

Ozone::App::App(::wxApp* instance, bool ownNativeInstance)
    : Ozone::AppConsole((::wxAppConsole*)instance, ownNativeInstance)
{
    __Instance = instance;

    auto __instance = (wxApp*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

Ozone::App::~App()
{
}

Ozone::App::App()
    : Ozone::AppConsole((::wxAppConsole*)nullptr)
{
    __OwnsNativeInstance = true;
    __Instance = new ::wxApp();

    auto __instance = (wxApp*) __Instance;
    if (__instance && __instance->GetClientData() == nullptr)
        __instance->SetClientData(this);
}

bool Ozone::App::SetNativeTheme(const char* theme)
{
    auto __arg0 = theme;
    bool __ret = ((::wxApp*)__Instance)->SetNativeTheme(__arg0);
    return __ret;
}

bool Ozone::App::OnInitGui()
{
    bool __ret = ((::wxApp*)__Instance)->OnInitGui();
    return __ret;
}

void Ozone::App::WakeUpIdle()
{
    ((::wxApp*)__Instance)->WakeUpIdle();
}

bool Ozone::App::Initialize(int& argc, wchar_t** argv)
{
    int& __arg0 = (int&)argc;
    auto __arg1 = (::wxChar**)argv;
    bool __ret = ((::wxApp*)__Instance)->Initialize(__arg0, __arg1);
    argc = __arg0;
    return __ret;
}

void Ozone::App::CleanUp()
{
    ((::wxApp*)__Instance)->CleanUp();
}

void Ozone::App::OnAssertFailure(wchar_t* file, int line, wchar_t* func, wchar_t* cond, wchar_t* msg)
{
    auto __arg0 = (::wxChar*)file;
    auto __arg2 = (::wxChar*)func;
    auto __arg3 = (::wxChar*)cond;
    auto __arg4 = (::wxChar*)msg;
    ((::wxApp*)__Instance)->OnAssertFailure(__arg0, line, __arg2, __arg3, __arg4);
}

void* Ozone::App::GetXVisualInfo()
{
    void* __ret = ((::wxApp*)__Instance)->GetXVisualInfo();
    return __ret;
}

bool Ozone::App::EventsPending()
{
    bool __ret = ((::wxApp*)__Instance)->EventsPending();
    return __ret;
}

bool Ozone::App::DoIdle()
{
    bool __ret = ((::wxApp*)__Instance)->DoIdle();
    return __ret;
}

int Ozone::App::OnRun()
{
    int __ret = ((::wxApp*)__Instance)->OnRun();
    return __ret;
}

int Ozone::App::OnExit()
{
    int __ret = ((::wxApp*)__Instance)->OnExit();
    return __ret;
}

bool Ozone::App::SafeYield(::Ozone::Window* win, bool onlyIfNeeded)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    bool __ret = ((::wxApp*)__Instance)->SafeYield(__arg0, onlyIfNeeded);
    return __ret;
}

bool Ozone::App::SafeYieldFor(::Ozone::Window* win, long eventsToProcess)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    bool __ret = ((::wxApp*)__Instance)->SafeYieldFor(__arg0, eventsToProcess);
    return __ret;
}

bool Ozone::App::ProcessIdle()
{
    bool __ret = ((::wxApp*)__Instance)->ProcessIdle();
    return __ret;
}

bool Ozone::App::UsesEventLoop() const
{
    bool __ret = ((::wxApp*)__Instance)->UsesEventLoop();
    return __ret;
}

bool Ozone::App::IsActive() const
{
    bool __ret = ((::wxApp*)__Instance)->IsActive();
    return __ret;
}

void Ozone::App::SetTopWindow(::Ozone::Window* win)
{
    auto __arg0 = win ? (::wxWindow*)win->__Instance : nullptr;
    ((::wxApp*)__Instance)->SetTopWindow(__arg0);
}

::Ozone::Window* Ozone::App::GetTopWindow() const
{
    ::wxWindow* __ret = ((::wxApp*)__Instance)->GetTopWindow();
    return (__ret == nullptr) ? nullptr : new Ozone::Window((::wxWindow*)__ret);
}

void Ozone::App::SetExitOnFrameDelete(bool flag)
{
    ((::wxApp*)__Instance)->SetExitOnFrameDelete(flag);
}

bool Ozone::App::GetExitOnFrameDelete() const
{
    bool __ret = ((::wxApp*)__Instance)->GetExitOnFrameDelete();
    return __ret;
}

void Ozone::App::SetUseBestVisual(bool flag, bool forceTrueColour)
{
    ((::wxApp*)__Instance)->SetUseBestVisual(flag, forceTrueColour);
}

bool Ozone::App::GetUseBestVisual() const
{
    bool __ret = ((::wxApp*)__Instance)->GetUseBestVisual();
    return __ret;
}

void Ozone::App::SetPrintMode(int _0)
{
    ((::wxApp*)__Instance)->SetPrintMode(_0);
}

int Ozone::App::GetPrintMode() const
{
    int __ret = ((::wxApp*)__Instance)->GetPrintMode();
    return __ret;
}

void Ozone::App::SetActive(bool isActive, ::Ozone::Window* lastFocus)
{
    auto __arg1 = lastFocus ? (::wxWindow*)lastFocus->__Instance : nullptr;
    ((::wxApp*)__Instance)->SetActive(isActive, __arg1);
}

int Ozone::App::HandleEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();

    if(eventType == wxEVT_QUERY_END_SESSION)
    {
        if (!OnQueryEndSession.empty())
        {
            wxCloseEvent* _event = wxStaticCast(&event, wxCloseEvent);
            Ozone::CloseEvent _e(_event);
            OnQueryEndSession(_e);
        }
    }
    else if(eventType == wxEVT_END_SESSION)
    {
        if (!OnEndSession.empty())
        {
            wxCloseEvent* _event = wxStaticCast(&event, wxCloseEvent);
            Ozone::CloseEvent _e(_event);
            OnEndSession(_e);
        }
    }
    else if(eventType == wxEVT_ACTIVATE_APP)
    {
        if (!OnActivateApp.empty())
        {
            wxActivateEvent* _event = wxStaticCast(&event, wxActivateEvent);
            Ozone::ActivateEvent _e(_event);
            OnActivateApp(_e);
        }
    }
    else if(eventType == wxEVT_HIBERNATE)
    {
        if (!OnHibernate.empty())
        {
            wxActivateEvent* _event = wxStaticCast(&event, wxActivateEvent);
            Ozone::ActivateEvent _e(_event);
            OnHibernate(_e);
        }
    }
    else if(eventType == wxEVT_IDLE)
    {
        if (!OnIdle.empty())
        {
            wxIdleEvent* _event = wxStaticCast(&event, wxIdleEvent);
            Ozone::IdleEvent _e(_event);
            OnIdle(_e);
        }
    }

    return AppConsole::HandleEvent(event);
}

void (::Ozone::Exit)()
{
    ::wxExit();
}

void (::Ozone::WakeUpIdle)()
{
    ::wxWakeUpIdle();
}
