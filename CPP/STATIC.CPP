#include<iostream.h>
#include<conio.h>

class  bank
{
  int deposite;
  static int count;
  public:
   void setdata()
   {
     cout<<"enter your deposite amount:=";
     cin>>deposite;
     count+=deposite;
   }
    void getdata()
    {
    // cout<<"your deposite amount:="<<deposite<<endl;
    }
   void sum()
   {
     cout<<"YOUR TOTAL DEPOSITE AMOUNT:=";
     cout<<"\n"<<count;
   }
};
int bank ::count;
void main()
{
  bank a,a1,a2;
  clrscr();
  a.setdata();
  //a.getdata();
  a1.setdata();
 // a1.getdata();
  a2.setdata();
  //a2.getdata();
  a.sum();
  getch();
}