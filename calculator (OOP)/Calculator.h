/*
 * Calculator.h
 *
 *  Created on: 12\5\2020
 *      Author: Bob
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
using namespace std;

class Calculator
{
public:
	//static methods to use it any where
	static int add(int ,int);
	static int add(int ,int  ,int );
	static float add(float  ,float );
	static string add(string ,string);

	Calculator();
	virtual ~Calculator();
};

#endif /* CALCULATOR_H_ */
