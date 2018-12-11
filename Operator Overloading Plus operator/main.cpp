/*
 * main.cpp
 *
 *  Created on: Dec 10, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include "Complex.h"

using namespace std;
using namespace complexnum;

int main()
{
	Complex c1(2,3);
	Complex c2(3,4);

	cout<<c1+c2<<endl;

	Complex c3 = c2;
	cout<< c1+c3<<endl;

	Complex c4;
	c4 = c2;
	cout<<c4 + c3<<endl;


	Complex c5(3,5);
	c5 = c5 + 5;
	cout<<c5<<endl;

	Complex c6;
	c6 = c1 + c2 + c3;
	cout<<7 + c6<<endl;

	Complex c7;
	cout<<7 + c2 + 5 + 7 + c4 + c3 + 8<<endl;

	return 0;
}

