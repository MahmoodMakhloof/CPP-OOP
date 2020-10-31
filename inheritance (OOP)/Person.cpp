/*
 * Person.cpp
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#include "Person.h"

Person::Person()
{
	name = "unknown";
	age = 0;
	address = "unknown";
	phonenumber = "unknown";
}

Person::Person(string nam ,int ag ,string addr ,string phon,string gen):name(nam),age(ag),address(addr),phonenumber(phon),gender(gen)
{

}

void Person::setname(string s)
{
	name = s;
}

void Person::setage(int a)
{
	age = a;
}

void Person::setaddress(string ad)
{
	address = ad;
}

void Person::setphonenumber(string ph)
{
	phonenumber = ph;
}

void Person::setgender(string g)
{
	gender = g;
}

string Person::getname()
{
	return name;
}

string Person::getaddress()
{
	return address;
}

string Person::getphonenumber()
{
	return phonenumber;
}

int Person::getage()
{
	return age;
}

string Person::getgender()
{
	return gender;
}

void Person::display()
{
	cout<<"name: "<<name<<"\ngender: "<<gender<<"\nage: "<<age<<"\nphone number: "<<phonenumber<<"\naddress: "<<address<<"\n";
}

Person::~Person()
{
}

