/*
 * main.cpp
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#include "Student.h"
#include "Graduated.h"

int main()
{
	/* STUDENT CLASS
	Student s1;
	s1.setname("Mahmoud");
	s1.setgender("male");
	s1.setdep("CS");
	s1.setage(22);

	Student s2("karim",17,"male","menouf","010000",3,9.7,"network");
	s1.display();
	cout<<"***********************************\n";
	s2.display(); */

	Graduated g1("karim",17,"male","cairo","01016180477",3,9.7,"network","robots");
	g1.display();
	return 0;
}

