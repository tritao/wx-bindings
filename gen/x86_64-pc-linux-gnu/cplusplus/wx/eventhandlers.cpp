// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#include "eventhandlers.h"
#include "wx/dc.h"
#include "wx/event.h"
#include "wx/gdicmn.h"
#include "wx/window.h"


#include <wx/eventfilter.h>

int _EventFilter::FilterEvent(::wxEvent& event)
{
    wxEventType eventType = event.GetEventType();
    wxEvtHandler* eventObject = wxStaticCast(event.GetEventObject(), wxEvtHandler);
    wxSharp::EvtHandler* evtHandler = static_cast<wxSharp::EvtHandler*>(eventObject->GetClientData());
    if (evtHandler)
        evtHandler->HandleEvent(event);

    return Event_Skip;
}
