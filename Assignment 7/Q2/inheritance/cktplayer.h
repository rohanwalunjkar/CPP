#include "player.h"
#include<string>

class CktPlayer:public Player
{
	private :
		int runs;
	public :
		CktPlayer();
		CktPlayer(int);
		void accept();
		void display();


};
