#include<iostream>
#include<string>
using namespace std;

int main()
{	int year;
	cout<<"Prpgram to check entered year is leap year or not "<<endl;
	cout<<"Enter a year ";
	cin>>year;
	// By if condition
	if ((year%4==0 && year%100!=0) || year%400==0)
		cout<<"    "<<year<<" is Leap year"<<endl;
	else
		cout<<"    "<<year<<" is not Leap year"<<endl;
	
	
	return 0;
}
