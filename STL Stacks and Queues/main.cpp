/*
 * main.cpp
 *
 *  Created on: Dec 4, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test
{
	string name;

public:
	Test () : name(" "){}
	Test (string name) : name(name){}
	~Test()
	{
		cout<<"object destructed"<<endl;
	}

	void print ()
	{
		cout<< name << endl;
	}
};

int main()
{
	// stack syntax with custom object class Test.

	stack<string>names;

	//inserting in to the stack
	//LIFO

	names.push("Koushik");
	names.push("Anu");
	names.push("Kittu");

	//iterating through stack (as we cannot iterate through stack.
	//we can use normal method for printing
	//create a class object

//	Test &test1 = names.top(); we cannot use a reference object, it sometimes work but we cannot pop the reference object.
	/*Test test1 = names.top(); this method is not sufficient but it works.
	test1.print();
	names.pop();

	Test test2 = names.top();
	test2.print();
	names.pop();*/

	while(names.size() > 0)
	{
//		Test &test = names.top(); // this  fine in visual studio but Gcc complains about it.
		Test test = names.top();
		test.print();
		names.pop();
	}

	cout<<endl<<endl;

	//queue which is a typr of FIFO

	queue<string>names1;

	//inserting into the queue

	names1.push("koushik");
	names1.push("Anu");
	names1.push("Kittu");


	Test sam = names1.back();
	sam.print();
	cout<<endl;

	while(names1.size() > 0)
	{
		Test test1 = names1.front();
		test1.print();
		names1.pop();
	}

	return 0 ;

}


