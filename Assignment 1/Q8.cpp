#include<iostream>
using namespace std;
int main()
{	cout<<"Program to calculate Total salary by including Basic Pay and Sales Commission"<<endl;
	float basic,t,net;
	int s;
	cout<<"  ----------------------------------------------------\n";
	cout<<"  |  Sales Amount in Rupees  |   Commission on Sales |\n";
	cout<<"  ----------------------------------------------------\n";
	cout<<"  |      0 to 5000           |          0%           |\n";
	cout<<"  |      5000 to 7500        |          3%           |\n";
	cout<<"  |      7501 to 10500       |          8%           |\n";
	cout<<"  |      10501 to 15000      |         11%           |\n";
	cout<<"  |      15000 and above     |         15%           |\n";
	cout<<"  ----------------------------------------------------\n";
	cout<<"Enter Basic Salary in rupees  :";
	cin>>basic;
	cout<<"Enter Total Sales Amount  :";
	cin>>t;
	cout<<endl;
	if(t<5001)
		s=0;
	else if (t>5000 && t<7501)
		s=3;
	else if (t>7500 && t<10501)
		s=8;
	else if (t>10500 && t<15000)
		s=11;
	else
		s=15;

	net= basic + (( s * t)/100);

	cout<<" Net Salary of Employee is  "<<net<<endl;

	return 0;
}
