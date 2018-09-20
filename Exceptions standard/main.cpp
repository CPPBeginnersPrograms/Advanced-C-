/*
 * main.cpp
 *
 *  Created on: Sep 20, 2018
 *      Author: raswantkoushikpeesapati
 */


#include<iostream>
using namespace std;

class catchWrong
{
public:
	catchWrong(){				//constructor error message.
		char *pname = new char[99999999999999999];
		delete[] pname;
	}
};

int main()
{
	try{		//trying with constructor object.
		catchWrong wrong;
	}
	catch(bad_alloc &e)  		//catching the error message using bad_alloc method.
	{
		cout<<"Error message : "<< e.what()<<endl;		//what is the method of bad_alloc which return the print msg.
	}

	cout<<"still running"<<endl;

	return 0;
}
