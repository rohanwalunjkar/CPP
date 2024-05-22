#include<iostream>
using namespace std;


class myArray
{
	
private:
	int*p;
	int size;

public:
	myArray(int n)
	{
		size=n;
		p= new int[size];
		
	}

	myArray(myArray & m)
	{
		this->size=m.size;

		int *p=new int[this->size];

		for(int i=0;i<this->size;i++)
		{
			this->p[i]=m.p[i];
		}
	}


	void setData(int val,int pos)
	{
		p[pos]=val;
	}

	int getData(int pos)
	{
		return p[pos];
	}

	~myArray()
	{	cout<<endl<<"Destructor called";
		delete [] p;
	}
};





int main()
{

int n;
cout<<"Enter the size of array: ";
cin>>n;

myArray a(n);

int data,pos;
	for(int i=0;i<n;i++)
	{
	cout<<"Enter position and value  of the  element: "<<endl;
	cin>>pos>>data;
	a.setData(data,pos);
	}
	
	cout<<"The A is print\n";


	for(int i=0;i<n;i++)
        {
        cout<<"The value at "<<i<<" position is "<<a.getData(i)<<endl;

        }
			

	myArray b(a);
	
	cout<<"The B is print\n";
	for(int i=0;i<n;i++)
        {
        cout<<"The value at "<<i<<" position is "<<b.getData(i)<<endl;
     
        }

	
	cout<<"The A is print Again \n";


        for(int i=0;i<n;i++)
        {
        cout<<"The value at "<<i<<" position is "<<a.getData(i)<<endl;

        }

	cout<<"The value at "<<0<<" position is "<<a.getData(0)<<endl;
	
	
	return 0;


}

