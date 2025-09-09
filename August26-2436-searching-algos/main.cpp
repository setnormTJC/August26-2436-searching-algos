// August26-2436-searching-algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<algorithm>
#include <iostream>
#include<string>
#include <vector>

#include"demos.h"
#include"utils.h"
#include "RNGWrapper.h"
#include "Timer.h"
#include <cassert>

std::string binarySearch(const std::vector<std::string>& names, const std::string& target, int startPosition, 
	int endPosition)
{ 
	if (!std::is_sorted(names.begin(), names.end()))
	{
		std::cout << "Hey bro, that array ain't sorted ...\n";
		return ""; 
	}
	//assert(std::is_sorted(names.begin(), names.end()); //givin' me LIP!

	//assert(denom != 0)

	if (startPosition > endPosition)
	{
		return "Not found";
	}

	const int middle = floor((startPosition + endPosition) / 2);

	if (names[middle] == target) 
	{
		return "Found it at index " + middle; 
	}

	//log2(50) = x; 2^x = 50; log2(1000) = x -> 10 

	if (names[middle] > target) 
	{
		return binarySearch(names, target, startPosition, middle - 1);
	}

	if (names[middle] < target) 
	{
		return binarySearch(names, target, middle + 1, endPosition);
	}

}


int main()
{

	//demoTimerFunctionality(); 
	//__TIME__
	//benchmarkSequentialSearch(); //it's linear! 

	//benchmarkMiracleSearch(); //that's going to take too long ... 
	
	//const int N = 10; 

	//benchmarkRandomSearch(N); 

	constexpr int N = 50; 
	std::vector<std::string> randomNouns = getSomeRandomNouns(N); 

	std::sort(randomNouns.begin(), randomNouns.end()); //robust 
	
	std::cout << "Did the SORT work?!\n";
	for (const auto& noun : randomNouns)
	{
		std::cout << noun << "\n";
	}

	
	std::string wordToSearchFor = "tooth";

	binarySearch(randomNouns, wordToSearchFor, 0, randomNouns.size() - 1);


}

