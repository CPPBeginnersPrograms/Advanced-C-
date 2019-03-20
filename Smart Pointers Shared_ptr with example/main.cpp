/*
 * main.cpp
 *
 *  Created on: Mar 20, 2019
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Dog
{
private:
	string name_;

public:
	Dog(string name)
	{
		name_ = name;
		cout<<"Dog is Created : "<<name_<<endl;
	}

	Dog()
	{
		cout<<"nameless Dog is Created"<<endl;
		name_ = "nameless";
	}

	~Dog()
	{
		cout<<"Dog is Destoryed : " <<name_<<endl;
	}

	void bark()
	{
		cout<<"Hello i am Dog "<< name_ <<endl;
	}
};

int main()
{
	//not recommended to use it.
/*	Dog *d = new Dog("gunther");
	d->foo();
	delete d;*/


	//using this method there are two steps
	//1. the Dog p is created and 2. The Dog tank is created.
	//which can cause an exception when there is some problem with memory while creating Dog p.
	std::shared_ptr<Dog> p(new Dog("Tank"));
	std::shared_ptr<Dog>p1 = p;
	{
		p1->bark();
		cout<<"Refcount is : "<<p.use_count()<<endl;
	}
	p->bark();


	//instead the object should be assigned to smart pointer as soon as it is created.
	std::shared_ptr<Dog> dd = std::make_shared<Dog>("Dino");
	dd->bark();
	return 0;
}


