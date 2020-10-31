/*
 * TeachingAssistant.cpp
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant() {

}
TeachingAssistant::TeachingAssistant(string nam ,int ag ,string gen,string addr ,string phon,int lev ,float gp ,string de , string n,string j,int s):Student(nam,ag,gen,addr,phon,lev,gp,de),EMPLOYEE(n,j,s)
{

}

void TeachingAssistant::display()
{
	Student::display();
	cout<<"name : "<<EMPLOYEE::getname()<<endl;
	cout<<"jop : "<<EMPLOYEE::getjop()<<endl;
	cout<<"salary : "<<EMPLOYEE::getsalary()<<endl;
}
TeachingAssistant::~TeachingAssistant() {

}

