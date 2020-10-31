/*
 * CAR.h
 *
 *  Created on: 12\5\2020
 *      Author: BOB
 */

#ifndef CAR_H_
#define CAR_H_

#include <iostream>
using namespace std;

class CAR
{
private:
	string maker;
	int model;
	string color;

public:
	static int ctr;
	void setmaker(string);
	void setmodel(int);
	void setcolor(string);
	string getmaker();
	int getmodel();
	string getcolor();
	CAR();
	CAR(string ,int ,string );
	virtual ~CAR();
};

#endif /* CAR_H_ */
