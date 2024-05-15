#include<iostream>
using namespace std;

void charLine(char a, int b)
{
	for(int i=1; i<=b; i++)
	{
		cout<<a;
	}
	cout<<endl;
}

int main()
{
	char a;
	int b;
	cout<<"Enter the character and length of the character : ";
	cin>>a>>b;
	charLine(a,b);
	cout<<"\t Data Type \t Size in Bytes"<<endl;
	charLine(a,b);
	cout<<"\t Integer\t  4"<<endl;
	charLine(a,b);
	cout<<"\t Character\t  1"<<endl;
	charLine(a,b);
	cout<<"\t Float\t\t  4"<<endl;
	charLine(a,b);


	return 0;
}
