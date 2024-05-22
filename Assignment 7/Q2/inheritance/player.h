#ifndef HALLO
#define HALLO

#include<string>
#include<iostream>
using namespace std;


class Player
{
	private :
		string name;
		int age;
	public :
		Player();
		Player(string, int);
		void accept();
		void display();
};


#endif
