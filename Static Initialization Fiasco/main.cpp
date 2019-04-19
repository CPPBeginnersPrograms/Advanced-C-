/*
 * main.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: raswantkoushikpeesapati
 */

//static initialization fiasco is a subtle problem which can make program crash, when two static object x and y are initialized in
//separate source files and if y is initialized before x object is initialized then it may crash the program, its 50-50 chance of dying.
//if x is initialized before y object then it is all fine. it usually occurs before main begins
//to avoid this we can use singleton design pattern.

#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Singleton.h"

using namespace std;

//declaring as a global


int main()
{
	Singleton::getCat()->meow();
	return 0;
}




