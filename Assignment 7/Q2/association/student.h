#include <iostream>
#include <string>
#include "certificate.h"
using namespace std;
class student
{
        
        private:
                int roll;
                string name;
                certificate c1;
                address ad;
        public:
                student();

                student(int rn,string nm);
                void display();
};      

