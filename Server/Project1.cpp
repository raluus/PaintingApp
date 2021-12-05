//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("..\AppServer\Unit1.cpp", FPrincipal);
USEFORM("..\AppServer\Unit2.cpp", Fexit);
USEFORM("..\AppServer\Unit3.cpp", FStart);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TFStart), &FStart);
                 Application->CreateForm(__classid(TFPrincipal), &FPrincipal);
                 Application->CreateForm(__classid(TFexit), &Fexit);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
