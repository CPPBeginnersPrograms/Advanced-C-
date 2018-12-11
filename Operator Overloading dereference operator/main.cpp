/*
 * main.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */



#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnum;

int main()
{
	Complex c1;
	Complex c2;

	c1.setValues();
	c2.setValues();

	cout<<*c1<<endl;
	cout<<*c2<<endl;
	cout<<*c1 + c2<<endl;

	cout<<*c1 + Complex(2,4)<<endl;
	cout<<*c1 + *Complex(2,4)<<endl;
	return 0;
}
