#include<iostream.h>
#include<conio.h>
void main()
{
 int s,s1,s2,i=1;
 clrscr();
 s=0;
 s1=1;
 cout<<s<<"\n"<<s1<<"\n";
 while(i<=10)
 {
  s2=s+s1;
  cout<<s2<<endl;
  s=s1;
  s1=s2;
  i++;
 }
 getch();
}