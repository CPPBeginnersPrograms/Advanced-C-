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


	cout << c1 << " : "<< c2 << endl;
	if(c1 == c2)
	{
		cout << "Equal" <<endl;
	}
	else
		cout<<"not equal"<<endl;

	if(c1 != c2)
	{
		cout<<"not Equql"<<endl;
	}
	else
		cout<<"Equal"<<endl;


	return 0;
}


