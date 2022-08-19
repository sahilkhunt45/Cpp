#include<iostream.h>
#include<conio.h>
 //multilevel inheritance
class A
{
  char a[10];
  protected:
  void setA()
  {
    cout<<"enter granfather's name:=";
    cin>>a;
  }
  void getA()
  {
   cout<<endl<<"your grandfather name="<<a;
  }
};
class B:public A
{
  char b[10];
  protected:
  void setB()
  {
    setA();
    cout<<"enter father's name:=";
    cin>>b;
  }
  void getB()
  {
   getA();
   cout<<endl<<"your father name="<<b;
  }
};
class C:public B
{
  char c[10];
  public:
  void setC()
  {
    setB();
    cout<<"enter son's name:=";
    cin>>c;
  }
  void getC()
  {
   getB();
   cout<<endl<<"your son's name="<<c;
  }
};
void main()
{
 C c;
 clrscr();
 c.setC();
 c.getC();
 getch();

}