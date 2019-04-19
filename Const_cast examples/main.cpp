/*
 * main.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: raswantkoushikpeesapati
 */

// using the const_cast<T>(v)
//when and where to use.
// NOTE : cosnt_cast is used to change the const qualifiers of pointers or references.
#include <iostream>
using namespace std;

// when the referred object is constant, and still trying to use const_cast.(should not use const_cast)

//int main()
//{
//	const int a = 10;
//	const int *b = &a;
//	int *d = const_cast<int*>(b);
//	*d = 15; // invalid or undefined behavior
//	cout << a <<endl; // o/p = 10
//	cout << *d << endl; // o/p = 15 // there is no compilation error but the a should be 15 but its 10.
//	//its because the casting a const member results to undefined behavior. so the above case should not be used.
//
//	return 0;
//}
//



// when the referred object is not const (i.e where we can use const_cast)

//int main()
//{
//	int a1 = 10;
//	const int *b1 = &a1;
//	int *d1 = const_cast<int*>(b1);
//	*d1 = 15; // valid code
//	cout << a1 <<endl; // o/p = 15
//	//it did actually removed const and overrode the value with 15.
//
//	return 0;
//}


// using const_cast for third party libraries

void thirdPartyLibraries(int *x)
{
	int k = 10;
	cout << k + *(x)<<endl;
}
int main()
{
	const int a2 = 10; // here we are using const to the actual referred object.
	const int *b2 = &a2;
	thirdPartyLibraries(const_cast<int*>(b2)); // and its a valid code, how?
	//since the third party function is using and wants a non cosnt variable, so we can use a const_cast to remove the const from
	//the variable/object b2.


	return 0;
}
