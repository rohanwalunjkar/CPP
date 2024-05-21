
#include "utils.h"
#include "student.h"
int main()
{


	Student s(5,"Ram",100);
	s.display();
 
	int n;
	cout<<"Enter number of entries of Student : ";
	cin>>n;

	Student* s1= new Student[n];

	for (int i=0;i<n;i++){
		s1->accept();
	}


	sortRollno(s1,n);


	for (int i=0;i<n;i++){
		s1->display();

	}
	Student::printCount();
	return 0;



}


