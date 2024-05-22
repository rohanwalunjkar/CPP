#include<iostream>
using namespace std;

class base
{
	private:
		int *p;
	public:
		base()
		{
			p=new int;
		}
		
		virtual ~base()
		{
			delete p;
		}
};

class derived :public base
{
        private:
                int *q;
        public:
                derived()
                {
                        q=new int;
                }

                ~derived()
                {
                        delete q;
                }
};


int main()
{
	base *ptr=new derived;
	delete ptr;
	return 0;
}

