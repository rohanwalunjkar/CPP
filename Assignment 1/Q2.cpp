#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e;
	cout<<"Enter marks of 5 subjects: ";
	cin>>a>>b>>c>>d>>e;

	int avg=0;
	avg=(a+b+c+d+e)/5;
	cout<<"Average using implicit conversion is : "<<avg<<endl;

	double av=0;
	av=double((a+b+c+d+e))/5;
	cout<<"Average using explicit conversion is : "<<av<<endl;

	return 0;

}

