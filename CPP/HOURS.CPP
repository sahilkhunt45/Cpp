#include<iostream.h>
#include<conio.h>

class time
{
 int h,m;
 public:
   void setdata()
   {
     cout<<"enter hours:=";
     cin>>h;
     cout<<"enter minutes:=";
     cin>>m;
   }
    void total(time t2)
    {
      int H,M;
      M=t2.m+m;
      H=t2.h+h+M/60;
      M=m%60;
      cout<<endl<<H<<"hours"<<M<<"minutes"<<endl;
    }
 };
    void main()
    {
      time t1,t2;
      clrscr();
       t1.setdata();
       t2.setdata();

       t1.total(t2);
       getch();
    }

