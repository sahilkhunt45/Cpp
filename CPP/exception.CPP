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
catch(int x)
{
	cout<<"integer error.."<<x;
}
catch(double y)
{
	cout<<"float error.."<<y;
}
catch(const char z)
{
	cout<<"character error.."<<z;
}
catch(const char *t)
{
	cout<<"string error.."<<t;
}
return 0;
}
