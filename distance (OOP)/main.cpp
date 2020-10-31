/*
 * main.cpp
 *
 *  Created on: 13
 *      Author:bob
 */

#include <iostream>
using namespace std;

#include "Distance.h"

int main()
{
	Distance d1(1,3);
	Distance d2(5,70);
	Distance d3(12,8);
	Distance d4 = d2 + d3 + d1;
	d4.display();
	return 0;
}

