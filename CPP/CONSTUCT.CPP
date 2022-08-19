#include<iostream.h>
#include<conio.h>

class student
{
  int id;
  char name[20];
  public:
   student()
   {
     cout<<"enter student id:=";
     cin>>id;
     cout<<"enter student name:=";
     cin>>name;
   }
   void getdata()
   {
     cout<<"student id:="<<id<<endl<<"student name:="<<name<<endl;
   }
};
 void main()
 {
 clrscr();
   student s,s1;
   s.getdata();
   s1.getdata();
   getch();
 }