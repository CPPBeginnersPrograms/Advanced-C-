/*
 * main.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include "Test.h"
#include "Test.cpp"
using namespace std;
using namespace tempclass;


int main(){

	Test<char, unsigned long int> test1('K' , 9901123123);
	test1.print();

	return 0;

}
