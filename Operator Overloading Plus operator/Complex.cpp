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
	out<<"("<<other.getReal()<<","<<other.getImaginary()<<")";
	return out;
}

Complex operator+(const Complex &c1, const Complex &c2)
{
	return Complex(c1.getReal() + c2.getReal() , c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex &c1, double d)
{
	return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex operator+(double d,const Complex &c1)
{
	return Complex(c1.getReal() + d, c1.getImaginary());
}

Complex::Complex() : real(0), imaginary(0){
	// TODO Auto-generated constructor stub

}

Complex::Complex(double real, double imaginary){

	this->real = real;
	this->imaginary = imaginary;

}

Complex::Complex(const Complex &other)
{
	cout<<"invoking copy"<<endl;
	real = other.real;
	imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other)
{
	cout<<"invoking assignment"<<endl;
	real = other.real;
	imaginary = other.imaginary;

	return *this;
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
