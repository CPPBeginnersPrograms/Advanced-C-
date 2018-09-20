/*
 * main.cpp
 *
 *  Created on: Sep 20, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <exception>

using namespace std;

void goesWrong()
{
	bool error1Detected = true;
	bool error2Detected = false;


	if(error1Detected)
	{
		throw bad_alloc();
	}
	if(error2Detected)
	{
		throw exception();
	}
}

int main()
{
	try
	{
		goesWrong();
	}
//	catch(exception &e)
//	{														//here if you declare like this you will get a logic error
//		cout<<"Error from exception : "<<e.what()<<endl; // so when ever if you call bad_alloc and the method is like this
//	}											// it prints from exception catch, because polymorphism comes into play,
//	catch(bad_alloc &e)		// polymorphism means we can use a derived class or sub class when ever there is a required
//	{							//parent class. So if we change the order of declaration by declaring the derived class first
//		cout<<"Error from bad_alloc : "<<e.what()<<endl;	// and then the base class it will work properly.
//	}
	catch(bad_alloc &e)
	{
		cout<<"Error from bad_alloc : "<<e.what()<<endl;
	}
	catch(exception &e)
	{
		cout<<"Error from exception : "<<e.what()<<endl;
	}
	return 0;

}


