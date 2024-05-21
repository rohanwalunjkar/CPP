
#include<iostream>
using namespace std;
class SwapByRef {

public:
	SwapByRef(){
	
	}
     const void swap(int &ra,int &rb)
	{
	int k=ra;
	ra=rb;
	rb=k;
}


};
  /* void swap(int &ra,int &rb)
	{
	int k=ra;
	ra=rb;
	rb=k;
*/

int main (){

 /*    void swap(int &ra,int &rb)
	{
	int k=ra;
	ra=rb;
	rb=k;
}*/
	
	//void swap(int &ra, int &rb)
	
		int a, b;
	cout<<"Please Enter the value of a:- ";
	cin>>a;
	cout<<"Please Enter the value of b:- ";
	cin>>b;
	SwapByRef sb;
	sb.swap(a,b);
        cout<<"\nThe Value of a is : "<<a;
	cout<<"\n The Value of a is : "<<b<<endl;
	return 0;
}
