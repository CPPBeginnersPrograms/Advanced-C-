/*
 * main.cpp
 *
 *  Created on: Sep 18, 2018
 *      Author: raswantkoushikpeesapati
 */

#include<iostream>
#include<string>

using namespace std;
int main()
{
	auto sample = {"hello, world! \n"};

	for(const string& words : sample)
	{
		std::cout<<words;
	}

	return 0;
}



