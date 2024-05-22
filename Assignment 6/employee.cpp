#include<iostream>
#include "employee.h"
#include<string>
using namespace std;


		Employee::Employee()
		{
			id=0;
                	name= "" ;
                	salary=0;
		}

		Employee::Employee(int id1, string nm, int sal)
		{
		id=id1;
		name=nm;
		salary=sal;
		}
		


		void Employee::accept()
		{	
			int id1;
		        int sal;
			string nm;
			cout<<"Enter details : ";
			cin>>id1>>nm>>sal;
			id=id1;
			name=nm;
			salary=sal;
		}

		void Employee::display()
		{
		cout<<"ID, name and salary of the employee is : "<<id<<" "<<name<<" "<<salary<<endl;
		
		}

		int Employee::getsalary()
                {
                        return salary;
                }



