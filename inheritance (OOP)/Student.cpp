/*
 * Student.cpp
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#include "Student.h"

Student::Student()
{
	level = 0;
	dep = "unknown";
	GPA = 0;
}

//calling super class to use its attributes
Student::Student(string nam ,int ag ,string gen,string addr ,string phon,int lev ,float gp ,string de):Person(nam,ag,addr,phon,gen)
{
	level =lev;
	dep =de;
	GPA =gp;
}
void Student::setGPA(float g)
{
	GPA = g;
}

void Student::setdep(string d)
{
	dep = d;
}

void Student::setlevel(int l)
{
	level =l;
}

int Student::getlevel()
{
	return level ;
}

float Student::getGPA()
{
	return GPA;
}

string Student::getdep()
{
	return dep ;
}

//overRiding function
void Student::display()
{
	Person::display();
	cout<<"level: "<<level<<"\ndepartment: "<<dep<<"\nGPA: "<<GPA<<"\n";
}

Student::~Student()
{
}

