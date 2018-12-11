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
	Complex(double real, double imaginary);
	bool operator==(const Complex &other) const;
	bool operator!=(const Complex &other) const;
	void setValues();
	double getReal() const;
	double getImaginary() const;
	virtual ~Complex();
};

ostream &operator<<(ostream &out, const Complex &other);


} /* namespace complexnum */

#endif /* COMPLEX_H_ */
