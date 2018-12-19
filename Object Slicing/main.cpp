/*
 * main.cpp
 *
 *  Created on: Dec 18, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>

using namespace std;

class Base
{
private:
	int a;
public:
	Base(int a) : a(a)
	{

	}
	virtual void print()
	{
		cout<< " from base class : "<< a <<endl;
	}

	virtual ~Base()
	{

	}
};

class Derived : public Base
{
private:
	int a;
	int b;

public:

	//Derived(int a, int b) : a(a), b(b), Base(a) // initializing the variables of derived first and base next will give you a warning sign.
												//to avoid follow to initialize base first and derived next.
	Derived(int a, int b) : Base(a),a(a), b(b)
	{

	}
	virtual void print()
	{
		cout<<"from derived : "<< a << ","<< b<<endl;
	}
};

//global function passing base class obj by val
void func(Base obj)
{
	obj.print();
}
//global function passing base class obj by reference to avaoid object slicing
void func1(Base &obj)
{
	obj.print();
}
//global function passing by pointers
void func2(Base *obj)
{
	obj->print();
}
int main()
{
	Base b(33);
	Derived d(45, 46);

//	Base *b1(33);				you should not initialize like this when working with pointers.
//	Derived *d1(45,46);

	Base *b1 = new Base(33);
	Derived *d1 = new Derived(45,46);

	func(b);
	func(d);			// you can see object slicing in this output it slices of 46 to form base class object
//	Object slicing happens when a derived class object is assigned to a base class object, additional attributes of a derived
//	class object are sliced off to form the base class object.

	cout<<endl;

	func1(b);
	func1(d);		//here you can see both the values of d, as we are passing through reference it avoids object slicing.

	cout<<endl;

	func2(b1);
	func2(d1);	//here you can see both the values of d, as we are passing through pointers it avoids object slicing too.

	return 0;
}

