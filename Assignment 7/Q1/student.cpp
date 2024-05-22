#include<iostream>
#include<string>
using namespace std;
class Student
{
	private :
		int rollNo, marks;
		string name;
	public :
		

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

        void display()
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
	
	 friend istream &operator >>( istream& is,  Student & s1); 
	

	friend ostream & operator <<(ostream& o,Student & s1);


};



	istream &operator >>( istream& is,  Student & s1)
        {

        cout<<"Enter the Roll Number: ";
        is>>s1.rollNo;
        cout<<"Enter the Name: ";
        is.get();
        getline(is,s1.name);
 //       cin>>name;
        cout<<"Enter the Marks: ";
        is>>s1.marks;
	
	return is;

        }

        ostream & operator<<(ostream& o,Student & s1)
        {

               return o<<"Roll number of student is "<<s1.rollNo<<"\n Name is "<<s1.name<<"\n Marks are"<<s1.marks;
        }
	



	int main()

	{
		Student S1;
		cin>>S1;
		cout<<S1;

	}



































