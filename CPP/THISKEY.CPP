#include<iostream.h>
#include<conio.h>
#include<string.h>

 class emp
 {
    int id;
    char name[20],post[20];
    public:
      void setdata(int id,char name[],char post[])
      {
	this->id=id;
	strcpy(this->name,name);
	strcpy(this->post,post);
      }
     void getdata()
     {
       cout<<"employee id="<<id<<endl<<"employee name="<<name<<endl<<"employee post="<<post;
     }
 };
 void main()
 {
  emp s;
  clrscr();
  s.setdata(1,"poras","ceo");
  s.getdata();
  getch();
 }