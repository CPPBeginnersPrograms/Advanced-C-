/*
 * main.cpp
 *
 *  Created on: Sep 25, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <double> numbers(20); // presize vector obj.

	cout << "size  :"<< numbers.size()<<endl; //to find out the size of the datatype and the pre-size vector.

	int capacity = numbers.capacity();		//to find the internal capacity of vector.
	cout<< "Capacity : "<<capacity << endl;

	cout<<endl;
	for(int i = 0 ; i < 10000; i++)
	{
		if(numbers.capacity()!= capacity)		//capacity keeps changing through the entire iteration.
		{
			capacity = numbers.capacity();
			cout<<"capacity : "<< capacity<<endl;
		}
		numbers.push_back(i);
	}
	cout << "size  :"<< numbers.size()<<endl;	//size of the array after the iteration.
	cout<<endl;

	numbers.clear();			//to clear the size, the size becomes 0, but the capacity will remain the same.
	cout << "size  :"<< numbers.size()<<endl;	//size of the array after clear.
	cout<< "Capacity : "<<numbers.capacity() << endl;

	cout<<endl;

	numbers.resize(100);	//to resize the numbers size. but the capacity remains the same.
	cout<<numbers.at(2)<<endl;
	cout << "size  :"<< numbers.size()<<endl; //size of the array after resize.
	cout<< "Capacity : "<<numbers.capacity()<< endl;

	cout<<endl;

	numbers.reserve(100000);
	cout<<numbers[2]<<endl;
	cout << "size  :"<< numbers.size()<<endl;
	cout<< "Capacity : "<<numbers.capacity()<< endl;	//size of the internal array capacity after reserve.
}


