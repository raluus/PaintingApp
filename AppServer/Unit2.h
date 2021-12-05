//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFexit : public TForm
{
__published:	// IDE-managed Components
        TPanel *FePa1;
        TSpeedButton *Okaybtn;
        TPanel *FePa2;
        TSpeedButton *GoBackBtn;
        TLabel *FePa3;
        void __fastcall OkaybtnClick(TObject *Sender);
        void __fastcall GoBackBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TFexit(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFexit *Fexit;
//---------------------------------------------------------------------------
#endif
