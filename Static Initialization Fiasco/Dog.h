/*
 * Dog.h
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#ifndef DOG_H_
#define DOG_H_
#include <iostream>
using namespace std;

class Dog {
	std::string _name;
public:
	Dog(char *name);
	void bark();
	virtual ~Dog();
};


#endif /* DOG_H_ */
