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
	out<<"("<<other.getReal() << ","<<other.getImaginary()<<")"<<flush;
	return out;
}
Complex operator+(const Complex &c1, const Complex &c2)
{
	return Complex(c1.getReal() + c2.getReal() , c1.getImaginary() + c2.getImaginary());
}

Complex operator+(const Complex &c1, double d)
{
	return Complex(c1.getReal() + d , c1.getImaginary());
}

Complex operator+(double d, const Complex &c1)
{
	return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex Complex::operator*() const
{
	return Complex(real, -imaginary);
}

Complex::Complex():real(0), imaginary(0){
	// TODO Auto-generated constructor stub

}

Complex::Complex(double real, double imaginary):real(real), imaginary(imaginary){

}

Complex::Complex(const Complex &other)
{
	real = other.real;
	imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other)
{
	real = other.real;
	imaginary = other.imaginary;
	return *this;
}

bool Complex::operator==(const Complex &other)
{
	return (real == other.real) && (imaginary == other.imaginary);
}

void Complex::setValues()
{
	cout<<"Enter the real and imaginary values"<<endl;
	cin >> real >> imaginary;
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
