#include<iostream>
using namespace std;

int main()
{
	cout<<"Program to convert the Character case"<<endl;
	char ch;
	cout<<"Enter the charcter to change its case ";
	cin>>ch;
	if(ch>64 &&ch<91)
		cout<<"Change character is "<<char(ch+32)<<endl;
	else if(ch>96 &&ch<123)
		cout<<"Change character is "<<char(ch-32)<<endl;
	else
		cout<<"Wrong Input Entered"<<endl;
	return 0;
}


