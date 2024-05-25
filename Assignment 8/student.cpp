#include"student.h"
   
void student::accept()
{	
	
	cout<<"Enter the roll number\n";
	cin>>roll;
	
	
	cout<<"Enter the name\n";
	cin.get();	
	cin.getline(name,20);
	
}

void student::display()
{
	cout<<"\n Roll number is "<<roll<<endl;
	cout<<"Name is: "<<name;
}


