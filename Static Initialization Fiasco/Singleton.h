/*
 * Singleton.h
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_
class Dog;
class Cat;
class Singleton {
	static Dog* pd;
	static Cat* pc;

public:
	//Singleton();
	virtual ~Singleton();
	static Dog* getDog();
	static Cat* getCat();
};

#endif /* SINGLETON_H_ */
