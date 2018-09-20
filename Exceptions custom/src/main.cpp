/*
 * main.cpp
 *
 *  Created on: Sep 20, 2018
 *      Author: raswantkoushikpeesapati
 */

//making our own custom exceptions. and its very easy to write our own exceptions classes.

#include<iostream>
#include<exception>

using namespace std;


class MyException : public exception	//inheriting public methods from exception class
{
public:
	virtual const char *what() const throw(){  //const throw() with empty brackets means it
												//doesnt throw any exception, if we try to throw an exception
												//it occurs a runtime error which is bad programming practice.
		return "something went wrong";
	}

	//virtual ~MyException();
};

class Test
{
public:
	void goesWrong() //throw() it doesnt throw an exception
	{
		throw MyException(); 			//calling myexception class
	}
};

int main()
{
	Test test;

	try{
	test.goesWrong();
	}
	catch(MyException &e)
	{
		cout<<e.what()<<endl;
	}
	return 0;
}
