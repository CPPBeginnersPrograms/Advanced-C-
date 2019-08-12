/*
 * main.cpp
 *
 *  Created on: Aug 11, 2019
 *      Author: raswantkoushikpeesapati
 */
/*
 * main.cpp
 *
 *  Created on: Aug 11, 2019
 *      Author: raswantkoushikpeesapati
 */
//measuring the performance of pointers.

#include <iostream>
#include <memory>
#include <chrono> //for timer
#include <array>

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
	struct vector2
	{
		float x,y;
	};

	std::cout << "Make Shared \n";
	{
		std::array<std::shared_ptr<vector2>, 1000> sharedPtr;
		Timer timer;
		for(int i = 0; i < sharedPtr.size(); i++)
			sharedPtr[i] = std::make_shared<vector2>();
	}

	std::cout << "New Shared \n";
	{
		std::array<std::shared_ptr<vector2>, 1000> sharedPtr;
		Timer timer;
		for(int i = 0; i < sharedPtr.size(); i++)
			sharedPtr[i] = std::shared_ptr<vector2>(new vector2());
	}
	std::cout << "Make unique\n";
	{
		std::array<std::unique_ptr<vector2>, 1000> sharedPtr;
		Timer timer;
		for(int i = 0; i < sharedPtr.size(); i++)
			sharedPtr[i] = std::unique_ptr<vector2>();
	}

	return 0;
}






