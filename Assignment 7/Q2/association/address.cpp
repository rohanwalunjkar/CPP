#include "address.h"

		address::address()
		{	
			cout<<"address:Default Constructor" ;
			flat="";
			area="";
			pin="";
		}

		address::address(string fl,string ar,string p)
		{	
			cout<<"address:Parameterrized Constructor";

			flat=fl;
            area=ar;
            pin=p;
		}

		void address::display()
		{
			cout<<"Flat is : "<<flat;
			cout<<"\n Area is : "<<area;
			cout<<"\n pin is : "<<pin;
		}
