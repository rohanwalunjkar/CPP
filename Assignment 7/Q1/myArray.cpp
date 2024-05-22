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


	void operator=(myArray & a)
        {
                this->size=a.size;

                int *p=new int[this->size];

                for(int i=0;i<this->size;i++)
                {
                        this->p[i]=a.p[i];
                }
        }



        void setData(int val,int pos)
        {
                p[pos]=val;
        }

       // int getData(int pos)
       // {
         //       return p[pos];
       // }
       

//	void operator[]

	int& operator[](int pos)
	{
		return p[pos];
	}

	bool operator==(myArray & b)
	{
		if(this->size!=b.size)
			return false;
		
		int i=0;
		while(i<size)
		{	
			if(this->p[i]!=b.p[i])
			{
				return false;
			}
			i++;
		}


		return  true;

	}


	bool operator!=(myArray & b)
        {
                if(this->size!=b.size)
                        return true;

                int i=0;
                while(i<size)
                {
                        if(this->p[i]!=b.p[i])
                        {
                                return true;
                        }
                        i++;
                }


                return  false;

        }




        ~myArray()
        {       cout<<endl<<"Destructor called";
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


	myArray b=a;

	cout<<"The B is print\n";
        for(int i=0;i<n;i++)
        {
        cout<<"The value at "<<i<<" position is "<<b[i]<<endl;
     
        }




	//int m;
	//cout<<"Enter the size of array: ";
	//cin>>m;


	//myArray b(m);

	//int data1,pos1;

        //for(int i=0;i<m;i++)
       // {
       // cout<<"Enter position and value  of the  element: "<<endl;
       // cin>>pos1>>data1;
        //b.setData(data1,pos1);
        //}



	if(a==b)
	{
	cout<<"Both array are equal";

	}
	


	if(a!=b)
	{
	cout<<"Array are different";
	}











        return 0;


}

