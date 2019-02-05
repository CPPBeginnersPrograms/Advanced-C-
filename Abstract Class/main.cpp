/*
 * main.cpp
 *
 *  Created on: Dec 19, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>

using namespace std;

class Animal	//base class
{
public:
	//pure virtual function
	virtual void run() = 0;
	virtual void speak() = 0;
	virtual ~Animal()
	{

	}
};

class Dog : public Animal	//sub class
{
public:
	virtual void speak()
	{
		cout<< "woof!"<<endl;
	}

};

class Labs : public Dog		//sub class of Dog
{
public:
	Labs()
{
		cout <<"new lab"<<endl;
}
	virtual void run()
	{
		cout << "Lab running !"<<endl;
	}
};

void test(Animal &obj) // you can use abstract class in the parameters of a function.
{
	obj.run();
}
int main()
{
//	Animal animal; // you cannot instantiate the object when the class containing pure virtual function.


//	Dog dog;	//when you implement another pure virtual function in base class the inherited sub class cannot instantiate as well.
//	dog.speak();

    //Animal ani[] // you cannot create an array from the base class as it contains pure virtual methods.



	Labs lab[4]; // you can create an array with Lab class because its the sub class of Dog.

	//finally lab class can instantiate all methods of pure virtual methods.
	Labs labs;
	labs.run();
	labs.speak();

	//but you can create an array with pointers.
	Animal *anim[5];
	anim[0] = &labs;
	anim[0]->speak();

//	calling the test function

	test(labs);

	return 0;

}
