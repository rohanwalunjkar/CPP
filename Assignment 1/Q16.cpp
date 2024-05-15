#include<iostream>
using namespace std;



int main()
{

	int sum=0,a,b;
	
	cout<<"\n Matchstick Game\n";
	
	while(sum<=21)
	{	
	

		
		cout<<"Enter user choice:\n";
		cin>>a;
		sum=sum+a;
		
//		cout<<"\n no of matchstick: "<<sum<<endl;
		if(a==1)
		{
			sum=sum+4;
			cout<<"Computer choice:4\n";
		}
		if(a==2)
		{                 
			sum=sum+3;
			cout<<"Computer choice:3\n";
		}
		if(a==3)
		{
			sum=sum+2;
			cout<<"Computer choice:2\n";
		}
		if(a==4)
		{
			sum=sum+1;
			cout<<"computer choice:1\n";
		}

		cout<<"\n no of matchstick:  "<<sum<<endl;
		if(sum==20)
		{	
			cout<<"\nEnter user choice:"<<endl;
			cin>>a;
			sum=sum+a;
			cout<<"Total Matchstick is :"<<sum<<endl;
			cout<<"\nuser loss the game\n";
			break;
		}
	

	}
	





}

