/*
 * main.cpp
 *
 *  Created on: May 24, 2019
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void removePara(string str);

int main()
{
	string paragraph = "This is a sample text but a complicated problem to be solved, so we are adding more text to see that it actually works.";

	removePara(paragraph);

	return 0;

}

void removePara(string str)
{
	vector<string> word;
	istringstream ss(str);

	do
	{

		string w;
		ss >> w;

		word.push_back(w);


	}while(ss);

	for(int i =0; i < word.size(); i++)
	{
		cout << word.at(i)<<endl;
	}

}
