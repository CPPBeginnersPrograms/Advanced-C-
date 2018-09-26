/*
 * main.cpp
 *
 *  Created on: Sep 25, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <list>

using namespace std;

int main()
{
	list <int> numbers;

	numbers.push_back(2);	//insert at the end.
	numbers.push_back(3);
	numbers.push_back(4);
	cout<<"Before modification : "<<endl;
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)	//we cannot work with indexing here to printout the list.
																			//we need to use iterator.
		{
			cout<<*it<<endl;
		}
	cout<<"Size :"<<numbers.size()<<endl;
	cout<<endl;

	numbers.push_front(0);	//insert at the beginning.

	cout<<"after pushing front element :"<<endl;
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)	//we cannot work with indexing here to printout the list.
																			//we need to use iterator.
		{
			cout<<*it<<endl;
		}
	cout<<"Size :"<<numbers.size()<<endl;
	cout<<endl;

	list<int>::iterator it = numbers.begin();
	it++;	//in list you can only increment or decrement but you cannot use 'it+=2' OR 'it-=3' signs to get to the element. since it is not stored contiguous in memory.
	numbers.insert(it,1);
	cout<<"After insertion:"<<endl;
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)	//we cannot work with indexing here to printout the list.
																			//we need to use iterator.
		{
			cout<<*it<<endl;
		}
	cout<<"Size :"<<numbers.size()<<endl;
	cout<<endl;

	list<int>::iterator eraseit = numbers.begin();
	eraseit++;
	eraseit = numbers.erase(eraseit);
	cout<<"After deletion : "<<endl;
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)	//we cannot work with indexing here to printout the list.
																		//we need to use iterator.
	{
		cout<<*it<<endl;
	}
	cout<<"Size :"<<numbers.size()<<endl;
	cout<<endl;

	cout<<"using if condition to insert or delete at specific point : "<<endl;
	for(list<int>::iterator it = numbers.begin(); it != numbers.end();)	//we cannot work with indexing here to printout the list.
																			//we need to use iterator.
		{
		if(*it == 0)
			numbers.insert(it, 1);

		if(*it == 0)
			it = numbers.erase(it);

		else
			it++;
		}
	for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)	//we cannot work with indexing here to printout the list.
																			//we need to use iterator.
		{
			cout<<*it<<endl;
		}
	cout<<"Size :"<<numbers.size()<<endl;
}

