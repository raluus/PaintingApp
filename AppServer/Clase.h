//---------------------------------------------------------------------------

#ifndef ClaseH
#define ClaseH
//---------------------------------------------------------------------------
class POZITIE
{
protected:
     int x0;
     int y0;
public:
     POZITIE(){};
     ~POZITIE(){};
     void setX(int x){x0=x;};
     void setY(int y){y0=y;};
};
class FIGURA : public POZITIE
{
  public:
       FIGURA(){};
       ~FIGURA(){};
       virtual void deseneaza(int x,int y){};
       virtual void sterge(int x,int y){};
       virtual void fillanarea(int x,int y){};
       virtual void FormDrawing(int x,int y)=0;



};

class CERC : public FIGURA
{
public:
     CERC(){};
     ~CERC(){};
     virtual void FormDrawing(int x,int y);

};

class TRIUNGHI : public FIGURA
{
public:
        TRIUNGHI(){};
        ~TRIUNGHI(){};
        virtual void FormDrawing(int x,int y);


};
class LINE : public FIGURA
{
 public:
       LINE(){};
       ~LINE(){};
       virtual void FormDrawing(int x,int y);

};
class DREPTUNGHI : public FIGURA
{
  public:
     DREPTUNGHI(){};
     ~DREPTUNGHI(){};
     virtual void FormDrawing(int x,int y);
};
class FACE : public FIGURA
{
  public:
       FACE(){};
       ~FACE(){};
       virtual void FormDrawing(int x,int y);

};
class DESENEAZALIBER : public FIGURA
{

     public:
     DESENEAZALIBER(){};
     ~DESENEAZALIBER(){};
     virtual void deseneaza(int x,int y);
     virtual void sterge(int x,int y);
     virtual void fillanarea(int x,int y);
     virtual void FormDrawing(int x,int y){};

};
#endif
