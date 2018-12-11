/*
 * Complex.h
 *
 *  Created on: Dec 10, 2018
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
	Complex(double real, double imaginary);
	Complex(const Complex &other);
	const Complex &operator=(const Complex &other);
	double getReal() const;
	double getImaginary() const;
	virtual ~Complex();
};
ostream &operator<<(ostream &out, const Complex &other);
Complex operator+(const Complex &c1, const Complex &c2);//adding the objects of Complex class
Complex operator+(const Complex &c1,double d); // adding one object of the class to and integer.
Complex operator+(double d, const Complex &c1); // same as above but changing the shifts.

} /* namespace complexnum */

#endif /* COMPLEX_H_ */
