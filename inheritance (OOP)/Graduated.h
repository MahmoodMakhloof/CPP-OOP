/*
 * Graduated.h
 *
 *  Created on: ??�/??�/????
 *      Author: ��
 */

#ifndef GRADUATED_H_
#define GRADUATED_H_

#include "Student.h"

class Graduated : public Student
{
private:
	string research;
public:
	void setresearch(string);
	string getresearch();
	void display();

	Graduated();
	Graduated(string ,int ,string ,string ,string ,int  ,float  ,string,string);
	virtual ~Graduated();
};

#endif /* GRADUATED_H_ */
