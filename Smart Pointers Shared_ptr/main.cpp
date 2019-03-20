/*
 * main.cpp
 *
 *  Created on: Mar 18, 2019
 *      Author: raswantkoushikpeesapati
 */
#include <iostream>
#include <memory>

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
};

int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity> ();
			e0 = sharedEntity;
		}
	}
	return 0;
}



