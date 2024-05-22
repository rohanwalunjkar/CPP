#include<iostream>
using namespace std;

class animal
{
	private:
		int weight;
	public:
		animal()
		{
		cout<<"\nAnimal Constructor";
		}

		void setweight()
		{	int w;
			cout<<"\nEnter the weight";
			cin>>w;
		}

};

 class lion:virtual public animal
{
	private:
		int length;
	public:
		lion()
		{
		cout<<"\nLion Constructor";
		}
};

 class tiger:virtual public animal
{
	private:
		int height;
	public:
		tiger()
		{
		cout<<"\nTiger Constructor";
		}
};

class liger:public lion,public tiger
{

};

int main()
{	
	liger li;
	li.setweight();
	return 0;


}

