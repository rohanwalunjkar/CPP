#include<iostream>

using namespace std;
int main()
{
	int a,b,temp;
	cout<< "Enter first number ";
	cin>> a;
	cout<<"Enter second number ";
	cin>> b;
	 temp=a;
	 a=b;
	 b=temp;
	 cout<< "After Swapping Numbers are:  "<<a<<"  "<<b<<endl;
	 return 0;
}
