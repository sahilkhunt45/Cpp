#include<iostream.h>
#include<conio.h>
void main()
{
 int a,b,c,ch;
 clrscr();
 cout<<"press 1 for adition\n";
 cout<<"press 2 for subtraction\n";
 cout<<"press 3 for multiplication\n";
 cout<<"press 4 for division\n";
 cout<<"ENTER YOUR CHOICE\n";
 cin>>ch;
 cout<<"ENTER A VALUE:\n";
 cin>>a;
 cout<<"ENTER B VALUE:\n";
 cin>>b;
 switch(ch)
 {
  case 1:
    c=a+b;
    cout<<c;
    break;
  case 2:
    c=a-b;
    cout<<c;
    break;
  case 3:
    c=a*b;
    cout<<c;
    break;
  case 4:
    c=a/b;
    cout<<c;
    break;
  default:
  cout<<"INVALID CHOICE";
 }
 getch();
}