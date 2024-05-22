#include<iostream>
#include<string>
#include "employee.h"
using namespace std;

int main()
{

	Employee E1(1 , "Rohan", 90000);


	E1.display();
	Employee E2=E1;
	E2.display();
	return 0;
}
