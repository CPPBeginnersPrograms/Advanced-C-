/*
 * main.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: raswantkoushikpeesapati
 */



#include <iostream>
#include <fstream>

using namespace std;

#pragma pack(push, 1)	//remove padding from struct

struct Person{
	char name[100];
	int age;
	double height;

};

#pragma pack(pop)

int main()
{
	// Writing the binary files
	Person person = {"koushik", 26, 6.1};

	string FileName = "text.bin";	//creating a string var and storing the filename.

	ofstream outputFile;	//creating the filestream object.

	outputFile.open(FileName, ios::binary);	//opening the file and setting up the flags.

	if(outputFile.is_open())	//checking if the file is open.
	{
		outputFile.write(reinterpret_cast<char *>(&person), sizeof(Person));	//writing the files, since the name is a char and write takes string we need to type cast.
															//and streamsize argument
		outputFile.close();
	}
	else
	{
		cout<<"Cannot open the file "+FileName<<endl;
	}

	//Reading the binary files
	Person person1;

	ifstream inputFile;	//creating the filestream object.

	inputFile.open(FileName, ios::binary);	//opening the file and setting up the flags.

	if(inputFile.is_open())	//checking if the file is open.
	{
		inputFile.read(reinterpret_cast<char *>(&person1), sizeof(Person));	//writing the files, since the name is a char and write takes string we need to type cast.
															//and streamsize argument
		inputFile.close();
	}
	else
	{
		cout<<"Cannot read the file "+FileName<<endl;
	}

	cout<<person1.name<<" , "<<person1.age<<" , "<<person1.height<<endl;
	return 0;
}

