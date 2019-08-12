/*
 * main.cpp
 *
 *  Created on: Aug 11, 2019
 *      Author: raswantkoushikpeesapati
 */
//measuring the performance of a piece of c++ code.

#include<iostream>
#include<memory>
#include<chrono> //for timer

//this is scope based that means it's tied to the lifetime of the object, that means when then object gets created it starts the
//timer when the object gets destroyed it stops the timer.
//that is basically RAII.
class Timer
{
public:
	Timer()
	{
		m_startTimePoint=std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		stop();
	}
	void stop()
	{
		auto endTimePoint = std::chrono::high_resolution_clock::now();

		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_startTimePoint).time_since_epoch().count();
		auto stop = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();

		auto duration = stop - start;
		double ms = duration * 0.001;

		std::cout<< duration << "us (" << ms << "ms)\n"<<std::endl;
	}
private:
	std::chrono::time_point<std::chrono::high_resolution_clock>m_startTimePoint;
};

int main()
{
	int value = 0;
	{
		Timer  timer;
		for (unsigned long int i = 0; i < 1000000; i++)
			value+=2;
	}
	std::cout<<value<<std::endl;
	return 0;
}


