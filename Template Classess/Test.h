/*
 * Test.h
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>
using namespace std;
namespace tempclass {
template<class T, class K>
class Test {
private:
	T obj1;
	K obj2;

public:
	Test(T obj1, K obj2);
	void print();
	virtual ~Test();
};

} /* namespace tempclass */

#endif /* TEST_H_ */
