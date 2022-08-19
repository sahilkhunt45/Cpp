#include<iostream.h>
#include<conio.h>
#include<string.h>
class item
{
  int a;
  char b[20];
  public:
  item(int a,char b[])
  {
    this->a=a;
    strcpy(this->b,b);
  }
  void getdata()
  {
   cout<<"a="<<a<<endl<<"b="<<b;
  }
};
void main()
{
  item it,it1;
  clrscr();
  it.getdata();
  it.getdata();
  getch();
}