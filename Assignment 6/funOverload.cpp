#include<iostream>
using namespace std;

/* 		int add(int a, int b)
		{
			return a+b;

		}
*/
		int add(int a, int b, int c=0 )
		{
			return a+b+c;
		}                                                  
	


int main()
{	
	int a=10,b=20,c=30;
	cout<<add(a,b)<<endl;

	cout<<add(a,b,c);


	return 0;
}
