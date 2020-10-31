#include "CAR.h"

int main()
{
	CAR c1;
	CAR c2("FIAT",2009,"blue");
	CAR c3;
	//copy
	//CAR c4= c2;
	cout<<"car 1 made by: "<<c1.getmaker()<<"\tmodel: "<<c1.getmodel()<<"\tColor: "<<c1.getcolor()<<"\n";
	cout<<"car 2 made by: "<<c2.getmaker()<<"\tmodel: "<<c2.getmodel()<<"\tColor: "<<c2.getcolor()<<"\n";
	cout<<"car 3 made by: "<<c3.getmaker()<<"\tmodel: "<<c3.getmodel()<<"\tColor: "<<c3.getcolor()<<"\n";
	return 0;
}
