/*
 * Counter.cpp
 *
 *  Created on: 13\5\2020
 *      Author:Bob
 */

#include "Counter.h"

#include <iostream>
using namespace std;

Counter::Counter():count(0)
{
}

Counter::Counter(int c):count(c)
{
}

int Counter::getcount()
{
	return count;
}

Counter Counter::operator ++()
{
	++count;
	return Counter(count);
}

Counter Counter::operator ++(int)
{
	count++;
	return Counter(count);
}

Counter Counter::operator --()
{
	--count;
	return Counter(count);
}

Counter Counter::operator --(int)
{
	count--;
	return Counter(count);
}

Counter::~Counter()
{
}

