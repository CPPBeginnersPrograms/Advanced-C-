/*
 * main.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>

using namespace std;

void test();
void test1(int val);
double test2(double val);

int main()
{
	test();
	test1(9);
	test2(99.96);
//method 1
	void (*ptest)();
	ptest = &test;
	(*ptest)();

//	method 2
	void (*ptest1)(int);
	ptest1 = test1;
	ptest1(9);


//	method 3
	double (*ptest2)(double) = test2;
	ptest2(99.96);

	return 0;
}

void test()
{
	cout<<"Hello from test "<<endl;
}

void test1(int val)
{
	cout << "hello from test1 : "<<val << endl;
}

double test2(double val)
{
	double val1 = val + 1;
	cout<<"hello from test2 : " << val1;
	cout<<endl;
	return val1;
}

