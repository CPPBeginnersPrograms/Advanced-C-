/*
 * Dog.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#include "Dog.h"
#include "Cat.h"

//Cat object is declared global
//Cat c("minni");

void Dog::bark()
{
	cout << "Dog rules! My name is "<<_name << endl;

}
// In the Dog constructor the cat function is called. if the Cat object initializes before Dog object then it is all okay. else the programs will crash.
Dog::Dog(char *name) {
	// TODO Auto-generated constructor stub
	cout << "Constructing Dog "<< name << endl;
	_name = name;
	//c.meow(); // cat object calling meow function.
}

Dog::~Dog() {
	// TODO Auto-generated destructor stub
}



