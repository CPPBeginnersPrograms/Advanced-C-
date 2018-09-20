/*
 * main.cpp
 *
 *  Created on: Sep 20, 2018
 *      Author: raswantkoushikpeesapati
 */
#include <iostream>
#include <fstream>
 using namespace std;

 int main()
 {

//	 ofstream outputFile; //instead of using this, use
	 fstream outputFile;

	 string outputFileName = "text.txt";

//	 outputFile.open("text.txt");
	 outputFile.open(outputFileName, ios::out);

	 if(outputFile.is_open())
	 {
		 for(int i = 0; i < 10 ; i++)
		 {
			 outputFile<< i << ". here is the line "<< i << endl;
		 }
		 outputFile.close();
	 }
	 else
	 {
		 cout<<"could not be created. "<<endl;
	 }


	 return 0;
 }

