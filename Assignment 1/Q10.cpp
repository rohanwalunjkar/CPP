#include<iostream>

using namespace std;
int main()
{	cout<<"Program to Find Max of Three Numbers"<<endl; 
	int a,b,c,max;
	cout<<"Enter First number ";
	cin>>a;
	cout<<"Enter Second number ";
	cin>>b;
	cout<<"Enter Third number ";
	cin>>c;
	max=(a>b && a>c)? a : ((b>c)?b:c);
	cout<<"\nMax is "<<max<<endl;

	 return 0;
}
