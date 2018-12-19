/*
 * main.cpp
 *
 *  Created on: Dec 17, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool match(string s)
{
	return s.size() == 3;
}
//we can also implement out own count_if and passing pointer to a function
int countStrings(vector<string> &texts, bool (*match)(string s))
{
	int count = 0;
	for(int i = 0 ; i < texts.size(); i++)
	{
		if(match(texts.at(i)))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	vector<string>texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("Three");
	texts.push_back("four");
	texts.push_back("five");
	texts.push_back("six");
	texts.push_back("seven");
	texts.push_back("eight");
	texts.push_back("nine");
	texts.push_back("ten");

	cout<<match("one")<<endl;
	//count_if function is used to iterate thru the vectors.
	cout<<count_if(texts.begin(), texts.end(), match)<<endl;

	cout<<countStrings(texts, match)<<endl;
	return 0;

}

