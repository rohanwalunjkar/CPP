#include<iostream>
using namespace std;


void input(int arr[],int n)
{	
	cout<<"Enter the element: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

}

void Sort(int arr[],int n)
{

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}
}


void printArr(int arr[],int n)
{
	cout<<"The sorted array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}



int main()
{

    int arr[5];
    input(arr,5);
    Sort(arr,5);
    printArr(arr,5);

return 0;
}
