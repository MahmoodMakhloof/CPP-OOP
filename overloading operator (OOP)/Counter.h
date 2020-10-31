/*
 * Counter.h
 *
 *  Created on: 13\5\2020
 *      Author:Bob
 */

#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
private:
	int count;
public:
	int getcount();
	//prefix ++
	Counter operator ++();
	//postfix ++
	Counter operator ++(int);
	//prefix --
	Counter operator --();
	//postfix --
	Counter operator --(int);

	Counter();
	Counter(int c);
	~Counter();
};

#endif /* COUNTER_H_ */
