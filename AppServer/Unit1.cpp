//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Clase.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGRID"
#pragma resource "*.dfm"
TFPrincipal *FPrincipal;

//---------------------------------------------------------------------------
__fastcall TFPrincipal::TFPrincipal(TComponent* Owner)
        : TForm(Owner)
{
    EditColorPanel->Color = (TColor) RGB (0x0, 0x0, 0x80);
    pc[0]=YourNewColor1;
    pc[1]=YourNewColor2;
    pc[2]=YourNewColor3;
    pc[3]=YourNewColor4;
    pc[4]=YourNewColor5;
    pc[5]=YourNewColor6;
    pc[6]=YourNewColor7;
    clicked = -1;
    IndexCuloriNoi = 0;
    FPrincipal->DoubleBuffered = true;
    p1[1] = new DESENEAZALIBER();
    p1[2] = new DREPTUNGHI();
    p1[3] = new CERC();
    p1[4] = new TRIUNGHI();
    p1[5] = new LINE();
    p1[6] = new FACE();
    CanvasImage3=new TImage(CanvasImage);
    CanvasImage3->Picture = CanvasImage->Picture;
    CanvasImage4=new TImage(CanvasImage);
    CanvasImage4->Picture = CanvasImage->Picture;
    CanvasImage5=new TImage(CanvasImage);






}
//---------------------------------------------------------------------------
void __fastcall TFPrincipal::Exit1Click(TObject *Sender)
{
   CanvasImage->Picture = CanvasImage3->Picture;
}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::EditColorButtonClick(TObject *Sender)
{
        ColorDialog1->Execute();
        if(IndexCuloriNoi == 7) IndexCuloriNoi = 0;
        pc[IndexCuloriNoi++]->Brush->Color = ColorDialog1->Color;
        if(clicked == -1)
             BGcolor->Brush->Color = ColorDialog1->Color;
        if(clicked == 1)
          FGcolor->Brush->Color = ColorDialog1->Color;
        else
          if(clicked == 0)
            BGcolor->Brush->Color = ColorDialog1->Color;


}
//---------------------------------------------------------------------------



void __fastcall TFPrincipal::FGcolorChangeClick(TObject *Sender)
{
     clicked = 1;
}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::ColorGrid1Change(TObject *Sender)
{
       if(clicked == -1)
          FGcolor->Brush->Color = ColorGrid1->ForegroundColor;
       if(clicked == 1)
       {
           FGcolor->Brush->Color = ColorGrid1->ForegroundColor;
       }
       else
        if(clicked ==0)
           BGcolor->Brush->Color = ColorGrid1->ForegroundColor;
}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::BGcolorChangeClick(TObject *Sender)
{
     clicked = 0;
}
//---------------------------------------------------------------------------



void __fastcall TFPrincipal::CanvasImageMouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{

        if(!Shift.Contains(ssLeft))
          return;
        if(BrushButton->Down)
        {
          p1[1]->deseneaza(X,Y);
        }
        if(EraserButton->Down)
        {

            p1[1]->sterge(X,Y);

        }
       if(SquareButton->Down)
        {
           p1[2]->FormDrawing(X,Y);


        }
        if(CircleButton->Down)
        {
           p1[3]->FormDrawing(X,Y);

        }
        if(TriangleButton->Down)
        {
           p1[4]->FormDrawing(X,Y);
        }
        if(LineButton->Down)
        {
          p1[5]->FormDrawing(X,Y);

        }


}
//---------------------------------------------------------------------------





//---------------------------------------------------------------------------

void __fastcall TFPrincipal::CanvasImageMouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
         CanvasImage4->Picture = CanvasImage->Picture;
         if(BrushButton->Down)
         {
              CanvasImage->Canvas->MoveTo(X,Y);
         }
         if(EraserButton->Down)
         {
              CanvasImage->Canvas->MoveTo(X,Y);
         }
        if(FillButton->Down)
        {
           p1[1]->fillanarea(X,Y);
        }
        if(SquareButton->Down)
        {
           p1[2]->setX(X);
           p1[2]->setY(Y);
           CanvasImage2=new TImage(CanvasImage);
           CanvasImage2->Picture = CanvasImage->Picture;
        }
        if(CircleButton->Down)
        {
            p1[3]->setX(X);
            p1[3]->setY(Y);
            CanvasImage2=new TImage(CanvasImage);
            CanvasImage2->Picture = CanvasImage->Picture;
        }
        if(TriangleButton->Down)
        {
            p1[4]->setX(X);
            p1[4]->setY(Y);
            CanvasImage2=new TImage(CanvasImage);
            CanvasImage2->Picture = CanvasImage->Picture;

        }
        if(LineButton->Down)
        {
            p1[5]->setX(X);
            p1[5]->setY(Y);
            CanvasImage2=new TImage(CanvasImage);
            CanvasImage2->Picture = CanvasImage->Picture;

        }
        if(FaceButton->Down)
        {
           p1[6]->setX(X);
           p1[6]->setY(Y);

        }




}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::CanvasImageMouseUp(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
          if(SquareButton->Down)
          {
             p1[2]->FormDrawing(X,Y);
             delete(CanvasImage2);
          }
          if(CircleButton->Down)
          {
             p1[3]->FormDrawing(X,Y);
             delete(CanvasImage2);

          }
          if(TriangleButton->Down)
          {
             p1[4]->FormDrawing(X,Y);
             delete(CanvasImage2);
          }
          if(LineButton->Down)
          {
            p1[5]->FormDrawing(X,Y);
            delete(CanvasImage2);
          }
          if(FaceButton->Down)
          {
            p1[6]->FormDrawing(X,Y);
          }

}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::DrawingSizeScroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        ScrollBarSize->Caption = DrawingSize->Position;
}
//---------------------------------------------------------------------------



