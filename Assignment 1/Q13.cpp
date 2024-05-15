#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	int temp=0;

	for(int i=2; i<=a/2; i++)
	{
		if(a%i==0)
		temp++;

	}
	if(temp==0)
		cout<<"The number is prime"<<endl;
	else
		cout<<"The number is not prime"<<endl;

	return 0;
}
