#include "ftplayer.h"
#include <string>


		ftplayer::ftplayer()
                {
			cout<<"Default construct for football"<<endl;
                        goal=0;
                }

                ftplayer::ftplayer(int g):Player("Ronaldo",41)
                {
			cout<<"Para construct for football"<<endl;
                        goal=g;
                }

                void ftplayer::accept()
                {
                        Player::accept();
                        int g;
                        cout<<"Enter the goals:\n";
                        cin>>g;
                        goal=g;
                }

                void ftplayer::display()
                {
                        Player::display();
                        cout<<"Goals are:"<<goal<<endl;
                }
      
               
