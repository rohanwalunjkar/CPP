#include<iostream>
#include<string>
using namespace std;
class address
{
        private:
                string flat;
                string area;
                string pin;
        public:
                address();

                address(string fl,string ar,string p);

                void display();
};
