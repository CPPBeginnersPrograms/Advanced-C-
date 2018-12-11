/*
 * main.cpp
 *
 *  Created on: Dec 4, 2018
 *      Author: raswantkoushikpeesapati
 */


#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	//nested stl using map and vector
	map<string, vector<int> > scores;

	scores["Koushik"].push_back(20);
	scores["Anu"].push_back(10);
	scores["Kittu"].push_back(90);
	scores["Kittu"].push_back(30);
	scores["Koushik"].push_back(40);
	//nested loop to iterator map and vector.
	for(map<string, vector<int> >::iterator it = scores.begin(); it != scores.end(); it++)
	{
		string name = it->first;
		vector<int>scoreList = it->second;

		cout<< name << " : "<<flush;
		for(int i = 0 ; i < scoreList.size(); i++)
			cout<<scoreList.at(i)<< " "<<flush;
		cout <<endl;
	}

	return 0;
}

