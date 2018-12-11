/*
 * main.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
using namespace std;

template<class T>

void print (T n)
{
	cout << " Template version : "<< n << endl;
}

//overrided function
void print(int n)
{
	cout<<"Non-template version : "<<n<<endl;
}


int main()
{
	print(50);
	print<>(50);
	print("hello there");


	return 0;
}

