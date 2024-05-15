#include<iostream>
using namespace std;

int main()
{
	int l, b;
	cout<<"Enter length of rectangle"<<endl;
	cin>>l;
	cout<<"Enter breadth of rectangle"<<endl;
	cin>>b;

	for(int i=0; i<b; i++)
	{
		for(int j=0; j<l; j++)
		{
			if(i==0 || j==0 || i==(b-1) || j==(l-1))
			cout<<"*";
			else cout<<" ";
		}

		cout<<endl;
	}
}
