/*
 * main.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: raswantkoushikpeesapati
 */

#include<iostream>
#include<fstream>

using namespace std;

int main()
{

	string inputFileName = "text.txt";

	ifstream inputFile;

	inputFile.open(inputFileName);

	if(inputFile.is_open())
	{
		string line;
//		while(!inputFile.eof())
		while(inputFile)
		{
//			inputFile>>line;		//prints the file on a single line.
			getline(inputFile, line);	//prints the line.

			cout<< line <<endl;
		}
		inputFile.close();
	}
	else
	{
		cout<<"Cannot open the file "<<inputFileName<<endl;
	}
}


