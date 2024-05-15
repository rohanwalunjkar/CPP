#include<iostream>
using namespace std;
void fib(int n)
{
	int a=0;
	int b=1;
	int sum=0;
	if(n==1)
	cout<<"0"<<endl;

	if(n==2)
	cout<<"0 1"<<endl;

	if(n>2)
	{
		cout<<a<<" "<<b<<" ";
		for(int i=2; i<n; i++)
		{
			sum=a+b;
			cout<<sum<<" ";
			a=b;
			b=sum;	
		}

		cout<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter a number upto which you want to print Fibonacci series : ";
	cin>>n;

	fib(n);

	return 0;
}
