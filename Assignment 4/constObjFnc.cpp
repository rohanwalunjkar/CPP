#include<iostream>
using namespace std;

#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
        int rollNo;
        string name;
        int marks;
	

public:
        Student()
        {
        rollNo=0;
        name="";
        marks=0;
        }

        Student(int rn,string nm,int mk)
        {
        rollNo=rn;
        name=nm;
        marks=mk;
        }

        void accept()
        {
        cout<<"Enter the Roll Number: ";
        cin>>rollNo;
        cout<<"Enter the Name: ";
        cin.get();
        getline(cin,name);
 //       cin>>name;
        cout<<"Enter the Marks: ";
        cin>>marks;
        }

        void display() const
        {
        cout<<"The Student name is "<<name<<" with roll number "<<rollNo<<" and marks "<<marks<<endl;
        }

        int getRoll()
        {
                return rollNo;
        }

        int getMarks()
        {
                return marks;
        }

	string getName()
        {
                return name;
        }




};
	int main()
	{
		Student s(12,"Rohan",96);

		 Student s2(13,"Shubham",75);
		
		s2.display();

		return 0;
	}




















