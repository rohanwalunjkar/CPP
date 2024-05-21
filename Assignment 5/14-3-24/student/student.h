#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<iostream>
using namespace std;

class Student
{	private:
		int rollno;
		string name;
		int marks;
		static int count;
	public:
		Student();
		Student(int rol, string nm, int mk);
		int getRollno();
		void accept();
		void display() const;
		static void printCount();
};
#endif



