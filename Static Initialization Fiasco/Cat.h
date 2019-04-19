/*
 * Cat.h
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#ifndef CAT_H_
#define CAT_H_
#include <iostream>
 using namespace std;

class Cat {
	 std::string _name;
public:
	Cat(char *name);
	void meow();
	virtual ~Cat();
};

#endif /* CAT_H_ */
