#include "certificate.h"

		certificate::certificate()
		{	
			cout<<"Certificate:Default Constructor" ;
			cert_no=0;
			name="";
			issuedBy="";
		}

		certificate::certificate(int no,string nm,string iss)
		{	
			cout<<"Certificate:Parameterrized Constructor";

			cert_no=no;
                        name=nm;
                        issuedBy=iss;
		}

		void certificate::display()
		{
			cout<<"Certificate name is: "<<name;
			cout<<"\n No of Certificate is: "<<cert_no;
			cout<<"\n Issued By :"<<issuedBy;
		}
