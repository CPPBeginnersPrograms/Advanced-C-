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

	//default constructor
	Person() : name (""), age(0){}

	//copy constructor
	Person(const Person &other)
	{
		name = other.name;
		age = other.age;
	}

	//constructor
	Person(string name, int age) : name(name), age(age) {}


	void print() const
	{
		cout << name << " : "<<age <<flush;
	}

	bool operator< (Person const &other) const
	{
		if(name == other.name)
		{
			return age < other.age;
		}
		else
		{
			return name < other.name;
		}
	}

};

int main()
{
	map<Person, int> people;

	people[Person("Mike", 49)] = 49;
	people[Person("Mike", 39)] = 39;
	people[Person("Mikey", 45)] = 45;
	people[Person("Mikel", 23)] = 23;
	people[Person("Mikee", 39)] = 39;

	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{

		it->first.print();
		cout<<" : " << it->second <<endl;
	}

	return 0;

}

