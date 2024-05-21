
#include "student.h"

Student::Student()
{	count++;
}

Student::Student(int rno,string nm,int mk)
{
	rollno = rno;
	name = nm;
	marks = mk;	
	count++;
}

int Student::getRollno()
{	return rollno;
}

void Student::accept()
{
	cout<<"Enter student roll no : ";
	cin>>rollno;
	cout<<"Enter student name  : ";
	cin.get();
	getline(cin,name);
	cout<<"Enter student marks : ";
	cin>>marks;
}
void Student::display() const
{
	cout<<"Student rollno is : "<<rollno<<endl;	
	cout<<"Student Name is : "<<name<<endl;
	cout<<"Student Marks is : "<<marks<<endl;
}

 void Student::printCount()
{cout<<" count "<<count<<endl;
}

int Student :: count= 0;




