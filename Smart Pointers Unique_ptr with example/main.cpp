/*
 * main.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <map>
#include <memory>

using namespace std;

class Utility
{
private:
	map<string, double> table;

public:
	void say(string strKey)
	{
		cout<< strKey <<endl;
	}

	void store(string strKey, double value)
	{
		table[strKey] = value;
	}

	double getValue(string strKey)
	{
		return table[strKey];
	}

	//ctor

	Utility()
	{
		cout<<"created utility"<<endl;
	}

	//dtor

	~Utility()
	{
		cout << "Utility Destroyed"<<endl;
	}

};

class Myclass
{
private:
	std::unique_ptr<Utility> factory;

public:
	//ctor
	 Myclass(){
		 cout<<"created Myclass object "<<endl;
		 factory = std::make_unique<Utility>();
	 }

	 //dtor
	 ~Myclass(){
		 cout<< "Myclass Destroyed"<<endl;
	 }

	 void doSomething(string strKey)
	 {
		 factory->say(strKey);
	 }

	 double getData(string strKey)
	 {
		 return factory->getValue(strKey);
	 }

	 void storeData(string strKey, double value)
	 {
		 factory->store(strKey,value);
	 }
};

int main()
{
	//in the below method we used new keyword to create a memory in the heap, but we forgot to put delete, we you do this mistake there will be a memory leak in the program.
	// you can simply add delete at the end \. But what if you forgot most of the times, thats where smart pointers are used it takes care of the new and delete(basically memory management)

	/*Myclass *uti = new Myclass();
	uti->storeData("koushik", 408);
	uti->doSomething("koushik");
	cout<<uti->getData("koushik")<<endl;
	delete uti;*/

	//using with smart pointers
	std::unique_ptr<Myclass> uti1(new Myclass()); // this is not exception safe
	std::unique_ptr<Myclass> uti = std::make_unique<Myclass>(); // this is exception safe.
	uti->storeData("kou",408);
	uti1->storeData("kit", 888);
	uti->doSomething("Hello");
	cout<<uti->getData("kou")<<endl;
	cout<<uti1->getData("kit")<<endl;

	return 0;
}


