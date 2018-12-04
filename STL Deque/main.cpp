/*
 * main.cpp
 *
 *  Created on: Dec 4, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <deque>

using namespace std;

class Test
{
	int num;
public:
	Test(int num) : num(num){}

	void print()
	{
		cout<< num<<endl;
	}
};


int main()
{
	deque<int>items;

	items.push_back(12);
	items.push_back(13);
	items.push_back(14);
	items.push_back(15);
	items.push_back(16);
	items.push_back(17);
	items.push_front(11);
	items.push_back(18);

	while(items.size() > 0)
	{
		cout<<items.back()<<endl;
		items.pop_back();
	}


	// above is pushing from back and below is pushing from front, so any of these will
	//work but both of them cannot work or print at the same time,
	//as the first method popping all the items from items there are left with nothing.

	while(items.size() > 0)
	{
		Test test = items.front();
		test.print();
		items.pop_front();
	}

//	while(items.size() > 0)
//	{
//		Test test2 = items.back();
//		test2.print();
//		items.pop_back();
//	}

	return 0;
}



