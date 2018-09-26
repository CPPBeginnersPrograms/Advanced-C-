/*
 * main.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string fileName = "text.txt";

	ifstream input;

	input.open(fileName);

	if(!input.is_open())
	{
		return 1;
	}

	while(!input.eof())
	{
		string line;
		int popu;

		getline(input, line, ':');
		input>>popu;
		input.get();
		input>>ws;
		cout<< line << " -- "<< popu;

	}
	input.close();

	return 0;
}

