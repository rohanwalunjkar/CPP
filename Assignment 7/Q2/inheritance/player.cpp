#include "player.h"

Player::Player()
{
	cout<<"Default construct for player"<<endl;
	name="Rachin";
	age=22;
}

Player::Player(string xyz,int a)
{
	cout<<"para construct for player"<<endl;
	name=xyz;
	age=a;
}

void Player::accept()
{
	cout<<"Enter name of a player : ";
	cin.get();
	getline(cin, name);
	cout<<"Enter age : ";
	cin>>age;

}

void Player::display()
{
	cout<<"Name of player is : "<<name<<endl;
	cout<<"Age of PLayer is : "<<age<<endl;
}
