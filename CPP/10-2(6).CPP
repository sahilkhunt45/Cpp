#include<iostream.h>
#include<conio.h>
void main()
{
 char ch,j,f,m,a,M,J,J1,A,s,o,d,n;
 clrscr();
 cout<<"press j for january \n";
 cout<<"press f for february \n";
 cout<<"press m for march \n";
 cout<<"press M for april \n";
 cout<<"press a for may \n";
 cout<<"press j for june \n";
 cout<<"press J for july \n";
 cout<<"press A for agust \n";
 cout<<"press s for september \n";
 cout<<"press o for october \n";
 cout<<"press n for november \n";
 cout<<"press d for december \n";
 cin>>ch;
 switch(ch)
 {
  case 'j':
  cout<<"january";
  break;
  case 'f':
  cout<<"february";
  break;
    case 'm':
  cout<<"march";
  break;
    case 'a':
  cout<<"april";
  break;
    case 'M':
  cout<<"may";
  break;
    case 'J':
  cout<<"june";
  break;
    case 'J1':
  cout<<"july";
  break;
    case 'A':
  cout<<"agust";
  break;
    case 's':
  cout<<"sepetember";
  break;
    case 'o':
  cout<<"october";
  break;
    case 'n':
  cout<<"november";
  break;
   case 'd':
  cout<<"december";
  break;
  default:
  cout<<"INVALID CHOICE";
 }
 getch();
}