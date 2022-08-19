#include<iostream.h>
#include<conio.h>
       ///only virtual////
class animal
{
 public:
  void fly()
  {
    cout<<"CROW IS FLYING"<<endl;
  }
  void walk()
  {
    cout<<"DOG IS WALKING"<<endl;
  }
 void virtual eat()=0;
};
class dog:public animal
{
 public:
 void eat()
 {
   cout<<"DOG IS EATING"<<endl;
 }
};
class crow:public animal
{
 public:
 void eat()
 {
   cout<<"CROW IS EATING";
 }
};
void main()
{
 animal *a;
 clrscr();
 dog d;
 a=&d;
 a->walk();
 a->eat();


 crow c;
 a=&c;
 a->fly();
 a->eat();
 getch();
}
