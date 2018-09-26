/*
 * main.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: raswantkoushikpeesapati
 */

#include<iostream>

using namespace std;

#pragma pack(push,1)		//removed padding from struct
struct Person{			//creating a struct object.(by default struct is maintained by padding for efficiency.)
	char name[50];
	int age;
	double height;
};
#pragma pack(pop)		//it is surrounded by the pragma, padding it again.

int main()
{
	cout<< sizeof(Person)<<endl;	//without padding off the output size will be 64 bytes where the original bytes
									//are 62.


	return 0;
}


