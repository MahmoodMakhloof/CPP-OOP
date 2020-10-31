#include<iostream>
using namespace std;

#include"TeachingAssistant.h"
int main()
{
TeachingAssistant T1("mahmoud",22,"male","menouf","01016180477",2,99.5,"cs","mahmoud","engineer",10000);
T1.EMPLOYEE::setname("ahmed");
T1.display();

	return 0;
}
