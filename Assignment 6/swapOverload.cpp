#include<iostream>
using namespace std;


void swap(int &a1,int &b1)
{
	int temp;
	temp=a1;
	a1=b1;
	b1=temp;
}

void swap(float &c1,float &d1)
{
	float temp;
        temp=c1;
        c1=d1;
        d1=temp;
}





int main()
{
	int a, b;
	float c, d;

	cout<<"Enter a and b : ";
	cin>>a>>b;
	cout<<"Enter c and d : ";
	cin>>c>>d;

	swap(a,b);
	swap(c,d);

	cout<<"After swap a and b : "<<a<<" and "<<b;

	cout<<"After swap c and d : "<<c<<" and "<<d;

}
