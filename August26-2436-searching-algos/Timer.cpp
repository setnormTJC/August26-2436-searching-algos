#include "Timer.h"

#include<fstream>
#include <iostream>


void Timer::start()
{
	startTimePoint = std::chrono::high_resolution_clock::now(); 
}

void Timer::stop()
{
	endTimePoint = std::chrono::high_resolution_clock::now();
}

void Timer::writeNAndExecutionTimeToFile(const int N, const std::string& filename)
{
	long long executionTimeInNanoseconds = (endTimePoint - startTimePoint).count();

	std::ofstream outfile(filename, std::ios::app); //note the append 

	//MIGHT? want to check if writing to an empty file (as a sort of safety) 

	outfile << N << "," << executionTimeInNanoseconds << "\n";

	outfile.close(); //Be a good boy or girl and don't leave files open! 

	std::cout << "Wrote 'N' and 't' to filename " << filename << "\n";
}


