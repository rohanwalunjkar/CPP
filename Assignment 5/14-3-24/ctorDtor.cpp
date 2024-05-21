#include<iostream>
#include<string>
//define arr 50;

using namespace std;
 class cTor{

	 private: 
		 int rollNo;
		 int marks;
		 string name;

	 public: 
		 cTor(){
		 cout<<"\nConstructor is created"<<endl;
		 }

		 void accept();
		 void display();


		 ~cTor(){
			 cout<<"Destructor Executed"<<endl;
		 }

 };

void cTor::accept(){

	cout<<"Please Enter rollNo: ";
	cin>>rollNo;
	cout<<"Please Enter Marks: ";
	cin>>marks;
	cout<<"Please Enter Name: ";
	cin.get();
	getline(cin,name);

}

void cTor::display(){

	cout<<" Entered Roll No = "<<rollNo<<endl;
	cout<<" Entered Marks = "<<marks<<endl;
	cout<<" Entered Name = "<<name<<endl;

}

int main(){
	int n;
	cout<<"\nEntered Number of students : ";
	cin>>n;
	cTor* ct=new cTor[n];
	for(int i=0; i<n; i++){
	        cout<<"\nEnter Details for student "<<i+1<<endl;
		ct[i].accept();


	}
	for(int i=0;i<n;i++){

	        cout<<"\nEntered Details for student "<<i+1<<endl;
		ct[i].display();
	}
	delete [] ct;
	return 0;

	
}


