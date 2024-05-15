#include<iostream>
using namespace std;

int max(int &a,int &b)
{	if (a>b)
		return a;
	else
		return b;
}

int main()
{	cout<<"Program to find Max number from teo using Call by Address / Reference"<<endl;
	int a,b,c;
	cout<<"Enter first number ";
	cin>>a;
	cout<<"Enter second number ";
	cin>>b;
	c=max(a,b);
	cout<<"Max of "<<a<<" and "<<b<<" is "<<c<<endl;

	return 0;
}
	
