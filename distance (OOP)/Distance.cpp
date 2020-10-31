/*
 * Distance.cpp
 *
 *  Created on: 13
 *      Author:bob
 */

#include "Distance.h"

#include <iostream>
using namespace std;

Distance::Distance():feet(0),inches(0)
{
}

Distance::Distance(int f,int i):feet(f),inches(i)
{
}

void Distance::display()
{
	cout<<"Feet: "<<feet<<"\tInches: "<<inches<<"\n";
}

Distance Distance::operator +(Distance d)
{
	int f = feet + d.feet;
	int i = inches + d.inches;
	return Distance(f,i);
}

Distance Distance::operator -(Distance d)
{
	int f = feet - d.feet;
	int i = inches - d.inches;
	return Distance(f,i);
}

Distance::~Distance() {
	// TODO Auto-generated destructor stub
}

