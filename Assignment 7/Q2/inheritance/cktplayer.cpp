#include "cktplayer.h"
#include<string>

	CktPlayer::CktPlayer()
	{
		cout<<"Default construct for cricket"<<endl;
		runs=0;
	}

	CktPlayer::CktPlayer(int a):Player("Virat", 35)
	{
		cout<<"Para construct for cricket"<<endl;
	runs=a;
	}

	void CktPlayer::accept()
	{
		cout<<"Enter runs : ";
		cin>>runs;
		Player::accept();
	}

	void CktPlayer::display()
	{
		Player::display();
		cout<<"Runs are : "<<runs<<endl;
	}
