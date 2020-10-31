/*
 * EMPLOYEE.h
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<iostream>
using namespace std;

class EMPLOYEE {
private:
	string name;
	string jop;
	int salary;
public:

	string getjop();
	string getname();
	int getsalary();

	void setjop(string j);
	void setname(string n);
	void setsalary(int s);


	EMPLOYEE();
	EMPLOYEE(string , string , int);
	virtual ~EMPLOYEE();
};

#endif /* EMPLOYEE_H_ */
