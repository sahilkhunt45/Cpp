#include<iostream.h>
#include<conio.h>

class student
{
 int a;
 public:
 student()
 {
   cout<<"a=";
   cin>>a;
 }
void getdata()
{
  cout<<"a="<<a;
}
~student()
{
  cout<<"constrctor successfully realese";
}
};
void main()
{ clrscr();
  student s;

  s.getdata();
  getch();
}
