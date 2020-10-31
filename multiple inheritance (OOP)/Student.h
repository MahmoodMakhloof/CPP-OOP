/*
 * Student.h
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "Person.h"

class Student : public Person
{
private:
	int level;
	float GPA;
	string dep;
public:
	void setlevel(int);
	void setGPA(float);
	void setdep(string);

	int getlevel();
	float getGPA();
	string getdep();
	void display();

	Student(string ,int ,string ,string ,string ,int  ,float  ,string);
	Student();
	~Student();
};

#endif /* STUDENT_H_ */
