/*
 * VD.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: raswantkoushikpeesapati
 */

#include "VD.h"

VD::VD() {
	// TODO Auto-generated constructor stub
	cout << "Base Constructor" << endl;

}

VD::~VD() {
	// TODO Auto-generated destructor stub
	cout<<"Base Destructor"<<endl;
}

void VD::Fun()
{
	cout<<"Base Fun"<<endl;
}

VD1::VD1()
{
	cout<<"Derived Constructor"<<endl;
}

VD1::~VD1()
{
	cout<<"Derived Destructor"<<endl;
}

void VD1::Fun()
{
	cout<<"Derived Fun"<<endl;
}

