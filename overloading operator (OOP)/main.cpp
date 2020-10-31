/*
 * Counter_test.cpp
 *
 *  Created on: 13\5\2020
 *  Author:Bob
 */

#include "Counter.h"
#include <iostream>
using namespace std;

int main()
{
	Counter c1(5);
	Counter c2(10);
	Counter c3 ;
	Counter c4 ;

	cout<<c1.getcount()<<"\t"<<c2.getcount()<<"\t"<<c3.getcount()<<"\t"<<c4.getcount();

	return 0;
}
