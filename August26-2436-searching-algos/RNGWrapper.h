#pragma once

#include<random> 
#include<vector>


class RNGWrapper
{
private: 
	std::random_device rd;

	std::mt19937 rng;

	/*Generates a random number between MIN and MAX*/
	int randRange(const int min, const int max);

public: 

	RNGWrapper(); 
	/*example call: randList(0, 100, 10) -> generates 10 random numbers between 0 and 100*/
	std::vector<int> randList(const int min, const int max, const int N);

};

