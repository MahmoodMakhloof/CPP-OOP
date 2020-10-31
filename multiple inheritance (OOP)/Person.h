/*
 * Person.h
 *
 *  Created on: ??Ч/??Ч/????
 *      Author: ст
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
	string address;
	string phonenumber;
	string gender;

public:
	void setname(string);
	void setage(int);
	void setaddress(string);
	void setphonenumber(string);
	void setgender(string);

	string getname();
	int getage();
	string getaddress();
	string getphonenumber();
	string getgender();

	void display();

	Person(string ,int ,string ,string ,string);
	Person();
	~Person();
};

#endif /* PERSON_H_ */
