#include <wx/app.h>
#include <wx/apptrait.h>
#include <wx/evtloop.h>

// Logic below was derived from:
//wxIMPLEMENT_APP_NO_MAIN(MyApp);

class MyEventLoop : public wxEventLoop
{
public:

    MyEventLoop()
    {
    }
};

class MyAppTraits : public wxGUIAppTraits
{
public:

    virtual wxEventLoopBase* CreateEventLoop() override
    {
        return new MyEventLoop();
    }
};

class MyApp : public wxApp
{
public:

    virtual bool OnInit() override
    {
        return true;
    }

    virtual wxAppTraits* CreateTraits() override
    {
        return new MyAppTraits;
    }
};

MyApp& wxGetApp() { return *static_cast<MyApp*>(wxApp::GetInstance()); }

wxAppConsole *wxCreateApp()
{
    wxAppConsole::CheckBuildOptions(WX_BUILD_OPTIONS_SIGNATURE, "Ozone");
    return new MyApp;
}

wxAppInitializer wxTheAppInitializer((wxAppInitializerFunction) wxCreateApp);

