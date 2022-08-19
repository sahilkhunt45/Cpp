#include<iostream.h>
#include<conio.h>

 class student
 {
   int id;
   public:
    student()
    {
      cout<<"enter id:=";
      cin>>id;
    }
    void copy(student&s)
    {
      id=s.id;
    }
    void getdata()
    {
     cout<<"id="<<id<<endl;
    }
 };
  void main()
  {
    clrscr();
    student s,s1;

    s.getdata();
    s1.copy (s);
    s1.getdata();
    getch();
  }