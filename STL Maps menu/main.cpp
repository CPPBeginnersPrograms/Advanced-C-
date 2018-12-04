/*
 * main.cpp
 *
 *  Created on: Dec 3, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{

	int n = 5;
	string name ;
	int price = 100;
	map<string, int> Menu;
	//pair<string, int>(name, price);

	cout<<"Enter the name of the item "<<" : ";

	for(int i = 0 ; i < n; i++)
	{

		cin >> name >> price;

		Menu.insert(pair<string,int>(name,price));
	}
	cout<<endl<<endl;

	cout<<"The items in the Menu are : "<<endl;
	for(map<string, int>::iterator it = Menu.begin(); it != Menu.end(); it++)
	{
		cout<< it->first<<setprecision(20)<<setw(15)<<it->second<<endl;
	}

	cout<<endl;
	cout<<"Enter the name to find in the menu : "<<endl;
	cin >> name;

	if(Menu.find(name) != Menu.end())
	{
		cout<< " Item found "<<endl;
		cout<< name <<" : "<<Menu.find(name)->second<<endl;
	}
	else
	{
		cout<<" not found "<<endl;
	}


	return 0;
}



