#include<iostream.h>
#include<conio.h>
void main()
{
  int no,fact=1;
  clrscr();
  cout<<"enter n value:=";
  cin>>no;
  while(no!=0)
  {
   fact=fact*no;
   no--;
  }
  cout<<fact;
  getch();
}
  //factorial