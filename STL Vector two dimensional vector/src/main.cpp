/*
 * main.cpp
 *
 *  Created on: Sep 25, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <vector>
#include <cstdlib>		//to import random function
using namespace std;

int main()
{
	srand(time(0));			//keeps changing the values according to the system time for every execution.
	vector < vector<int> > grid(4, vector<int>(5));	//two dimensional vector.

	for(int row = 0; row < grid.size();row++)	//for loop based insertion into the multidimensional vector.
	{
		for(int col = 0;col < grid[row].size();col++)				//in this grid[row].size() means the col should be based on the size of row.
		{
			grid[row][col] = (1 + rand() % 6);		//random number generation
		}
	}

	grid[3].push_back(8);	//you can push backany number later to add in the grid.


	for(int row = 0; row < grid.size();row++)
	{
		for(int col = 0;col < grid[row].size();col++)
		{
			cout<<grid[row][col];
		}
		cout<<endl;
	}
	return 0;
}


