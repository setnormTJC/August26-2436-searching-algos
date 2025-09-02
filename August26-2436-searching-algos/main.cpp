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
	/*ex: 100 random numbers, 1'000, 10'000, etc.*/
	std::vector<int> elementCounts =
	{
		100,
		1'000,
		10'000,
		100'000
	};

	RNGWrapper rng; 


	for (const auto& N : elementCounts)
	{
		auto listOfRandomNumbers = rng.randList(0, N, N);
		//auto listOfRandomNumbers = generateListOfNRandomNumbers(N);
		printListOfNumbers(listOfRandomNumbers, " ");

		std::system("pause");

		//demoNumberSearch();

	}


}

