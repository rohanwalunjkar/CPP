#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{	cout<<"Program for Calculator "<<endl;
	char ch;
	int a,b;
	cout<<" Enter operator to perform \n   ' + ' for Addition\n   ' - ' for Subtraction \n   ' * ' for Multiplication \n   ' / ' for Division \n   ' E ' for Exit\n   Enter Your Choise  ";
	cin>>ch;
	float ans;
	
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter Second number : ";
	cin>>b;

	switch (ch)
		{	case '+' :
				cout<<"Answer is "<<a+b<<endl;
				break;
			case '-' :
				cout<<"Answer is "<<a-b<<endl;
				break;
			case '*' :
				cout<<"Answer is "<<a*b<<endl;
				break;
			case '/' :
				cout<<"Answer is "<<a/b<<endl;
				break;
			case 'E' :
				exit(0);
			default :
				cout<<"Wrong Input try again"<<endl;
		}


	return 0;
}
