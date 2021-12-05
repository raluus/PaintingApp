//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <jpeg.hpp>
#include "CGRID.h"
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <Graphics.hpp>
#include "Clase.h"
#include <ExtDlgs.hpp>
#include <ScktComp.hpp>
#define MAX_CULORI 10



//---------------------------------------------------------------------------
class TFPrincipal : public TForm
{
__published:	// IDE-managed Components
        TImage *ToolImage;
        TMainMenu *MainMenu1;
        TMenuItem *Help1;
        TMenuItem *Undo1;
        TMenuItem *Redo1;
        TMenuItem *Exit1;
        TColorDialog *ColorDialog1;
        TCColorGrid *ColorGrid1;
        TPanel *EditColorPanel;
        TSpeedButton *EditColorButton;
        TSpeedButton *BrushButton;
        TSpeedButton *SquareButton;
        TSpeedButton *CircleButton;
        TSpeedButton *TriangleButton;
        TShape *FGcolor;
        TShape *BGcolor;
        TLabel *lFGcolor;
        TLabel *lBGcolor;
        TToolBar *ToolBar1;
        TShape *YourNewColor1;
        TToolButton *Sep1;
        TShape *YourNewColor2;
        TToolButton *Sep2;
        TShape *YourNewColor3;
        TToolButton *Sep3;
        TShape *YourNewColor4;
        TToolButton *Sep4;
        TShape *YourNewColor5;
        TToolButton *Sep5;
        TShape *YourNewColor6;
        TToolButton *Sep6;
        TShape *YourNewColor7;
        TSpeedButton *FGcolorChange;
        TSpeedButton *BGcolorChange;
        TImage *CanvasImage;
        TSpeedButton *EraserButton;
        TScrollBar *DrawingSize;
        TSpeedButton *FillButton;
        TSpeedButton *LineButton;
        TLabel *ScrollBarSize;
        TLabel *Label1;
        TMenuItem *Exit2;
        TSpeedButton *FaceButton;
        TSavePictureDialog *SavePictureDialog1;
        TServerSocket *ServerSocket1;
        void __fastcall Exit1Click(TObject *Sender);
        void __fastcall EditColorButtonClick(TObject *Sender);
        void __fastcall FGcolorChangeClick(TObject *Sender);
        void __fastcall ColorGrid1Change(TObject *Sender);
        void __fastcall BGcolorChangeClick(TObject *Sender);
        void __fastcall CanvasImageMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall CanvasImageMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall CanvasImageMouseUp(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall DrawingSizeScroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall Exit2Click(TObject *Sender);
        void __fastcall Redo1Click(TObject *Sender);
        void __fastcall Help1Click(TObject *Sender);
        void __fastcall Undo1Click(TObject *Sender);
        void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:	// User declarations
public:
               FIGURA *p1[10];
               int clicked;
               int IndexCuloriNoi;
               int caz,xserver,yserver,down;
               TImage *CanvasImage2;
               TImage *CanvasImage3;
               TImage *CanvasImage4;
               TImage *CanvasImage5;
               TShape *pc[MAX_CULORI];	// User declarations
        __fastcall TFPrincipal(TComponent* Owner);
};




//---------------------------------------------------------------------------
extern PACKAGE TFPrincipal *FPrincipal;
//---------------------------------------------------------------------------
#endif
