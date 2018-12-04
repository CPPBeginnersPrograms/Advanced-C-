/*
 * main.cpp
 *
 *  Created on: Dec 4, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <vector>

using namespace std;

class Test
{
	string name;
	int id;
public:

	Test(string name, int id) : name(name), id(id){}
	~Test()
	{

	}

	void print() const
	{
		cout << name << " : "<< id <<endl;
	}

/*	bool operator<(const Test &other) const //instead of using operator overloading we can also write our own comparison fucntion.
	{
		if(name == other.name)
		{
			return id < other.id;
		}
		else
		{
			return name < other.name;
		}
	}*/

	friend bool comp(const Test &a, const Test &b); // friend function is useful to get the private
													//variables to the function even if the function is outside of the class.

};
bool comp(const Test &a, const Test &b)
{
	if(a.name == b.name)
	{
		return a.id < b.id;
	}
	else
	{
		return a.name < b.name;
	}
}
int main()
{
	vector<Test>tests;
	// sorting the name and id in the vectors, in maps and sets the key and value are automatically sorted.

	tests.push_back(Test("koushik", 10));
	tests.push_back(Test("Anu", 12));
	tests.push_back(Test("Anu", 9));
	tests.push_back(Test("Kittu", 18));
	tests.push_back(Test("sudha", 19));

	sort(tests.begin(), tests.end(), comp);

	for(int i = 0 ; i < tests.size(); i++)
	{
		tests.at(i).print();
	}

	return 0;
}