void __fastcall TFPrincipal::Exit2Click(TObject *Sender)
{
     Fexit->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::Redo1Click(TObject *Sender)
{
      CanvasImage5->Picture = CanvasImage->Picture;
      CanvasImage->Picture = CanvasImage4->Picture;
}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::Help1Click(TObject *Sender)
{
       CanvasImage->Picture = CanvasImage5->Picture;
}
//---------------------------------------------------------------------------

void __fastcall TFPrincipal::Undo1Click(TObject *Sender)
{
     SavePictureDialog1->FileName = "Untitled";
     SavePictureDialog1->DefaultExt = "jpg";
     if(SavePictureDialog1->Execute())
     {
       CanvasImage->Picture->SaveToFile(SavePictureDialog1->FileName);

     }
}
//---------------------------------------------------------------------------




void __fastcall TFPrincipal::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
       xserver = StrToInt(Socket->ReceiveText());
       yserver = StrToInt(Socket->ReceiveText());
       caz = StrToInt(Socket->ReceiveText());
       if(caz == 1)
       {

        if(down==1)
        {
          p1[1]->deseneaza(xserver,yserver);
        }
        if(down==2)
        {

            p1[1]->sterge(xserver,yserver);

        }
       if(down==3)
        {
           p1[2]->FormDrawing(xserver,yserver);


        }
        if(down==4)
        {
           p1[3]->FormDrawing(xserver,yserver);

        }
        if(down==5)
        {
           p1[4]->FormDrawing(xserver,yserver);
        }
        if(down==6)
        {
          p1[5]->FormDrawing(xserver,yserver);

        }
       }
       else
         if(caz == 2)
         {
            if(down==1)
         {
              CanvasImage->Canvas->MoveTo(xserver,yserver);
         }
         if(down==2)
         {
              CanvasImage->Canvas->MoveTo(xserver,yserver);
         }
        if(down==3)
        {
           p1[1]->fillanarea(xserver,yserver);
        }
        if(down == 4)
        {
           p1[2]->setX(xserver);
           p1[2]->setY(yserver);
           CanvasImage2=new TImage(CanvasImage);
           CanvasImage2->Picture = CanvasImage->Picture;
        }
        if(down == 5)
        {
            p1[3]->setX(xserver);
            p1[3]->setY(yserver);
            CanvasImage2=new TImage(CanvasImage);
            CanvasImage2->Picture = CanvasImage->Picture;
        }
        if(down == 6)
        {
            p1[4]->setX(xserver);
            p1[4]->setY(yserver);
            CanvasImage2=new TImage(CanvasImage);
            CanvasImage2->Picture = CanvasImage->Picture;

        }
        if(down == 7)
        {
            p1[5]->setX(xserver);
            p1[5]->setY(yserver);
            CanvasImage2=new TImage(CanvasImage);
            CanvasImage2->Picture = CanvasImage->Picture;

        }
        if(down == 8)
        {
           p1[6]->setX(xserver);
           p1[6]->setY(yserver);

        }


       }
       else
          if(caz == 3)
          {
             if(down == 1)
          {
             p1[2]->FormDrawing(xserver,yserver);
             delete(CanvasImage2);
          }
          if(down == 2)
          {
             p1[3]->FormDrawing(xserver,yserver);
             delete(CanvasImage2);

          }
          if(down == 3)
          {
             p1[4]->FormDrawing(xserver,yserver);
             delete(CanvasImage2);
          }
          if(down == 4)
          {
            p1[5]->FormDrawing(xserver,yserver);
            delete(CanvasImage2);
          }
          if(down == 5)
          {
            p1[6]->FormDrawing(xserver,yserver);
          }

       }
}
//---------------------------------------------------------------------------

