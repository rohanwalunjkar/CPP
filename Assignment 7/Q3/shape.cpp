
#include<iostream>
#include<string>
using namespace std;

class shape
{
	public : 
		shape()
		{
			cout<<"Shape constructor"<<endl;
		}
		virtual void accept()=0;
		virtual void area()=0;
		virtual void peri()=0;
		virtual void display()
		{
		}
};

class rectangle : public shape
{
	private :
		int l, b;
	public :
		rectangle()
		{
			cout<<"Rectangle default constructor"<<endl;
		}
		void accept()
		{
			cout<<"Enter length and breadth of rectangle : ";
			cin>>l>>b;
		}

		void display()
		{
			cout<<"the length and breadth of rectangle are : "<<l<<" and "<<b<<endl;
		}

		void area()
		{
			int a;
			a=l*b;
			cout<<"The area of rectangle is : "<<a<<endl;
		}

		void peri()
		{
			int p;
			p=2*(l+b);
			cout<<"The perimeter of rectangle is : "<<p<<endl;
		}
};

class circle : public shape
{
	private :
		float r;
		const float pi=3.142;
		
	public :
		circle()
		{
			cout<<"circle default constructor"<<endl;
		}
		void accept()
		{
			cout<<"Enter radius of circle : ";
			cin>>r;
		}

		void area()
		{
			float a;
			a=pi*r*r;
			cout<<"The area of circle is : "<<a<<endl;
		}

		void peri()
		{
			float p;
			p=2*pi*r;
			cout<<"The perimeter of circle is : "<<p<<endl;
		}
};

class square : public shape
{
	private :
		int s;
	public :
		square()
		{
			cout<<"square default constructor"<<endl;
		}
		void accept()
		{
			cout<<"Enter side of a square";
			cin>>s;
		}

		void area()
		{
			int a;
			a=s*s;
			cout<<"The area of square is : "<<a<<endl;
		}

		void peri()
		{
			int p;
			p=4*s;
			cout<<"The perimeter of square is : "<<p<<endl;
		}
};


	int main()
	{
		shape *sp;
		rectangle r;
		sp=&r;
		sp->accept();
		sp->display();
		sp->area();
		sp->peri();

		circle c;
		sp=&c;
		sp->accept();
		sp->area();
		sp->peri();
		
		square s;
		shape &sr=s;
		
		
		sr.accept();
		sr.area();
		sr.peri();

	}


