/*
 * Graduated.cpp
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#include "Graduated.h"

Graduated::Graduated()
{
	research ="unknown";
}

Graduated::Graduated(string nam ,int ag ,string gen,string addr ,string phon,int lev ,float gp ,string de,string re):Student(nam,ag,gen,addr,phon,lev,gp,de)
{
	research=re;
}

void Graduated::setresearch(string re)
{
	research = re;
}

string Graduated::getresearch()
{
	return research;
}

void Graduated::display()
{
	Student::display();
	cout<<"research: "<<research<<"\n";
}

Graduated::~Graduated() {
	// TODO Auto-generated destructor stub
}

