//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFexit *Fexit;
//---------------------------------------------------------------------------
__fastcall TFexit::TFexit(TComponent* Owner)
        : TForm(Owner)
{
      FePa1->Color = (TColor) RGB (0xFF, 0xEB, 0xCD);
      FePa2->Color = (TColor) RGB (0xFF, 0xEB, 0xCD);
      FePa3->Color = clCream;
      
}
//---------------------------------------------------------------------------
void __fastcall TFexit::OkaybtnClick(TObject *Sender)
{
    FPrincipal->Close();
    Fexit->Close();
    FStart->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFexit::GoBackBtnClick(TObject *Sender)
{
      Fexit->Close();
}
//---------------------------------------------------------------------------


