#include<iostream.h>
#include<conio.h>

 class A
 {
  int a,b;
  public:
  void setdata()
  {
   cout<<"a=";
   cin>>a;
  }
  void operator++()
  {
   ++a;
  }
  void getdata()
  {
   cout<<"New Value of A(inc/decr)="<<a;
  }
 };
 void main()
 {
  A a1;
  clrscr();
  a1.setdata();
  a1.operator++();
  a1.getdata();
  getch();
 }


