#pragma once

#include<random> 
#include<vector>


class RNGWrapper
{
private: 
	std::random_device rd;

	std::mt19937 rng;


public: 

	RNGWrapper(); 
	/*example call: randList(0, 100, 10) -> generates 10 random numbers between 0 and 100
	* @returns a list of random numbers 
	*/
	std::vector<int> randList(const int min, const int max, const int N);

	/*Generates a random number between (inclusive?) MIN and MAX*/
	int randRange(const int min, const int max);
};

