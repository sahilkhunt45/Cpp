#include<conio.h>
#include<iostream.h>

class emp
{
public:
  int id;
  char name[20],post[20];
  inline void setdata();
  inline void getdata();
};
void emp::setdata()
  {
   cin>>id>>name>>post;
  }
void emp::getdata()
  {
   cout<<"EMPLOYEE ID="<<id<<endl<<"EMPLOYEE NAME="<<name<<endl<<"EMPLOYEE POST="<<post;
  }
void main()
{
 emp s;
 clrscr();
 s.setdata();
 s.getdata();
 getch();

}