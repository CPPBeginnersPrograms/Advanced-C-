/*
 * mian.cpp
 *
 *  Created on: Dec 18, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>

using namespace std;

class Parent
{
private:
	int one;
public:
	Parent(): one(0)
	{

	}
	Parent(const Parent &other)	: one(0)	//whenever you define a copy constructor you need to explicitly
	{								//define default constructor to make the Child class work.
		one = other.one;
		cout<<"From Parent "<<endl;
	}
	virtual void print()
	{
		cout<<"Parent"<<endl;
	}
	virtual ~Parent()
	{

	}
};

class Child : public Parent
{
private:
	int two;
public:
	Child():two(0)
	{

	}
	Child(const Child &other) : Parent (other), two(0) //calling base class copy constructor
	{
		two = other.two;
		cout<<"From Child "<<endl;
	}
	void print()
	{
		cout<<"child"<<endl;
	}
};

int main(){

	Child c1;
	cout<<"from c1 ";
	c1.print();

	Parent p1;
	cout<<"from p1 ";
	p1.print();

	Child c2;
	Parent p2 = c2;			//without referencing or pointers (uses copy constructor)
	cout<<"from p2 ";
	p2.print();

	Child c3;
	Parent *p3 = &c3;				//with referencing and pointers
	cout<<"from p3 ";
	p3->print();

	Child c4;
	Parent &p4 = c4;
	cout<<"From p4 ";
	p4.print();

	Parent p5 = Child();		//copy initialization
	cout<<"From p5 ";
	p5.print();

//	Parent p6;
//	Child c6 = p6;
//	p6.print();				// in c++ derived class object can be assigned to base class object but other way is not possible.

	Parent *p6 = new Child();		//base pointer.
	cout<<"from p6 ";
	p6->print();

	return 0;
}
