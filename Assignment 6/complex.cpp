#include<iostream>
using namespace std;

class Complex
{
	private : 
		int i;
		int j;

	public : 
		Complex()
		{
			i=0;
			j=0;
		}

		void accept()
		{
			cout<<"Enter real part and imagenery part : ";
			cin>>i>>j;
		}

		void display()
		{
			cout<<"\nThe real and imagenery part of the complex numbers is : "<<i<<" and "<<j;
		}

		
		Complex add(Complex &C2)
		{
			Complex C3;
			C3.i=this->i+C2.i;
			C3.j=this->j+C2.j;
			return C3;
		}

		Complex operator+(Complex &C2)
                {
                        Complex C3;
                        C3.i=this->i+C2.i;
                        C3.j=this->j+C2.j;
                        return C3;
                }
		
		Complex operator -(Complex &C2)
                {
                        Complex C3;
                        C3.i=this->i-C2.i;
                        C3.j=this->j-C2.j;
                        return C3;
                }

};




int main()
{
	Complex C1, C2, C3;
	C1.accept();
	C2.accept();
//	C3=C1.add(C2);
	C3=C1+C2;
	C3.display();

	C3=C1-C2;
	C3.display();
	return 0;
}
