//---------------------------------------------------------------------------


#pragma hdrstop

#include "Clase.h"
#include "Unit1.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
void DESENEAZALIBER::deseneaza(int x,int y)
{
   FPrincipal->CanvasImage->Canvas->Pen->Width = FPrincipal->DrawingSize->Position;
   FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->FGcolor->Brush->Color;
   FPrincipal->CanvasImage->Canvas->LineTo(x,y);

}
void DESENEAZALIBER::sterge(int x,int y)
{
    FPrincipal->CanvasImage->Canvas->Pen->Width = FPrincipal->DrawingSize->Position+10;
    if(FPrincipal->BGcolor->Brush->Color == clWhite)
       FPrincipal->CanvasImage->Canvas->Pen->Color = clWhite;
    else
       FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->BGcolor->Brush->Color;
    FPrincipal->CanvasImage->Canvas->LineTo(x,y);

}
void DESENEAZALIBER::fillanarea(int x,int y)
{
    FPrincipal->CanvasImage->Canvas->Brush->Color = FPrincipal->FGcolor->Brush->Color;
    FPrincipal->CanvasImage->Canvas->FloodFill(x,y,FPrincipal->CanvasImage->Canvas->Pixels[x][y],fsSurface);

}
void DREPTUNGHI::FormDrawing(int x,int y)
{
     FPrincipal->CanvasImage->Picture = FPrincipal->CanvasImage2->Picture;
     FPrincipal->CanvasImage->Canvas->Pen->Width = FPrincipal->DrawingSize->Position;
     FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->FGcolor->Brush->Color;
     FPrincipal->CanvasImage->Canvas->Brush->Style = bsClear;
     FPrincipal->CanvasImage->Canvas->Rectangle(x0,y0,x,y);
}
void CERC::FormDrawing(int x,int y)
{

     FPrincipal->CanvasImage->Picture = FPrincipal->CanvasImage2->Picture;
     FPrincipal->CanvasImage->Canvas->Pen->Width = FPrincipal->DrawingSize->Position;
     FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->FGcolor->Brush->Color;
     FPrincipal->CanvasImage->Canvas->Brush->Style = bsClear;
     FPrincipal->CanvasImage->Canvas->Ellipse(x0,y0,x,y);

}
void TRIUNGHI::FormDrawing(int x,int y)
{
    FPrincipal->CanvasImage->Picture = FPrincipal->CanvasImage2->Picture;
    FPrincipal->CanvasImage->Canvas->Pen->Width = FPrincipal->DrawingSize->Position;
    FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->FGcolor->Brush->Color;
    FPrincipal->CanvasImage->Canvas->MoveTo(x0,y0);
    FPrincipal->CanvasImage->Canvas->LineTo(x,y);
    FPrincipal->CanvasImage->Canvas->MoveTo(x0,y0);
    FPrincipal->CanvasImage->Canvas->LineTo(x+200,y);
    FPrincipal->CanvasImage->Canvas->MoveTo(x,y);
    FPrincipal->CanvasImage->Canvas->LineTo(x+200,y);
}
void LINE::FormDrawing(int x,int y)
{
    FPrincipal->CanvasImage->Picture = FPrincipal->CanvasImage2->Picture;
    FPrincipal->CanvasImage->Canvas->Pen->Width = FPrincipal->DrawingSize->Position;
    FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->FGcolor->Brush->Color;
    FPrincipal->CanvasImage->Canvas->MoveTo(x0,y0);
    FPrincipal->CanvasImage->Canvas->LineTo(x,y);


}
void FACE::FormDrawing(int x,int y)
{
   TPoint varfuri[5];
   FPrincipal->CanvasImage->Canvas->Pen->Width = 5;
   FPrincipal->CanvasImage->Canvas->Pen->Color = FPrincipal->FGcolor->Brush->Color;
   FPrincipal->CanvasImage->Canvas->Brush->Style = bsClear;
   FPrincipal->CanvasImage->Canvas->Brush->Color = FPrincipal->FGcolor->Brush->Color;
   FPrincipal->CanvasImage->Canvas->Ellipse(x0+25,y0+25,x-100,y-100);
   FPrincipal->CanvasImage->Canvas->Brush->Color = clBlack;
   FPrincipal->CanvasImage->Canvas->Pen->Color = clBlack;
   FPrincipal->CanvasImage->Canvas->Ellipse(x0-55,y0-80,x-70,y-50);
   FPrincipal->CanvasImage->Canvas->Ellipse(x0-15,y0-80,x-30,y-50);
   FPrincipal->CanvasImage->Canvas->MoveTo(x0-60,y0-10);
   FPrincipal->CanvasImage->Canvas->LineTo(x-15,y-10);


}
