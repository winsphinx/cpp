/***************************************************************
 * Name:      p24Main.cpp
 * Purpose:   Code for Application Frame
 * Author:    winsphinX (email@)
 * Created:   2015-06-03
 * Copyright: winsphinX (http://)
 * License:
 **************************************************************/

#include "p24Main.h"
#include <wx/msgdlg.h>
#include <wx/math.h>

const double PRECISION = 1E-6;
const int COUNT = 4;
const int RESULT = 24;
double number[COUNT];
std::string expression[COUNT];
int digit = 0;
int newflag = 1;

bool Test (int n)
{
    if (n == 1)
    {
        if (fabs (number[0] - RESULT) < PRECISION)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double a, b;
            std::string expa, expb;
            a = number[i];
            b = number[j];
            number[j] = number[n - 1];
            expa = expression[i];
            expb = expression[j];
            expression[j] = expression[n - 1];
            expression[i] = '(' + expa + '+' + expb + ')';
            number[i] = a + b;

            if (Test (n - 1))
            {
                return true;
            }

            expression[i] = '(' + expa + '-' + expb + ')';
            number[i] = a - b;

            if (Test (n - 1))
            {
                return true;
            }

            expression[i] = '(' + expb + '-' + expa + ')';
            number[i] = b - a;

            if (Test (n - 1))
            {
                return true;
            }

            expression[i] = '(' + expa + 'x' + expb + ')';
            number[i] = a * b;

            if (Test (n - 1))
            {
                return true;
            }

            if (b != 0)
            {
                expression[i] = '(' + expa + '/' + expb + ')';
                number[i] = a / b;

                if (Test (n - 1))
                {
                    return true;
                }
            }

            if (a != 0)
            {
                expression[i] = '(' + expb + '/' + expa + ')';
                number[i] = b / a;

                if (Test (n - 1))
                {
                    return true;
                }
            }

            number[i] = a;
            number[j] = b;
            expression[i] = expa;
            expression[j] = expb;
        }
    }

    return false;
}


