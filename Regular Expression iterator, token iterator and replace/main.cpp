/*
 * main.cpp
 *
 *  Created on: Jan 15, 2019
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <regex>
using namespace std;

int main()
{
	string str = "rashwanth92@gmail.com; srianusha32@yahoo.com; rashwanthk@outlook.com";

	regex reg("([[:w:]]+)@([[:w:]]+)\\.com", regex_constants::icase);

	// iterator for submatch
	sregex_iterator pos(str.cbegin(), str.cend(), reg);
	sregex_iterator end;
	for(; pos!=end; pos++)
	{
		cout << "Email : " << pos->str(0)<<endl;
		cout <<"User Name : "<< pos->str(1)<<endl;
		cout<<"Domian : "<< pos->str(2)<<endl;
		cout<<endl;
	}

	cout << "-------------------------------------------\n"<<endl;
	//iterator token
	sregex_token_iterator pos1(str.cbegin(), str.cend(), reg); // it can take a parameter to make a group.
	sregex_token_iterator end1;
	for(; pos1 != end1; pos1++)
	{
		cout << "Email : " << pos1->str()<<endl;
	}

	cout << endl;

	sregex_token_iterator pos2(str.cbegin(), str.cend(), reg, 1); // it can take a parameter to make a group.
	sregex_token_iterator end2;
	for(; pos2 != end2; pos2++)
	{
		cout << "user name : " << pos2->str()<<endl;
	}

	cout<<endl;

	sregex_token_iterator pos3(str.cbegin(), str.cend(), reg, 2); // it can take a parameter to make a group.
	sregex_token_iterator end3;
	for(; pos3 != end3; pos3++)
	{
		cout << "Domain : " << pos3->str()<<endl;
	}

	cout << "-------------------------------------------\n"<<endl;

	// regex_replace
	cout<<regex_replace(str, reg, "$1 is on $2"); // this replaces the group 1 with $1 and similar
	cout<<endl;
	cout<<regex_replace(str, reg, "$1 is on $2", regex_constants::format_no_copy);//doesnt copy the special characters.
	cout<<endl;
	cout<<regex_replace(str, reg, "$1 is on $2", regex_constants::format_no_copy|regex_constants::format_first_only);// formats only the first one in the str.
	return 0;
}


