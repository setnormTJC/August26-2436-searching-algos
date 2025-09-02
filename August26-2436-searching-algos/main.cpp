// August26-2436-searching-algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include<string>
#include <vector>

#include"demos.h"
#include"utils.h"
#include "RNGWrapper.h"

int main()
{

	demoTimerFunctionality(); 

	std::system("pause");

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

	for (const auto& N : elementCounts)
	{
		auto listOfRandomNumbers = rng.randList(0, N, N);

		int randomNumberToSearchFor = rng.randRange(0, N);

		std::cout << "Searching the following list: \n";
		printListOfNumbers(listOfRandomNumbers, " ");
		std::cout << "For the \"target\" value = " << randomNumberToSearchFor << "\n";

		int loc = sequentiallySearch(listOfRandomNumbers, randomNumberToSearchFor); //loc as in "location" (index) 
		if ( loc == -1)
			std::cout << "NOT FOUND :[!";
		else
			std::cout << "The magic numbah is at index = " << loc << "\n";
		
		std::system("pause");

	}


}

