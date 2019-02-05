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
	string str;

	while(true)
	{
		cin>>str;
		smatch m;  //typedef match_results<string>

		regex reg("([[:w:]]+)@([[:w:]]+)\\.com", regex_constants::icase);


		//bool found = regex_search(str, m , reg);
		regex_search(str, m , reg);

		cout<<"m.size() : "<< m.size() << endl;
		for(int i =0; i < m.size(); i++)
		{
			cout << "m["<<i<<"]:str() = "<<m.str(i)<<endl; // other two ways to fetch m[n].str() or *(m.begin()+n).
		}

		cout<<"m.prefix().str(): "<< m.prefix().str()<<endl;
		cout<<"m.suffix().str(): "<<m.suffix().str()<<endl;
	}

	return 0;
}



