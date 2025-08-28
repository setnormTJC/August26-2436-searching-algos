#include "utils.h"

#include<iostream>
#include <random>


int generateRandomNumberBetwixt0AndN(int N)
{
	std::random_device rd; //acts similarly to `srand`
	//std::mt19937 rng( rd.operator()() ); //acts similarly to `rand()`

	std::mt19937 rng(rd.operator()()); 

	constexpr int min = 0;
	int max = N;

	std::uniform_int_distribution<int> distribution(min, max);

	int randomNumber = distribution.operator()(rng);


	return randomNumber; 


}

std::vector<int> generateListOfNRandomNumbers(int N)
{
	std::vector<int> listOfRandomNumbers; //empty initially

	for (int i = 0; i < 1'000; ++i)
	{
		int randomNumber = generateRandomNumberBetwixt0AndN(N);
		listOfRandomNumbers.push_back(randomNumber);
	}

	return listOfRandomNumbers; 
}

void printListOfNumbers(const std::vector<int>& listOfNumbers)
{
	//back to our friend the "range-based" for loop: 
	for (const auto& num : listOfNumbers)
		std::cout << num << "\n";
}
