#include<iostream.h>
#include<conio.h>
#include<string.h>

class emp
{
  int id;
  char name[20],post[20];
   public:
  void setdata(int id1,char name1[],char post1[])
  {
     id=id1;
     strcpy(name,name1);
     strcpy(post,post1);
  }
  void getdata()
  {
    cout<<id<<endl<<name<<endl<<post;
  }
};
void main()
{
  emp s,s1;
  clrscr();
  s.setdata(1,"parth","nubdo\n");
  s.getdata();
  s1.setdata(2,"paras","kamchalau");
  s1.getdata();
  getch();
}