//(*InternalHeaders(p24Frame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo (wxbuildinfoformat format)
{
    wxString wxbuild (wxVERSION_STRING);

    if (format == long_f)
    {
#if defined(__WXMSW__)
        wxbuild << _T ("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T ("-Linux");
#endif
#if wxUSE_UNICODE
        wxbuild << _T ("-Unicode build");
#else
        wxbuild << _T ("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(p24Frame)
const long p24Frame::ID_TEXTCTRL1 = wxNewId();
const long p24Frame::ID_BUTTON1 = wxNewId();
const long p24Frame::ID_BUTTON2 = wxNewId();
const long p24Frame::ID_BUTTON3 = wxNewId();
const long p24Frame::ID_BUTTON4 = wxNewId();
const long p24Frame::ID_BUTTON5 = wxNewId();
const long p24Frame::ID_BUTTON6 = wxNewId();
const long p24Frame::ID_BUTTON7 = wxNewId();
const long p24Frame::ID_BUTTON8 = wxNewId();
const long p24Frame::ID_BUTTON9 = wxNewId();
const long p24Frame::ID_BUTTON_NEW = wxNewId();
const long p24Frame::ID_BUTTON_HELP = wxNewId();
const long p24Frame::ID_BUTTON_QUIT = wxNewId();
//*)

BEGIN_EVENT_TABLE (p24Frame, wxFrame)
    //(*EventTable(p24Frame)
    //*)
END_EVENT_TABLE()

p24Frame::p24Frame (wxWindow *parent, wxWindowID id)
{
    //(*Initialize(p24Frame)
    wxGridSizer *GridSizer1;
    wxBoxSizer *BoxSizer1;
    Create (parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T ("id"));
    BoxSizer1 = new wxBoxSizer (wxVERTICAL);
    TextCtrl1 = new wxTextCtrl (this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize (280, 40), wxTE_READONLY | wxTE_RIGHT, wxDefaultValidator, _T ("ID_TEXTCTRL1"));
    wxFont TextCtrl1Font (20, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, _T ("Monaco"), wxFONTENCODING_DEFAULT);
    TextCtrl1->SetFont (TextCtrl1Font);
    BoxSizer1->Add (TextCtrl1, 1, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
    GridSizer1 = new wxGridSizer (4, 3, 0, 0);
    Button1 = new wxButton (this, ID_BUTTON1, _ ("1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON1"));
    GridSizer1->Add (Button1, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton (this, ID_BUTTON2, _ ("2"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON2"));
    GridSizer1->Add (Button2, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton (this, ID_BUTTON3, _ ("3"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON3"));
    GridSizer1->Add (Button3, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton (this, ID_BUTTON4, _ ("4"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON4"));
    GridSizer1->Add (Button4, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton (this, ID_BUTTON5, _ ("5"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON5"));
    GridSizer1->Add (Button5, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton (this, ID_BUTTON6, _ ("6"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON6"));
    GridSizer1->Add (Button6, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button7 = new wxButton (this, ID_BUTTON7, _ ("7"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON7"));
    GridSizer1->Add (Button7, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button8 = new wxButton (this, ID_BUTTON8, _ ("8"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON8"));
    GridSizer1->Add (Button8, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    Button9 = new wxButton (this, ID_BUTTON9, _ ("9"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON9"));
    GridSizer1->Add (Button9, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    ButtonNew = new wxButton (this, ID_BUTTON_NEW, _ ("开始"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON_NEW"));
    GridSizer1->Add (ButtonNew, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    ButtonHelp = new wxButton (this, ID_BUTTON_HELP, _ ("说明"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON_HELP"));
    GridSizer1->Add (ButtonHelp, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    ButtonQuit = new wxButton (this, ID_BUTTON_QUIT, _ ("离开"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T ("ID_BUTTON_QUIT"));
    GridSizer1->Add (ButtonQuit, 1, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add (GridSizer1, 3, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);
    SetSizer (BoxSizer1);
    BoxSizer1->Fit (this);
    BoxSizer1->SetSizeHints (this);
    Connect (ID_BUTTON1, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton1Click);
    Connect (ID_BUTTON2, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton2Click);
    Connect (ID_BUTTON3, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton3Click);
    Connect (ID_BUTTON4, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton4Click);
    Connect (ID_BUTTON5, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton5Click);
    Connect (ID_BUTTON6, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton6Click);
    Connect (ID_BUTTON7, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton7Click);
    Connect (ID_BUTTON8, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton8Click);
    Connect (ID_BUTTON9, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnButton9Click);
    Connect (ID_BUTTON_NEW, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnNew);
    Connect (ID_BUTTON_HELP, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnAbout);
    Connect (ID_BUTTON_QUIT, wxEVT_COMMAND_BUTTON_CLICKED, (wxObjectEventFunction)&p24Frame::OnQuit);
    //*)
}

p24Frame::~p24Frame()
{
    //(*Destroy(p24Frame)
    //*)
}

void p24Frame::OnQuit (wxCommandEvent &event)
{
    Close();
}

void p24Frame::OnAbout (wxCommandEvent &event)
{
    wxString msg = "选择4个数字，计算24点。";
    wxMessageBox (msg, _ ("欢迎"));
}

void p24Frame::OnNew (wxCommandEvent &event)
{
    if (newflag)
    {
        digit = 0;
        TextCtrl1->SetLabel (wxString (""));
        ButtonNew->SetLabel (wxString (_ ("开始")));
    }
    else
    {
        newflag = 1;
        ButtonNew->SetLabel (wxString (_ ("清除")));

        if (Test (COUNT))
        {
            TextCtrl1->SetLabel (wxString (expression[0].data()));
        }
        else
        {
            TextCtrl1->SetLabel (wxString (_ ("无解!")));
        }
    }
}


void p24Frame::OnButton1Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button1->GetLabel());
        number[digit] = 1;
        char buffer[20];
        itoa (1, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton2Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button2->GetLabel());
        number[digit] = 2;
        char buffer[20];
        itoa (2, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton3Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button3->GetLabel());
        number[digit] = 3;
        char buffer[20];
        itoa (3, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton4Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button4->GetLabel());
        number[digit] = 4;
        char buffer[20];
        itoa (4, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton5Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button5->GetLabel());
        number[digit] = 5;
        char buffer[20];
        itoa (5, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton6Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button6->GetLabel());
        number[digit] = 6;
        char buffer[20];
        itoa (6, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton7Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button7->GetLabel());
        number[digit] = 7;
        char buffer[20];
        itoa (7, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton8Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button8->GetLabel());
        number[digit] = 8;
        char buffer[20];
        itoa (8, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}

void p24Frame::OnButton9Click (wxCommandEvent &event)
{
    if (digit < COUNT)
    {
        TextCtrl1->SetLabel (TextCtrl1->GetLabel() + Button9->GetLabel());
        number[digit] = 9;
        char buffer[20];
        itoa (9, buffer, 10);
        expression[digit] = buffer;

        if (++digit == COUNT)
        {
            newflag = 0;
            ButtonNew->Enable();
            ButtonNew->SetLabel (wxString (_ ("计算")));
        }
        else
        {
            ButtonNew->Disable();
        }
    }
}
