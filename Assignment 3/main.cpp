#include<iostream>
#include<string>
#include "Student.h"
using namespace std;


int main()
{

        Student arr[10];

        for(int i=0;i<3;i++)
        {
        cout<<"Enter the Detail of " << i+1<<" student: "<<endl;
        arr[i].accept();
        }
	
	int flag=0;
	do
	{
		cout<<"\n-----------------Menu---------------------"<<endl;
		cout<<" 1 : Display Details of Students"<<endl;
		cout<<" 2 : Sort by Roll No"<<endl;
	        cout<<" 3 : Sort by Marks"<<endl;
		cout<<" 4 : Sort by Name"<<endl;
		cout<<" 5 : Exit"<<endl;
		cout<<"Enter choice";
		int ch;
		cin>>ch;	


		switch(ch)
		{
			case 1 :
				{
			           for(int i=0;i<3;i++)
     				   {
				        cout<<"The Detail of " << i+1<<" student: "<<endl;
				        arr[i].display();
			           }
			         break;
		      		}
	       		case 2 :
				{
				 sortByRollNo(arr,3);
				break;
				}			
			case 3 :
                                {
                                 sortByMarks(arr,3);
                                break;
                                }

			case 4 :
                                {
                                 sortByName(arr,3);
                                break;
                                }
			case 5 :
				{
				flag=1;
				cout<<"Happy Holi"<<endl;
				}
		
		
		
		}
	}

	while(flag!=1);

        return 0;
}

