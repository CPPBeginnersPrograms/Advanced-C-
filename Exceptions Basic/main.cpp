/*
 * main.cpp
 *
 *  Created on: Sep 20, 2018
 *      Author: raswantkoushikpeesapati
 */




#include<iostream>
using namespace std;

void mightGoWrong() //function
{
	bool error1 = true;
	bool error2 = true;
	bool error3 = true;


	if(error1)
	{
		throw 8; //throwing error
	}
	if(error2)
	{
		throw " Something went wrong:";
	}
	if(error3)
	{
		throw string("String went wrong");
	}
}

void userMightGoWrong() //nested function
{
	mightGoWrong();
}

int main()
{
	try{  						//try if you get any error
		userMightGoWrong();
	}
	catch(int e)				//catch here and print
	{
		cout<<"Error message : "<< e << endl;
	}
	catch(char const *e)
	{
		cout<<"Error message : "<< e << endl;
	}
	catch(string &e)
	{
		cout<<" Error message : "<< e << endl;
	}


	return 0;
}
