#include<iostream.h>
#include<conio.h>
void main()
{
 int m,n,i,arm=0;
 clrscr();
 cout<<"enter n value:=";
 cin>>n;
 m=n;
 while(n!=0)
 {
   i=n%10;
   arm=arm+i*i*i;
   n=n/10;
 }
 if(m==arm)
 {
   cout<<"this is armstrong number";
 }
 else
 {
   cout<<"this is not amstrong number";
 }
 getch();
}