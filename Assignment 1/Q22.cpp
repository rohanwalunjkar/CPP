#include<iostream>
#include <string>
using namespace std;

int getDate(int &day,string &month,int &year)
{	
	cout<<"Enter Day dd ";
	cin>>day;
	cout<<"Enter Month mm ";
	cin>>month;
	cout<<"Enter Year yy ";
	cin>>year;
	
}


int main()
{	cout<<"Program to print date as dd/mm/yy entered by user"<<endl;
	int day,year;
	string month;
	getDate(day,month,year);
	cout<<"Date given by user is "<<day<<'/'<<month<<'/'<<year<<endl;

	return 0;
}
