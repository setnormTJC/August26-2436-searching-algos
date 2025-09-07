// August26-2436-searching-algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include<string>
#include <vector>

#include"demos.h"
#include"utils.h"
#include "RNGWrapper.h"
#include "Timer.h"

int main()
{

	//demoTimerFunctionality(); 

	/*ex: 100 random numbers, 1'000, 10'000, etc.*/
	std::vector<int> elementCounts =
	{
		10,
		100,
		1'000,
		10'000,
		100'000
	};

	RNGWrapper rng; 
	constexpr int NUMBER_OF_EXPERIMENTS = 10;


	for (const auto& N : elementCounts)
	{
		auto listOfRandomNumbers = rng.randList(0, N, N);


		for (int i = 0; i < NUMBER_OF_EXPERIMENTS; ++i)
		{
			int randomNumberToSearchFor = rng.randRange(0, N);

			//std::cout << "Searching the following list: \n";
			//printListOfNumbers(listOfRandomNumbers, " ");
			//std::cout << "For the \"target\" value = " << randomNumberToSearchFor << "\n";

			Timer t;
			t.start();
			int loc = sequentiallySearch(listOfRandomNumbers, randomNumberToSearchFor); //loc as in "location" (index) 
			t.stop();
			
			std::string timeString = std::string(__TIME__); 
			std::replace(timeString.begin(), timeString.end(), ':', '-');
			const std::string filename = "timingResults" + timeString + ".csv";
			
			std::cout << "Wrote? to filename: " << filename << "\n";
			t.writeNAndExecutionTimeToFile(N, filename);

		}
		
	}
	

}

