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
        Student();
        Student(int ,string ,int );

        void accept();

        void display();
	int getRoll();

        int getMarks();
        string getName();
};

	void sortByRollNo(Student[],int);
	void sortByMarks(Student[],int);
	void sortByName(Student[],int);
