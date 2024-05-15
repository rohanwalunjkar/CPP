#include<iostream>
using namespace std;

void areaCircum(int &r,double &ar, double &cir)
{
	cout<<"Enter radius of circle : ";
	cin>>r;
	double pi=3.14;
	ar=pi*r*r;
	cir=2*pi*r;
}

void areaPeri(int &l, int &b, int &area, int &per)
{
	cout<<"Enter length and breadth of rectangle : ";
	cin>>l>>b;
	area=l*b;
	per=2*(l+b);
}

int main()
{
	int l, b, r, n, area, per;
	double ar, cir;
	cout<<"Menu driven program for finding area of circle and rectangle"<<endl;
	cout<<"1.finding properties of circle 2 \n2.finding properties of rectangle"<<endl;
	cin>>n;

	if(n==1)
	{
		areaCircum(r,ar,cir);
		cout<<"Area of circle = "<<ar<<endl;
		cout<<"Circumference of circle is = "<<cir<<endl;
	}

	else if(n==2)
	{
		areaPeri(l, b, area, per);
		cout<<"Area of rectangle = "<<area<<endl;
		cout<<"Perimeter of rectangle = "<<per<<endl;
	}

	else
		cout<<"wrong choice";

	return 0;
}
