
#include<iostream>
using namespace std;
int main(){

	float BS,HRA,DA,GS,NS,PF;
	cout<<"Enter your basic salary: "<<endl;
	cin>>BS;

	HRA=0.15*BS;
	cout<<"\n HRA Is 15% of Basic Salary :- "<<HRA;
	
	DA=0.30*BS;
	cout<<"\n DA Is 30% of BS:- "<<DA;

	GS=BS+HRA+DA;
	cout<<"\n GS Is sum of BS HRA DA :- "<<GS;

	PF=0.125*GS;
	cout<<"\n PF IS 12.5% of GS:- "<<PF;

	NS=GS-PF;
	cout<<"\n NS IS GS - PF:- "<<NS<<endl;


	
	return 0;
}

