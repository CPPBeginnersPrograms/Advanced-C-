/*
 * main.cpp
 *
 *  Created on: May 9, 2019
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <string>

using namespace std;


//In this example we are using functors, they are alternative to function pointers, but the sytanx will be entirely different.
//Functors is a struct or class. Functors basically use the operator overload and pass them to the functions.

//base class
//we are making it a abstract class.
struct Match
{
	virtual bool operator()(string &text) = 0;
	virtual ~Match(){}
};
//struct derived
//in the below class i am using operator overloading for () to check the and return the bool if text matches.
//below struct model(design is a functor)
//using inheritance and polymorphic style
struct Matchtest : public Match
{
	virtual bool operator()(string &text)//using reference here, you can also use normal literal as well.
	{
		return text == "koushik";
	}
};


//a normal function, we can also use functors like passing a function the parameter to check the text matching. but the method now
//about to use is complicated but the principal can be applied to anything.
//to use the check function having ability to do different types of tests. to achieve this we need a base class match.
void check(string text, Match &test)
{
	//using overloaded () to check and return bool.
	if(test(text))
	{
		cout << "Text Matches. "<<endl;
	}
	else
	{
		cout<<"Text does not match."<<endl;
	}

}

//main function
int main()
{
	//testing the Matchtest functionality (functor)
	Matchtest pred;

	//we cannot do like below because in the class we passed string text as a reference object.
	//pred("koushik");
	//so we need to create a string variable and then pass it to pred.
	string t = "koushikk";
	cout<<pred(t)<<endl;

	//testing the check function.
	//now we directly create a single object and call check function.
	Matchtest m;
	check("koushik", m);



	return 0;
}

