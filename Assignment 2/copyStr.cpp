
#include<iostream>
using namespace std;


void copyStr(char ch[],char bh[])
{	int i=0;
	while(ch[i]!='\0')
	{
		bh[i]=ch[i];
		i++;
	}
	bh[i]='\0';
}

int main()
{
	char ch[20];
	char bh[20];
	
	cout<<"Enter the string: "<<endl;
	cin.getline(ch,20);

	copyStr(ch ,bh);
	
	cout<<"The copy of the entered string is: ";
	cout<<bh<<endl;
	return 0;
}

