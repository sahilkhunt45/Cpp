#include<iostream.h>
#include<conio.h>

class B;
class A
{
 int a;
 public:
   void setdata()
   {
     cout<<"Enter a value:=";
     cin>>a;
     cout<<endl;
   }
   void getdata()
   {
    cout<<a;
   }
   friend void sum(A a1,B b1);
};
class B
{
 int b;
 public:
   void setdata()
   {
    cout<<"Enter b value:=";
    cin>>b;
    cout<<endl;
   }
   void getdata()
   {
     cout<<b;
   }
     friend void sum(A a1,B b1);
};
void sum(A a1,B b1)
{
 int c;
 c=a1.a+b1.b;
 cout<<"SUM OF CLASS A AND CLASS B:="<<c;
}
void main()
{
 A a1;
 B b1;
 clrscr();
  a1.setdata();
  b1.setdata();
  sum(a1,b1);
 getch();
}