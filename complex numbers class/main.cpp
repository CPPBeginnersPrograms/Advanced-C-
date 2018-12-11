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

int main(){
	Complex c1(2,3);
	cout << c1 <<endl;

	Complex c2 (3,4); //using assignment operator
	c2 = c1;
	cout <<c2<<endl;

	Complex c3(c2); // using copy constructor
	cout<<c3<<endl;

	Complex c4 = c3; // copy constructor
	cout<<c4<<endl;

	Complex c5; // assignment
	c5.operator=(c2);
	cout<<c5<<endl;

	return 0;
}

