/*
 * Cat.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#include "Cat.h"
#include "Dog.h"
#include "Singleton.h"
//Dog object has be given here.
//extern Dog d;

void Cat::meow()
{
	cout << "Cat rules! My name is "<< _name << endl;
}

Cat::Cat(char *name) {
	// TODO Auto-generated constructor stub
	cout << "Constructing cat "<< name <<endl;
	_name = name;
	//d.bark(); // as Cat constructs before Dog, we have called Dog object to see that program crashes.
	Singleton::getDog()->bark();

}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}


