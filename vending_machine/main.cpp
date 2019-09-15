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

	//enter the amount
	cout<<"Enter the amount of dollars"<<endl;
	cin>>dollar; //user input

	noOfStamps = (100 * dollar)/PriceOfStamp; //calculations for no of stamps given according to the user amount.
	penny = (100 * dollar) - (noOfStamps * PriceOfStamp);// calculation for the balance.

	//output
	cout<<"Entered amount: " << dollar << endl;
	cout<<"Total First Class Stamps: "<<noOfStamps<<endl;
	cout<<"Collect balance: "<<penny<<endl;

	return 0;

}






