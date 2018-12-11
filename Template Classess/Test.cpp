/*
 * Test.cpp
 *
 *  Created on: Dec 11, 2018
 *      Author: raswantkoushikpeesapati
 */

#include "Test.h"

namespace tempclass {


template<class T, class K>
Test<T,K>::Test(T obj1, K obj2):obj1(obj1), obj2(obj2){
	// TODO Auto-generated constructor stub

}
template<class T, class K>
void Test<T,K>::print()
		{
	cout<<obj1 << " "<< obj2<<flush;
		}
template<class T, class K>
Test<T,K>::~Test() {
	// TODO Auto-generated destructor stub
}

} /* namespace tempclass */
