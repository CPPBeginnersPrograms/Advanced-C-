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
	int num = 0;
	int num1 =0;
	multimap<int ,string> items;

	items.insert(make_pair(10 , "koushik"));
	items.insert(make_pair(20 , "Anusha"));
	items.insert(make_pair(30 , "Girish"));
	items.insert(make_pair(20 , "Kittu"));
	items.insert(make_pair(30 , "Prasanna"));
	items.insert(make_pair(40 , "RamaKrishna"));
	items.insert(make_pair(50 , "prag"));

	//iterating through the maps
	for(multimap<int, string>::iterator it = items.begin(); it != items.end(); it++)
	{
		cout<<it->first << "  :  " <<it->second<<endl;
	}

	cout<<endl<<endl;

	//to find a specific value
	cout<<"Enter a number to check in the map : "<<endl;
	cin >> num;
	multimap<int,string>::iterator iterFind = items.find(num);
	if(iterFind != items.end())
	{
		cout<< "number found \n"<< iterFind->first << " : "<<iterFind->second<<endl;
	}
	else
	{
		cout<< "not found"<<endl;
	}

	cout<<endl <<endl;

	//find from the specific item through iteration
	for(multimap<int, string>::iterator it = items.find(30); it != items.end(); it++)
	{
		cout << it->first << " : "<< it->second<<endl;
	}

	cout <<endl<<endl;

	// To get a range of repeated keys in c++ 98

	cout << "Enter the num to check the repeated key : "<<endl;
	cin >> num1;
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = items.equal_range(num1);

	for(multimap<int, string>::iterator it = its.first; it != its.second; it++)
	{
		cout<<it->first << " : "<<it->second<<endl;
	}

	cout<<endl<<endl;

	// To get a range of repeated keys in c++11 we use
	auto iter = items.equal_range(30);
	for(multimap<int, string>::iterator it = iter.first; it != iter.second; it++)
	{
		cout<<it->first << " : "<<it->second<<endl;
	}

	return 0;


}


