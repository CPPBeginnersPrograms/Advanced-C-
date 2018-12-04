/*
 * main.cpp
 *
 *  Created on: Dec 4, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int>items;

	int enter;
	int size;
	cout<<"enter the size : "<<endl;
	cin >> size;
	cout<<"Enter the numbers : "
			<<endl;

	for(int i = 0; i < size; i++)
	{
		cin>>enter;
		items.push_back(enter);
	}

	cout << "before sorting :"<<endl;
	for(int i = 0 ; i < items.size(); i++)
	{
		cout<<items.at(i)<< " ";
	}

	cout <<endl;

	sort(items.begin(),items.end());

	cout << "after sorting :"<<endl;
	for(int i = 0 ; i < items.size(); i++)
	{
		cout<<items.at(i)<< " ";
	}

	return 0;
}


