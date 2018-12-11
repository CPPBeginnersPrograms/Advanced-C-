/*
 * Complex.h
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

using namespace std;
namespace complexnum {

class Complex {
private:
	double real;
	double imaginary;

public:
	Complex();
	//constructor
	Complex(double real, double imaginary);
	//copy constructor
	Complex(const Complex &other);
	//overloading assignment operator
	const Complex &operator=(const Complex &other);
	//overloaded equality operator
	bool operator==(const Complex &other);
	//overloaded dereference
	Complex operator*() const;
	void setValues();
	double getReal() const;
	double getImaginary() const;
	virtual ~Complex();
};
//overloaded left bit shift
ostream &operator<<(ostream &out,const Complex &other);
//overloaded plus
Complex operator+(const Complex &c1, const Complex &c2);
Complex operator+(const Complex &c1, double d);
Complex operator+(double d, const Complex &c1);


} /* namespace complexnum */

#endif /* COMPLEX_H_ */
