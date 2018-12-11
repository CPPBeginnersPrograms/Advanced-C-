/*
 * main.cpp
 *
 *  Created on: Dec 10, 2018
 *      Author: raswantkoushikpeesapati
 */



#include <iostream>

using namespace std;

class Test
{
private:
	int id;
	string name;
public:
	Test() : id(0), name(" "){} // default constructor

	Test(int id, string name) : id(id) , name(name){} //overloaded constructor

	void print()
	{
		cout << id << " : "<<name <<flush;
		cout<<endl;
 	}

	//overloaded assignment operator.
	const Test &operator=(const Test &other)
	{
		cout<< "Overloaded assignment operator "<<endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	//copy constructor

	Test (const Test &other) : id(other.id), name(other.name)
	{
		cout << "copy constructor "<<endl;
	}
};

int main()
{
	Test test1(10, "Mike"); // creating a class object test1 and assigning the values.
	test1.print();

	//using assignment operator
	Test test2(20 , "bob");
	test2 = test1; // using assignment here to copy the values from test1 to test2 this is shallow copy unless overloaded assignment is not defined.
	test2.print();

	//overloaded assignment operator
	Test test3;
	test3.operator=(test2); // when using overloaded assignment we can do a deep copy
	test3.print();

	//copy initialization
	Test test4 = test1; // this assignment is used by the copy constructor, the default copy constructor does a shallow copy if you overload
						//copy constructor you can make a deep copy.
	test4.print();
}
