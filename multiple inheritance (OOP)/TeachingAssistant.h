/*
 * TeachingAssistant.h
 *
 *  Created on: ??�/??�/????
 *      Author: ��
 */


#ifndef TEACHINGASSISTANT_H_
#define TEACHINGASSISTANT_H_

#include"EMPLOYEE.h"
#include"Student.h"

class TeachingAssistant : public Student,public EMPLOYEE
{
public:

	void display();
	TeachingAssistant();
	TeachingAssistant(string ,int ,string ,string ,string ,int  ,float  ,string,string,string ,int);
	virtual ~TeachingAssistant();
};

#endif /* TEACHINGASSISTANT_H_ */
