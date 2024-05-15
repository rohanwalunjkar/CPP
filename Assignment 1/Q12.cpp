78#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter a number to check : ";
	cin>>n;

	int sum=0;
	int temp;
	int k=n;
	
	while(n!=0)
	{
	temp=n%10;
	sum=sum+temp*temp*temp;
	n=n/10;
	}

	if(k==sum)
	cout<<"The Entered number is an Armstrong number."<<endl;
	else
	cout<<"The Entered number is not an Armstrong Number."<<endl;

	return 0;
}
