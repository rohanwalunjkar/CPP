#include"student.h"

		student::student()
		{	
			cout<<"Student::Default constructor call";
			roll=0;
			name="";
		}

		student::student(int rn,string nm):c1(1,"cdac","Gov.India"), ad("32a","Pashan", "444503")
		{
			roll=rn;
			name=nm;
		}

		void student::display()
		{	
			
			cout<<"roll no is:"<<roll;
			cout<<"\nName is:"<<name;
			c1.display();
		}
