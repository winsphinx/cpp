/***************************************************************
 * Name:      p24Main.h
 * Purpose:   Defines Application Frame
 * Author:    winsphinX (email@)
 * Created:   2015-06-03
 * Copyright: winsphinX (http://)
 * License:
 **************************************************************/

#ifndef P24MAIN_H
#define P24MAIN_H

//(*Headers(p24Frame)
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

class p24Frame: public wxFrame
{
public:

    p24Frame (wxWindow *parent, wxWindowID id = -1);
    virtual ~p24Frame();

private:

    //(*Handlers(p24Frame)
    void OnQuit (wxCommandEvent &event);
    void OnAbout (wxCommandEvent &event);
    void OnNew (wxCommandEvent &event);
    void OnButton1Click (wxCommandEvent &event);
    void OnButton2Click (wxCommandEvent &event);
    void OnButton3Click (wxCommandEvent &event);
    void OnButton4Click (wxCommandEvent &event);
    void OnButton5Click (wxCommandEvent &event);
    void OnButton6Click (wxCommandEvent &event);
    void OnButton7Click (wxCommandEvent &event);
    void OnButton8Click (wxCommandEvent &event);
    void OnButton9Click (wxCommandEvent &event);
    //*)

    //(*Identifiers(p24Frame)
    static const long ID_TEXTCTRL1;
    static const long ID_BUTTON1;
    static const long ID_BUTTON2;
    static const long ID_BUTTON3;
    static const long ID_BUTTON4;
    static const long ID_BUTTON5;
    static const long ID_BUTTON6;
    static const long ID_BUTTON7;
    static const long ID_BUTTON8;
    static const long ID_BUTTON9;
    static const long ID_BUTTON_NEW;
    static const long ID_BUTTON_HELP;
    static const long ID_BUTTON_QUIT;
    //*)

    //(*Declarations(p24Frame)
    wxButton *Button4;
    wxButton *Button1;
    wxButton *ButtonNew;
    wxButton *Button2;
    wxButton *Button6;
    wxButton *Button5;
    wxButton *Button3;
    wxButton *Button7;
    wxButton *ButtonHelp;
    wxButton *ButtonQuit;
    wxButton *Button9;
    wxTextCtrl *TextCtrl1;
    wxButton *Button8;
    //*)

    DECLARE_EVENT_TABLE()
};

#endif // P24MAIN_H
