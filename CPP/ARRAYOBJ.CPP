#include<iostream.h>
#include<conio.h>

class result
{
  int maths,science,english,avg,total;
  char grade;
   public:
    void setdata()
    {
      cout<<"MARKSHEET::\n";
      cout<<"Enter maths's mark:=";
      cin>>maths;
      cout<<"Enter science's mark:=";
      cin>>science;
      cout<<"Enter english's marks:=";
      cin>>english;
    }
    void calc()
    {
      total=maths+science+english;
      avg=total/3;
      if(avg>=80 && avg<=100)
      {
	 grade='A';
      }
       else if(avg>=50 && avg<70)
       {
	 grade='B';
       }
       else if(avg>=30 && avg<50)
       {
	 grade='C';
       }
       else if(avg>=20 && avg<10)
       {
	 grade='d';
       }
    }
   void getdata()
    {
      cout<<"maths="<<maths<<"\n"<<"science="<<science<<"\n"<<"english="<<english<<"\n""\n""\n";
     // cout<<maths<<"\t"<<science<<"\t"<<english;
      cout<<"Total Marks="<<total<<"\n"<<"Avrage Of Marks="<<avg<<"\n";
      cout<<"Your Grade="<<grade;
    }
};
 void main()
 {
   result r[20];
   int n,i;
   clrscr();
   cout<<"enter your n value:=";
   cin>>n;
   for(i=0;i<n;i++)
   {
    r[i].setdata();
    r[i].calc();
   }
   for(i=0;i<n;i++)
   {
     r[i].getdata();
   }
   getch();
 }