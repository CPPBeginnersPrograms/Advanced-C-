/*
 * main.cpp
 *
 *  Created on: Sep 14, 2019
 *      Author: raswantkoushikpeesapati
 */
//vending machine for first class stamps

#include <iostream>
using namespace std;

int main()
{
	int noOfStamps, penny;
	int dollar= 0;
	const int PriceOfStamp = 44;//price in pennies.

	cout<<"Enter the amount of dollars"<<endl;
	cin>>dollar;

	noOfStamps = (100 * dollar)/PriceOfStamp;
	penny = (100 * dollar) - (noOfStamps * PriceOfStamp);

	cout<<"Entered amount: " << dollar << endl;
	cout<<"Total First Class Stamps: "<<noOfStamps<<endl;
	cout<<"Collect change: "<<penny<<endl;

	return 0;

}






