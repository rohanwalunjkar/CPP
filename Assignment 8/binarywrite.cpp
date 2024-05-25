#include<iostream>
#include<fstream>
#include"student.h"

int main()
{
	char fname[20];
	cout<<"Enter file name : ";
	cin>>fname;
	ofstream fout(fname, ios::app|ios::binary);
	try
	{
	if(!fout)
	{
		throw runtime_error("File not found");
		
	}
	}

	catch(runtime_error e)
	{
		cout<<e.what();
	}
	
	student s[5];
	for(int i=0;i<5;i++)
	{
		s[i].accept();
		fout.write((char *)&s[i],sizeof(student));
	}

	fout.close();
	return 0;
}


