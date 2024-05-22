#include "player.h"

#include <string>

class ftplayer:public Player
{

	private:
		int goal;
	public:
		ftplayer();

		ftplayer(int g);

		void accept();
		void display();
};
