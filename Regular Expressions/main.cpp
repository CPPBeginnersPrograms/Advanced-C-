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
		//regex reg("abc"); // normal expression
		//regex reg("abc", regex_constants::icase); // regular expression with upper case and lower case
		//regex reg("abc.", regex_constants::icase); // " . " Any Charecters except newline
		//regex reg("abc?", regex_constants::icase); // ? zero or one preceding character
		//regex reg("abc*", regex_constants::icase); // * zero or more preceding character
		//regex reg("abc+", regex_constants::icase); // + one or more preceding character
		//regex reg("ab[cde]*", regex_constants::icase); //[...] any num of times the character inside the square brackets can be matched.
		//regex reg("ab[^cde]+", regex_constants::icase);// [^...] any character except the character inside of the square bracket is a match.
		//regex reg("ab[cde]{3}", regex_constants::icase); //{3} character limit is 3 the preceding should not be greater than 3.
		//regex reg("ab[cde]{3,}", regex_constants::icase); //{3,} character limit is 3 or more preceding .
		//regex reg("ab[cde]{3,5}", regex_constants::icase); //{3,5} character limit should be more than 3 and less than 5, preceding .
		//regex reg("ab|de[fg]", regex_constants::icase); // " | " or, before or characters cannot work with after or characters.
		//regex reg("ab|de[\]fg]", regex_constants::icase); // \] using back slash followed by any operation given is a match.
		//regex reg("(abc)de+\\1", regex_constants::icase);// (),\\1 means group, in this case it is abc, we can use abc in last.
		//regex reg("(abc)de(fgh+)\\2\\1", regex_constants::icase); //same as above.
		//regex reg("[[:w:]]+@[[:w:]]+\.com", regex_constants::icase); // [[:w:]] word character : digit, number or underscore.
		//regex reg("^abc.", regex_constants::icase); //for regex search if you put that symbol before char it will only search at the beginning.
		//regex reg("abc.$", regex_constants::icase); // $ for regex search to search only at the end of the string.
		regex reg("^abc.+", regex_constants::grep); // when we use grep expression, the + is not a special key. it means after abcd+ should be given to match the word.

		bool match1 = regex_match(str, reg);

		cout<<(match1? "Matched" : "Not matched")<<endl;


		bool match = regex_search(str, reg);		// checks for the sub text and finds it.

		cout<<(match? "Search Matched" : "Search Not matched")<<endl;
	}

	return 0;
}
