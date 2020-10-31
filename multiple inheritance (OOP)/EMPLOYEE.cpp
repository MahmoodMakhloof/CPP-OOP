/*
 * EMPLOYEE.cpp
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#include "EMPLOYEE.h"

EMPLOYEE::EMPLOYEE() {
	name = "unknown";
	jop = "unknown";
	salary = 0;

}

EMPLOYEE::EMPLOYEE(string n,string j,int s):name(n),jop(j),salary(s)
{

}

int EMPLOYEE::getsalary()
{
	return salary;
}

string EMPLOYEE::getname()
{
	return name;

}

string EMPLOYEE::getjop()
{
	return jop;
}

void EMPLOYEE::setjop(string j)
{
	jop = j;
}

void EMPLOYEE::setname(string n )
{
	name = n;
}

void EMPLOYEE::setsalary(int s)
{
	salary = s;
}


EMPLOYEE::~EMPLOYEE() {
	// TODO Auto-generated destructor stub
}

