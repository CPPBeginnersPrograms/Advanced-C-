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
	const Complex &operator=(const Complex &other);//overload assignment operator
	Complex(const Complex &other); // copy constructor
	virtual ~Complex();

	double getReal() const;
	double getImaginary() const;
	//friend ostream &operator<<(ostream &out, const Complex &other); //using get methods we dont need to use friend function.
};

ostream &operator<<(ostream &out, const Complex &other);

} /* namespace complexnum */

#endif /* COMPLEX_H_ */
