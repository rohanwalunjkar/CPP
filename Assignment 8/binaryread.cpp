#include<iostream>
#include<fstream>
#include"student.h"

int main()
{	
	  char fname[20];

	 ifstream fin(fname, ios::binary);

	int flag;	
	do	
	{
	try
	{
	flag=1;
	fname[20];
        cout<<"Enter file name : ";
        cin>>fname;
        ifstream fin(fname, ios::binary);

        if(!fin)
        {     
	      flag=0;	
                throw runtime_error("File not found");
		
        }
        }
	catch(runtime_error e)
	{
		cout<<e.what();

	}
	
	}
	while(flag!=1);
	
	student s;
	ifstream fin1(fname, ios::binary);
        while(fin1.read((char *)&s,sizeof(student)))
        {
                s.display();
                
        }
	fin.close();
        fin1.close();
        return 0;
}

