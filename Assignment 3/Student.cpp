#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

        Student::Student()
        {
        rollNo=0;
        name="";
        marks=0;
        }

        Student::Student(int rn,string nm,int mk)
        {
        rollNo=rn;
        name=nm;
        marks=mk;
        }

        void Student::accept()
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

        void Student::display()
        {
        cout<<"The Student name is "<<name<<" with roll number "<<rollNo<<" and marks "<<marks<<endl;
        }

        int Student::getRoll()
        {
                return rollNo;
        }

        int Student::getMarks()
        {
                return marks;
        }

	string Student::getName()
        {
                return name;
        }







void sortByRollNo(Student arr[],int n)
{
        Student temp;
        for(int i =0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                   if(arr[i].getRoll() > arr[j].getRoll())
                        {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }

        }

}

void sortByMarks(Student arr[],int n)
{
        Student temp;
        for(int i =0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                   if(arr[i].getMarks() > arr[j].getMarks())
                        {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }

        }

}

void sortByName(Student arr[],int n)
{

	       Student temp;
        for(int i =0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                   if(arr[i].getName() > arr[j].getName())
                        {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }

        }

}

/*        Student temp;
        string s1,s2;
	int flag,k,l,m,a;
        for(int i =0;i<n;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                         flag=0;
                                s1=arr[i].getName();
                                s2=arr[j].getName();

                                 a=s1.length();
                                 m=s2.length();
                                 k=0,l=0;
                                while(k<n && l<m)
                                {

                                        if(s1[k]!=s2[l])
                                         {
                                            int a=s1[k];
                                            int b=s2[l];

                                            if(a>b)
                                                 {

                                                         temp=arr[i];
                                                         arr[i]=arr[j];
                                                         arr[j]=temp;
                                                        flag=1;
                                                 }

                                         }
                                                   k++,l++;
                                                   if(flag==1)
                                                           break;
                                 }


                }

        }
}
*/

