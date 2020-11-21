#include "wx/app.h"
#include "wx/window.h"
#include <wx/app.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
        return true;
    }
};

wxIMPLEMENT_APP_NO_MAIN(MyApp);
