#include<iostream.h>
#include<conio.h>
class item
{
  int a,b;
  public:
  void setdata()
  {
   cin>>a>>b;
  }
  void getdata()
  {
   cout<<"a="<<a<<endl<<"b="<<b;
  }
};
void main()
{
 item *it1=new item;
 clrscr();
 it1->setdata();
 it1->getdata();
 getch();
}
