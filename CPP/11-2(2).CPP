#include<iostream.h>
#include<conio.h>

void main()
{
 int a[20],i,n,pos,val;
 clrscr();
 cout<<"wnter size of array:=";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"a["<<i<<"]=";
  cin>>a[i];
 }
 cout<<"enter position:=";
 cin>>pos;
 cout<<"enter new insert value:=";
 cin>>val;
 for(i=0;i>=pos;i++)
 {
  a[i+1]=a[i];
 }
 a[pos]=val;
 n++;
 for(i=0;i<n;i++)
 {
  cout<<"a["<<i<<"]="<<a[i];
  cout<<"\n";
 }
 getch();

}