#include<iostream>
#include<iomanip>
using namespace std;

float powe(float a,int b)
{	float total=1.0;
	for(int i=1;i<=b;i++)
		total=total*a;
	return total;
}

int fact(int a)
{	int f=1;
	for (int i=1;i<=a;i++)
		f=f*i;
	return f;
}
int main()
{	cout<<"Program to calculate Sine Value of an Angle"<<endl;
	cout<<"Enter Sine Angle in degree ";
	float d, value,rad;
	cin>>d;
	rad=(d*3.142)/180;
	value = rad-(powe(rad,3)/fact(3))+(powe(rad,5)/fact(5))-(powe(rad,7)/fact(7))+(powe(rad,9)/fact(9));
	cout<<"\n Value of Sin( "<<d<<" )  = "<<fixed<<setprecision(4)<<value<<endl;

	return 0;
}


