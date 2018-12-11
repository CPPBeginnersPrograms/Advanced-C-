/*
 * Complex.cpp
 *
 *  Created on: Dec 10, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Complex.h"

namespace complexnum {
ostream &operator<<(ostream &out, const Complex &other)
{
	out<<"("<<other.getReal()<<","<<other.getImaginary()<<")"<<flush;
	return out;
}

Complex::Complex() : real(0),imaginary(0) {
	// TODO Auto-generated constructor stub

}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary){

}

const Complex &Complex::operator=(const Complex &other){
	cout<<"assignment"<<endl;
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

Complex::Complex(const Complex &other)
{
	cout<<"copy"<<endl;
	real = other.real;
	imaginary = other.imaginary;
}

double Complex::getReal() const
{
	return real;
}
double Complex::getImaginary() const
{
	return imaginary;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

} /* namespace complexnum */
