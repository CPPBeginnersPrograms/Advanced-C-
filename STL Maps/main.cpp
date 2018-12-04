/*
 * main.cpp
 *
 *  Created on: Dec 3, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string,int> ages; //map key is a string datatype and value is of int data type.

	//insertion into map ages.

	ages["koushik"] = 25;
	ages["Sai ram"] = 24;

	pair<string,int> addToMap("vivek", 24); //pair is used to add the keys and values as a single value.
	ages.insert(addToMap);

	ages.insert(pair<string,int>("varun", 32));//or you can directly use it in a insert function.

	ages.insert(make_pair("sridar", 25)); //similarly make_pair is also used same way.
	ages.insert(make_pair("Akshay", 25));

	//changing the value of the key

	ages["varun"] = 35; //so the keys are unique but we can change the values as many times as we want.


	//checking for the key or value in a map

	//cout<<ages["Anu"]<<endl; //so in this way of finding it actually creates a name in the maps and assign it to 0;
							// you this method is not recommeded to use.

	//using fin function and if statement for searching the items in the map.

	if(ages.find("Anu") != ages.end())
	{
		cout<<"Found Key"<<endl<<endl;
	}
	else
	{
		cout<<"Key not found"<<endl<<endl;
	}



	//one way of iteration and printing using pair

	for(map<string,int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string,int>age = *it; // Pair is used to combine together two values which may be different in type.
									//Pair provides a way to store two heterogeneous objects as a single unit.

		cout<<age.first<<" : "<<age.second<<endl;
	}

	cout<< endl<<endl;

	//regular iteration process

	for(map<string,int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout<<it->first<< " : "<<it->second<<endl;
	}

	return 0;

}



