#pragma once


#include<iostream> 
#include <string>
#include <vector>


#include"RNGWrapper.h"
/*
* @param thangs -> a list of stuff to search through
* @return -1 if NOT found, 0 through size of array if FOUND
*/
template <typename T> 
int sequentiallySearch(const std::vector <T>& thangs,
	const T& thangToSearchFor)
{

	int comparisonCount = 0; 

	for (int i = 0; i < thangs.size(); ++i)
	{
		comparisonCount++; 
		if (thangs[i] == thangToSearchFor)
		{
			std::cout << "FOUND the target value after this many comparisons: " << comparisonCount << "\n";
			return i;
		}
	}
	
	std::cout << "Did NOT find the target value, and we did this many comparisons: " << thangs.size() << "\n";

	return -1; //NOT an index that is legitimate in typical array indexing 
}

/*
* The "second" overload of this function 
* @param numberOfComparisons -> passed BY non-const reference (because this function UPDATES it!) 
* @return -1 if NOT found, 0 through size of array if FOUND
*/
template <typename T>
int sequentiallySearch(const std::vector <T>& thangs,
	const T& thangToSearchFor, int& numberOfComparisons)
{
	//static int numberOfComparisons = 0; //this is an alternative to passing by non-const reference 
	for (int i = 0; i < thangs.size(); ++i)
	{
		numberOfComparisons++; 
		if (thangs[i] == thangToSearchFor)
		{
			//std::cout << "Found target after " << numberOfComparisons << " comparisons.\n"
			return i;
		}
	}
	//std::cout << "Did NOT find target after " << numberOfComparisons << " comparisons.\n"
	return -1; //NOT an index that is legitimate in typical array indexing 
}


/*This algo has complexity O(infinity)*/
template<typename T> 
int miracleSearch(const std::vector <T>& thangs,
	const T& thangToSearchFor)
{
	bool isFound = false; 

	while (!isFound)
	{
		//pray that the gods come down and find our value for us ... 
	}
}

/*Precondition: thingToSearchFor MUST be in the list of things (else an infinite loop)*/
template<typename T> 
int randomSearch(const std::vector<T>& things, const T& thingToSearchFor)
{
	RNGWrapper rng; 

	bool found = false; 

	int randomPositionToSearch{};
	while (!found)
	{
		randomPositionToSearch = rng.randRange(0, things.size() - 1);
		std::cout << "Looking at position = " << randomPositionToSearch << "\n";

		if (things[randomPositionToSearch] == thingToSearchFor)
		{
			found = true; 
		}
	}

	return randomPositionToSearch;
}

//changed to TEMPLATED function after class!
template<typename T> 
std::string binarySearch(const std::vector<T>& things, const T& target, int startPosition,
	int endPosition)
{
	if (!std::is_sorted(things.begin(), things.end()))
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

	if (things[middle] == target)
	{
		return "Found it at index " + std::to_string(middle); //added "to_string" after class 
	}

	//log2(50) = x; 2^x = 50; log2(1000) = x -> 10 

	if (things[middle] > target) //is else preferable here??
	{
		return binarySearch(things, target, startPosition, middle - 1);
	}

	if (things[middle] < target)
	{
		return binarySearch(things, target, middle + 1, endPosition);
	}

}


