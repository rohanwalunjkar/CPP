
#include<iostream>
using namespace std;

void input(int arr[][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
}

void mul(int arr[][3],int brr[][3])
{
	int sum=0;
	for(int i=0;i<3;i++)
	{	
		
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				
				sum=sum+(arr[i][k]*brr[k][j]);
			}
		  cout<<sum<<" ";
			sum=0;	
		}

		cout<<"\n";

	}
}

int main()
{
	int arr[3][3];
	int brr[3][3];

	cout<<"Enter the first matrix: ";
	input(arr);
	cout<<"\nEnter the second matrix:";
	input(brr);	
	mul(arr,brr);

	return 0;

}

