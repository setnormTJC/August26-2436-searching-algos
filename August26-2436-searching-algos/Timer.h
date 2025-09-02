#pragma once

#include<chrono> 
#include <string>

class Timer
{
private: 
	std::chrono::steady_clock::time_point startTimePoint{};
	std::chrono::steady_clock::time_point endTimePoint{};

public: 
	Timer() = default;

	void start(); 

	void stop();

	void writeNAndExecutionTimeToFile(const int N, const std::string& filename);
};

