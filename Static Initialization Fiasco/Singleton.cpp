/*
 * Singleton.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#include "Singleton.h"
#include "Dog.h"
#include "Cat.h"

Dog*::Singleton::pd = 0;
Cat*::Singleton::pc = 0;

Dog*::Singleton::getDog()
{
	if(!pd)
		pd = new Dog("Gunner");	//initialize upon first usage idiom

	return pd;
}

Cat*::Singleton::getCat()
{
	if(!pc)
		pc = new Cat("Minni");
	return pc;
}

Singleton::~Singleton() {
	// TODO Auto-generated destructor stub
	if(pd)
		delete pd;
	if(pc)
		delete pc;
	pd = 0;
	pc = 0;
}

