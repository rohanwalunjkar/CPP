#include<iostream>
#include<string>
using namespace std;
  
  int main()
  {       int year;
          cout<<"Prpgram to check entered year is leap year or not "<<endl;
          cout<<"Enter a year ";
          cin>>year;
          
          //By conditional operater 
         
          string sol;
          sol=((year%4==0 && year%100!=0) || year%400==0)?"Leap year":"Not Leap year";
          cout<<sol<<endl;
  
          return 0;
  }
                                                                                                                              
          
