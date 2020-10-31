/*
 * Calculator.cpp
 *
 *  Created on: 12\5\2020
 *  Author: Bob
 */

#include "Calculator.h"

Calculator::Calculator() {
	// TODO Auto-generated constructor stub

}

Calculator::~Calculator() {
	// TODO Auto-generated destructor stub
}

int Calculator::add(int num1,int num2)
{
	return num1 +num2;
}

int Calculator::add(int num1 ,int num2 ,int num3)
{
	return num1 +num2 +num3;
}

float Calculator::add(float num1 ,float num2)
{
	return num1+num2;
}

string Calculator::add(string str1,string str2)
{
	return str1 + " " + str2;
}
