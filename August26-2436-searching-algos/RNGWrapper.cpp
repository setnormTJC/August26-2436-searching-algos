#include "RNGWrapper.h"

RNGWrapper::RNGWrapper()
	:rng(rd.operator()())
{
}

int RNGWrapper::randRange(const int min, const int max)
{
	std::uniform_int_distribution<int> distribution(min, max);

	int randomNumber = distribution.operator()(rng);

	return randomNumber;
}


std::vector<int> RNGWrapper::randList(const int min, const int max, const int N)
{
	std::vector<int> nRandomNumbers;
	
	nRandomNumbers.reserve(N); //allocates space for N values 

	std::uniform_int_distribution<int> distribution(min, max);

	//for (auto& num : nRandomNumbers)
	while(nRandomNumbers.size() < N)
	{
		int randomNumber = randRange(min, max);

		nRandomNumbers.push_back(randomNumber);
	}

	return nRandomNumbers; 
}