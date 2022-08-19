#include<iostream.h>
#include<conio.h>
void main()
{
 char ch,m,t,w,T,f,s,S;
 clrscr();
 cout<<"press m for monday \n";
 cout<<"press t for tuseday \n";
 cout<<"press w for wednesnday \n";
 cout<<"press T for thursday \n";
 cout<<"press f for friday \n";
 cout<<"press s for saturnday \n";
 cout<<"press S for sunday \n";
 cin>>ch;
 switch(ch)
 {
  case 'm':
  cout<<"monday";
  break;
   case 't':
  cout<<"tuseday";
  break;
   case 'w':
  cout<<"wednesday";
  break;
   case 'T':
  cout<<"tursday";
  break;
   case 'f':
  cout<<"friday";
  break;
   case 's':
  cout<<"saturnday";
  break;
  case 'S':
  cout<<"sunday";
  break;
  default:
  cout<<"INVALID CHOICE";

 }
  getch();
}