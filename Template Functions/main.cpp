/*
 * main.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */



#include <iostream>

using namespace std;

template<typename T>

void print(T something)
{
	cout<< something<<endl;
}

int main()
{
	print<string>("hello there");

	print(50);

	print<double>(993.333);

	return 0;
}



