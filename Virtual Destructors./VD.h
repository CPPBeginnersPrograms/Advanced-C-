/*
 * VD.h
 *
 *  Created on: Apr 19, 2019
 *      Author: raswantkoushikpeesapati
 */

#ifndef VD_H_
#define VD_H_

#include <iostream>
using namespace std;
class VD {
public:
	virtual void Fun();
	VD();
	virtual ~VD(); // using virtual to call the appropriate destructors.
};

class VD1 : public VD
{
public:
	virtual void Fun(); // using virtual functions for polymorphism.
	VD1();
	virtual ~VD1(); // using virtual to call the appropriate destructors.
};
#endif /* VD_H_ */
