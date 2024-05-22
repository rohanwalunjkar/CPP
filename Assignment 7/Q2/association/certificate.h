#include<iostream>
#include<string>
using namespace std;
class certificate
{
        private:
                int cert_no;
                string name;
                string issuedBy;
        public:
                certificate();

                certificate(int no,string nm,string iss);

                void display();
};
