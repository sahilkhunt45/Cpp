
#include<iostream.h>
#include<conio.h>

void main()
{
 int a[20],b[20],c[20],i,n;
 clrscr();
 cout<<"wnter size of array:=";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cout<<"a["<<i<<"]=";
  cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
  cout<<"b["<<i<<"]=";
  cin>>b[i];
 }
 for(i=0;i<n;i++)
 {
  c[i]=a[i];
 }
 for(i=0;i<n;i++)
 {
  c[i]=b[i];         \
 }
 for(i=0;i<n;i++)
 {
  cout<<"c["<<i<<"]="<<c[i];
  cout<<"\n";
 }
 getch();

}