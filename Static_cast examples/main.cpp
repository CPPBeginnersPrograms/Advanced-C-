/*
 * main.cpp
 *
 *  Created on: Apr 19, 2019
 *      Author: raswantkoushikpeesapati
 */

//using static_cast_<type>(v)
//when and where to use it.

#include<iostream>
#include<string>
using namespace std;

//To use between the implicit conversion types
//int main()
//{
//	float a = 3.5;
//	int b;
//
//	//we can convert like the way below using cstyle cast
//	b = a; // where it has some readability difficult while debugging and its very hard to find in huge codes. well it works the same.
//	cout<<b<<endl; // o/p = 3
//	b = static_cast<int>(a); // best way to use it using static_cast so when debugging if we have a problem at this point we can find it easily.
//	cout<< b<<endl; // o/p = 3
//
//	return 0;
//}



//use static_cast when conversion of type is provided through conversion operator or conversion constructor.

//class Int
//{
//	int x;
//public:
//	Int(int x = 0) : x(x) // constructor
//	{
//		cout<<"constructor"<<endl;
//	}
//	operator string() // overloaded operator
//	{
//		cout<<"operator"<<endl;
//		return to_string(x);
//	}
//};
//
//int main()
//{
//	int obj(10);
//
//	//c-style objects
//	string str = obj; //conversion operator
//	obj = 20;//conversion constructor : if a class with one parameter and initializing the same data type parameter into that object then it calls the same class.
//
//	//now using static_cast
//	string str1 = static_cast<string>(obj); // we use static_cast because we can uderstand that okay at this point conversion operator is used.
//	obj = static_cast<int>(20);// so for readability we use static_cast.
//
//	return 0;
//}



//Static is more restrictive than c-style
//ex: char* to int* is allowed in c-style but not in static_cast.

//int main(){
//
//	char c; //1 byte
//	//c-style typecasting from char to int
//	int *p = (int*)&c; //int 4 byte
//	*p = 5; // the above all case pass at compile time but fail at runtime.
//
//	//now lets use it with static_cast
//
//	int *p1 = static_cast<int*>(&c); // fails at compile time.
//
//}



//static_cast avoid cast from derived to private base

//class base
//{
//
//};
//class derived : private base //
//{
//
//};
//int main()
//{
//	// you should not try to access private from base. but if it public then no problem below code works fine,
//	derived d1;
//	base *bp1 = (base*)&d1; // c-style casting which allows at compile time but fails at runtime.
//	base *bp2 = static_cast<base*>(&d1);// not allowed at compile time.//up-cast
//}



// use for all up cast but not for down cast, for down cast you can use dynamic casting.
// you should not use static_ast when you dont know what your pointer is holding.
//class base
//{
//
//};
//class derived1 : public base{};
//class derived2 : public base{};
//
//int main()
//{
//	derived1 d1;
//	derived2 d2;
//
////	up-cast from derived to base
//	base *bp1 = static_cast<base*>(&d1);
//	base *bp2 = static_cast<base*>(&d2);
//
//	//down-cast from derived to base is not allowed using static_cast
//	derived1 *dp1 = static_cast<derived1*>(&bp1);
//	derived2 *dp2 = static_cast<derived2*>(&bp2);
//
//}


//static_cast is preferred to use when converting to void* or from void*.

//int main()
//{
//	int i = 10;
//	void *v = static_cast<void*>(&i); // type casting int to void* u should use static cast.
//	int *p = static_cast<int*>(v); // type casting void* to any other pointer then also we should use static_cast.
//}
