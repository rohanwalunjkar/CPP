#include<iostream>
#include<string>
using namespace std;

class Employee
{
	private :
		int empid;
		int salary;
		string name;
		static int count;

	public : 
		Employee()
		{
			empid=0;
			name="";
			salary=0;
			count++;
		}

		Employee(int id, string nm, int sal)
		{
			empid=id;
			name=nm;
			salary=sal;
			count++;
		}

		void accept()
		{
			cout<<"Enter Emplyee ID : ";
			cin>>empid;
			cout<<"Enter Employee name : ";
			cin>>salary;
			cout<<"Enter Employee salary : ";
			cin>>name;
		}

		void display()
		{
			cout<<"The Employee ID is : "<<empid<<" and name of the Employee is :" <<name<<" with salary : "<<salary<<endl;
		}

		static void PrintCount()
		{
			cout<<"The no of Employees are : "<<count<<endl;
		}


}; 
int Employee::count=0;


	int main()
	{
		Employee E1;
		//E1.PrintCount();

		Employee E2(201, "Rohan", 95000);
		//E2.PrintCount();
		Employee::PrintCount();



		return 0;

	}








































