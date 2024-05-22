#ifndef EMPLOYEE
#define EMPLOYEE
#include<iostream>
#include<string>
using namespace std;

class Employee
{
        private :
                int id;
                string name;
                int salary;

        public :
                Employee();
		Employee(int,string,int);
                int getsalary();
		

                void accept();

                void display();

};



#endif
