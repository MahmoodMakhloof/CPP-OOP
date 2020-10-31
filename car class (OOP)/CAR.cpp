/*
 * CAR.cpp
 *
 * Created on: 12\5\2020
 * Author: Bob
 */

#include "CAR.h"

int CAR::ctr = 0;

//constructor : code executed in the start of object life time
CAR::CAR(string m ,int l ,string c):maker(m),model(l),color(c) //initializing list
{
	ctr++;
	cout<<"the car "<<ctr<<" is initialized\n";
}

//overloading constructor (default)
CAR::CAR():maker("Honda"),model(2020),color("White") //initializing list
{
	ctr++;
	cout<<"the car "<<ctr<<" is initialized\n";
}

//destructor : code executed in the end of object life time
CAR::~CAR()
{
	cout <<"car "<<ctr<<" out of scope , Goodbye\n";
	ctr--;
}

void CAR::setmaker(string mak)
{
	maker = mak;
}

string CAR::getmaker()
{
	return maker;
}

void CAR::setmodel(int mod)
{
	model = mod;
}

int CAR::getmodel()
{
	return model;
}

void CAR::setcolor(string c)
{
	color = c;
}

string CAR::getcolor()
{
	return color;
}
