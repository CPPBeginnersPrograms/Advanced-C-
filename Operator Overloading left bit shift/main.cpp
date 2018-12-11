/*
 * main.cpp
 *
 *  Created on: Dec 10, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>

using namespace std;

//defining class

class Test
{
private:
	int id;
	string name;
	char initial;

public:
	//default constructor
	Test() : id(0), name(" "), initial(' '){}

	//constructor
	Test(int id, string name, char initial) : id(id), name(name), initial(initial) {}

	// printing function

	void print()
	{
		cout<< id << " : " << initial << "  "<<name<<endl;
	}

	//overloading assignment operator
	const Test &operator=(const Test &other)
	{
		id = other.id;
		name = other.name;
		initial = other.initial;

		return *this;
	}

	//copy constructor
	Test(const Test &other)
	{
		*this = other;
	}

	//overloaded left bit shift

	friend ostream &operator<<(ostream &out, const Test &other)
	{
		out<< other.id<< " : " <<other.initial<<" "<<other.name<<flush;
		return out;
	}

};

int main()
{

	Test test1(1,"Raswant", 'P');
	cout << test1<<endl; //calling overloaded left bit shit operator.

	Test test2(2,"Peesapati", 'K');
	test2 = test1;
	cout<<test2<<endl;

	Test test3(3, "Anu" , 'D');
	test3.print(); // calling print function

	return 0;
}



