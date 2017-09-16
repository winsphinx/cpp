/***************************************************************
 * Name:      p24App.cpp
 * Purpose:   Code for Application Class
 * Author:    winsphinX (email@)
 * Created:   2015-06-03
 * Copyright: winsphinX (http://)
 * License:
 **************************************************************/

#include "p24App.h"

//(*AppHeaders
#include "p24Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP (p24App);

bool p24App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();

    if (wxsOK)
    {
        p24Frame *Frame = new p24Frame (0);
        Frame->Show();
        SetTopWindow (Frame);
    }

    //*)
    return wxsOK;
}
