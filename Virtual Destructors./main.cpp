/*
 * main.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: raswantkoushikpeesapati
 */
// why to use virtual destructor
#include <iostream>
#include  "VD.h"

using namespace std;

int main()
{
	VD *b1 = new VD(); // base class pointer calling base function
	VD *b2 = new VD1(); // base class pointer calling derived function.

	b1->Fun();	// printing from base
	b2->Fun(); //printing from derived.

	delete b1;  //without virtual destructor if we delete both b1 and b2 calls the base class destructor. to avoid this we use virtual destructor.
	delete b2;

	return 0;
}



