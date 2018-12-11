/*
 * Complex.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Complex.h"

namespace complexnum {

ostream &operator<<(ostream &out, const Complex &other)
{
	out<<"("<<other.getReal()<<","<<other.getImaginary()<<")"<<flush;
	return out;
}
bool Complex::operator==(const Complex &other) const
{
	return (real == other.real) && (imaginary == other.imaginary);
}
bool Complex::operator!=(const Complex &other) const
{
	return !(*this == other);
}
Complex::Complex():real(0), imaginary(0) {
	// TODO Auto-generated constructor stub

}

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){

}

double Complex::getReal() const
{
	return real;
}

double Complex::getImaginary() const
{
	return imaginary;
}
void Complex::setValues()
{
//	double num1;
//	double num2;
	cout << "Enter the real num and imaginary num"<<endl;
	cin >> real >> imaginary;

//	real = num1;
//	imaginary = num2;

}
Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

} /* namespace complexnum */
