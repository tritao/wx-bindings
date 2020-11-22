// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include "FastDelegates.h"
#include <wx/app.h>
#include "wx/event.h"

namespace wxSharp
{
    class App;
    class AppConsole;
    class Event;
    class Object;
    class Window;
}

namespace wxSharp
{
    class AppConsole : public wxSharp::EvtHandler
    {
    public:

        AppConsole(::wxAppConsole* instance);

        AppConsole();

        ~AppConsole();

        virtual bool Initialize(int& argc, wchar_t** argv);

        void CheckSignal();

        virtual bool CallOnInit();

        virtual bool OnInit();

        virtual int OnRun();

        virtual void OnLaunched();

        virtual int OnExit();

        virtual void CleanUp();

        virtual void OnFatalException();

        virtual void Exit();

        const char* GetAppName() const;

        void SetAppName(const char* name);

        const char* GetAppDisplayName() const;

        void SetAppDisplayName(const char* name);

        const char* GetClassName() const;

        void SetClassName(const char* name);

        void SetVendorName(const char* name);

        void SetVendorDisplayName(const char* name);

        virtual void SetCLocale();

        virtual void OnUnhandledException();

        virtual bool OnExceptionInMainLoop();

        virtual bool StoreCurrentException();

        virtual void RethrowStoredException();

        virtual void ProcessPendingEvents();

        bool HasPendingEvents() const;

        void SuspendProcessingOfPendingEvents();

        void ResumeProcessingOfPendingEvents();

        void RemovePendingEventHandler(::wxSharp::EvtHandler* toRemove);

        void AppendPendingEventHandler(::wxSharp::EvtHandler* toAppend);

        void DelayPendingEventHandler(::wxSharp::EvtHandler* toDelay);

        void DeletePendingEvents();

        void ScheduleForDestruction(::wxSharp::Object* object);

        bool IsScheduledForDestruction(::wxSharp::Object* object) const;

        virtual bool Pending();

        virtual bool Dispatch();

        virtual int MainLoop();

        virtual void ExitMainLoop();

        bool Yield(bool onlyIfNeeded);

        virtual void WakeUpIdle();

        virtual bool ProcessIdle();

        virtual bool UsesEventLoop() const;

        virtual void OnAssertFailure(wchar_t* file, int line, wchar_t* func, wchar_t* cond, wchar_t* msg);

        virtual void OnAssert(wchar_t* file, int line, wchar_t* cond, wchar_t* msg);

        int get_argc();

        void set_argc(int value);

        static bool IsMainLoopRunning();

        static bool CheckBuildOptions(const char* optionsSignature, const char* componentName);

        static ::wxSharp::AppConsole* GetInstance();

        static void SetInstance(::wxSharp::AppConsole* app);
    };

    class App : public wxSharp::AppConsole
    {
    public:

        App(::wxApp* instance);

        App();

        ~App();

        fastdelegate::FastDelegate<void (::wxSharp::CloseEvent&)> OnQueryEndSession;

        fastdelegate::FastDelegate<void (::wxSharp::CloseEvent&)> OnEndSession;

        fastdelegate::FastDelegate<void (::wxSharp::ActivateEvent&)> OnActivateApp;

        fastdelegate::FastDelegate<void (::wxSharp::ActivateEvent&)> OnHibernate;

        fastdelegate::FastDelegate<void (::wxSharp::IdleEvent&)> OnIdle;

        virtual bool SetNativeTheme(const char* theme);

        virtual bool OnInitGui();

        virtual void WakeUpIdle() override;

        virtual bool Initialize(int& argc, wchar_t** argv) override;

        virtual void CleanUp() override;

        virtual void OnAssertFailure(wchar_t* file, int line, wchar_t* func, wchar_t* cond, wchar_t* msg) override;

        virtual void* GetXVisualInfo();

        bool EventsPending();

        bool DoIdle();

        virtual int OnRun() override;

        virtual int OnExit() override;

        virtual bool SafeYield(::wxSharp::Window* win, bool onlyIfNeeded);

        virtual bool SafeYieldFor(::wxSharp::Window* win, long eventsToProcess);

        virtual bool ProcessIdle() override;

        virtual bool UsesEventLoop() const override;

        virtual bool IsActive() const;

        void SetTopWindow(::wxSharp::Window* win);

        virtual ::wxSharp::Window* GetTopWindow() const;

        void SetExitOnFrameDelete(bool flag);

        bool GetExitOnFrameDelete() const;

        void SetUseBestVisual(bool flag, bool forceTrueColour);

        bool GetUseBestVisual() const;

        virtual void SetPrintMode(int _0);

        int GetPrintMode() const;

        virtual void SetActive(bool isActive, ::wxSharp::Window* lastFocus);

        virtual int HandleEvent(::wxEvent& event) override;
    };

    void Exit();
    void WakeUpIdle();
    ::wxSharp::AppConsole* CreateApp();
}
