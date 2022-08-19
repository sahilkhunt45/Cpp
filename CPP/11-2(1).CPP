#include<iostream.h>
#include<conio.h>
class student
{
  int id;
  char name[20];
  int std;
  char faculty_name[20];
  int div;
  public:
   void setdata()
   {
    cout<<"enter student id:";
    cin>>id;
    cout<<"enter student name:";
    cin>>name;
    cout<<"enter student standard:";
    cin>>std;
    cout<<"enter student faculty name:";
    cin>>faculty_name;
    cout<<"enter student divition:";
    cin>>div;
   }
   void getdata()
    {
      cout<<"enter your data:\n";
      cout<<id<<endl<<name<<endl<<std<<endl<<faculty_name<<endl<<div;
    }
   };
  void main()
  {
    student s,s1;
      s.setdata();
      s.getdata();
      clrscr();

  getch();
 }