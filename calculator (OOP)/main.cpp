/*
 * main.cpp
 *
 *  Created on: 12\5\2020
 *      Author:BOB
 */

#include "Calculator.h"

int main ()
{
	Calculator c;
	//overloading methods
	cout<<c.add("Hello","World")<<"\n";

	//if you want to use a method existed in a class , you dont have to create an object
	//just make the meshod static and call the method

	cout<<Calculator::add("mahmoud","makhlouf");
}

