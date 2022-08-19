#include<iostream.h>
#include<conio.h>
//////HERIRACHICHAL//////
class g_father
{
 int age;
 protected:
  g_father()
  {
   age=0;
  }
   g_father(int g)
  {
    age=g;
  }
  void get_g()
  {
    cout<<"grandfather's age="<<age<<endl;
  }
};
class father:public g_father
{
 int age;
 protected:
 father()
 {
  age=0;
 }
  father(int g,int f):g_father(g)
 {
  age=f;
 }
 void get_f()
 {
  get_g();
  cout<<"father's age="<<age<<endl;
 }
};
class uncle
{
 int age;
 protected:
 uncle()
 {
  age=0;
 }
  uncle(int u)
 {
   age=u;
 }
 void get_u()
 {
  cout<<"uncle's="<<age<<endl;
 }
};
class son:public father,public uncle
{
  int age;
  public:
  son()
  {
   age=0;
  }
  son(int g,int f,int u,int s):father(g,f),uncle(u)
  {
   age=u;
  }
  void get_s()
  {
    get_f();
    get_u();
    cout<<"son's age="<<age;
  }
};
void main()
{
 son a(70,45,40,15);
 clrscr();
 a.get_s();
 getch();
}
