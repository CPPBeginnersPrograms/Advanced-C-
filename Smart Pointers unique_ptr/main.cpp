/*
 * main.cpp
 *
 *  Created on: Mar 18, 2019
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <memory>

using namespace std;

class Entity
{
public:
	Entity()
{
		std::cout<<"Created Entity"<<std::endl;
}
	~Entity()
	{
		std::cout<<"Destroyed Entity"<<std::endl;
	}

	void print(){};

};
int main()
{

	{
//		unique_ptr<Entity> entity (new Entity());// if you initialize in this way there may be a chance of exception and destructor destroys and dangling pointer will occur.
//		unique_ptr<Entity>entity = new Entity() // you cannot assign anything to a unique pointer.
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		entity->print();
	}
	return 0;
}


