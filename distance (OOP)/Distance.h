/*
 * Distance.h
 *
 *  Created on:13
 *      Author:bob
 */

#ifndef DISTANCE_H_
#define DISTANCE_H_

class Distance
{
private:
	int feet;
	int inches;

public:
	void display ();
	Distance operator + (Distance);
	Distance operator - (Distance);
	Distance();
	Distance(int f,int i);
	~Distance();
};

#endif /* DISTANCE_H_ */
