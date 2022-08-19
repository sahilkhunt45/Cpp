#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter Your a value=";
	cin>>a;
	cout<<"Enter Your b value=";
	cin>>b;

try
{
	if(b==0)
	{
		throw 1;
	}
	else if(b==1)
	{
		throw 1.1;
	}
	else if(b==2)
	{
		throw 'a';
	}
	else if(b==3)
	{
		throw "string";
	}
	else
	{
		c=a/b;
		cout<<"YOUR DIVISION OF C IS  "<<c;
	}
}
catch(...)
{
	cout<<"EXCEPTION ERROR.......";
}
return 0;
}
