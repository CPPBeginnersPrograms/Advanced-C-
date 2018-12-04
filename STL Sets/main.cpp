/*
 * main.cpp
 *
 *  Created on: Dec 3, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <set>

using namespace std;

class Test
{
	string name;
	int id;
public:
	Test(): name(" "), id(0) {}
	Test(string name, int id) : name(name), id(id){}
	void print() const
	{
		cout<< name << " : "<< id<< flush;
		cout<<endl;
	}
	bool operator< (const Test &other) const
	{
		if(name == other.name)
		{
			return id < other.id;
		}
		else
		{
			return name < other.name;
		}
	}

};
int main()
{
	set<int>numbers;

	//inserting number sets only take unique numbers and repeated values are ignored.
	numbers.insert(10);
	numbers.insert(40);
	numbers.insert(30);
	numbers.insert(20);
	numbers.insert(50);

	//iterating through the sets
	for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout<< *it <<endl;
	}

	//finding the value in the set.
	set<int>::iterator itFind = numbers.find(20);
	if(itFind != numbers.end())
	{
		cout<<"number found "<< *itFind<<endl;
	}
	else
	{
		cout<<"number not found"<<endl;
	}

	//another approach to find the number in the set.
	if(numbers.count(40))
		cout<<"Number found :"<<endl;

	// using class test as a custom object in set.
	set<Test> items;

	items.insert(Test("kittu" , 20));
	items.insert(Test("koushik", 30));
	items.insert(Test("koushik", 40)); // you can override to insert same name with different id, if you use same name and same id then it will ignore.
	items.insert(Test("momdad" , 40));

	for(set<Test>::iterator it = items.begin(); it != items.end(); it++)
	{
		it->print();
	}

	return 0;

}



