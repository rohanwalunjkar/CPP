#include "utils.h"
void sortRollno(Student s[],int n)
{
	for(int i=0;i<n;i++)
	{	for (int j=1;j<n;j++)
		{
			if(s[i].getRollno()>s[j].getRollno())
			{	Student t;
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
}
