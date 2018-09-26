/*
 * main.cpp
 *
 *  Created on: Sep 25, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <vector>  //if you wnat to use vector you should include the vector class

using namespace std;

int main()
{
	vector <string> strings;      // We no need to pre-size the vector if we want to use push_back method.
	//vector <string> strings(5);		//vector syntax, these are much more better than array in terms of memory,
									//it can resize its memory.
	strings.push_back("one");		//to add extra strings, so vector can resize it memory automatically
	strings.push_back("two");		//we can push_back as many strings as we like.
	strings.push_back("three");
//	strings[3] = "dog";		//one way of assigning to the array of strings.
//	strings[2] = "cat";
//	cout<<strings[3] <<endl;
//	cout<<strings[1]<<endl;
//	cout<<strings[2]<<endl;

	for(int i =0; i < strings.size(); i++)		//using indexing method and printing the elements.
	{
		cout<<strings.at(i)<<endl;
	}
	cout<<endl;
	for(vector <string> ::iterator it = strings.begin(); it != strings.end(); it++ ) //using iterator operator we can iterate through each element.
	{
		cout<<*it<<endl;		//we use pointer to iterator object to print, as we know vector is a reference object and strings.begin() is actually pointing
								//a pointer to the begining of the element.
	}
	cout<<endl;
//	const vector <string> ::iterator it = strings.begin();
//
//	cout<<*it<<endl<<endl;

	vector <string> ::iterator it = strings.begin();
	it+= 1;

	cout<<*it<<endl;



	cout<<"sizeof(strings) is : "<< sizeof(strings)<<endl;
	cout<<"Vector object strings.size() is : "<<strings.size()<<endl;
	return 0;

}


