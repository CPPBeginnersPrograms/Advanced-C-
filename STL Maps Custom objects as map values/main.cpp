/*
 * main.cpp
 *
 *  Created on: Dec 3, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <map>

using namespace std;


class Person
{
private:
	string name;
	int age;

public:

	Person()    //we need to provide a default constructor because the map is taking two data type out of one which is our custom data type
				//person. so it first takes the default Constructor to assign the values and then it uses the custom constructor to
				//copy the values. also called shallow copy.
	{
		age = 0;
		name = " ";
	}

	//c++ also provides default copy constructor // to avoid some values when copying use below copy constructor.

	//copy constructor
//	to shallow copy
//	Person(const Person &other)
//	{
//		cout<<"Copy constructor running !"<<endl;
//		name = other.name;
//		age = other.age;
//
//	}

	Person(string name1, int age1)
	{
		name = name1;
		age = age1;
	}

	void print()
	{
		cout << name <<" : "<< age<<endl;
	}

};

int main(){

	map<int, Person> people;

	people[0] = Person("Mike", 40);
	people[1] = Person("Milky", 42);
	people[2] = Person("Mikle", 12);
	people[3] = Person("Mikey", 23);

	people.insert(make_pair(55, Person("mikee", 40)));

	for(map<int,Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout<< it->first<<" : ";
		it->second.print();
	}


	return 0;


}


