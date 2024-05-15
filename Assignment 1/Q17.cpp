#include<iostream>
using namespace std;

int main()
{
	for(int i=0; i<5; i++)
	{
		for(int j=1; j<=5-i; j++)
		{
			cout<<j;
		}
		
		for(int k=0; k<2*i-1; k++)
		{
			cout<<" ";
		}

		for(int j=5-i; j>=1; j--)
		{	
			if(j==5)
			 continue;
			cout<<j;
		}
		cout<<endl;
	}

}
