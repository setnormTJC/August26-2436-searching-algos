// August26-2436-searching-algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<algorithm>
#include <iostream>
#include<string>
#include <vector>

#include"demos.h"
#include"utils.h"
#include "RNGWrapper.h"
#include "searchAlgos.h"
#include "Timer.h"
#include <cassert>



int main()
{
	//constexpr int desiredStringLength = 4; 
	//RNGWrapper rng; 
	//rng.getRandomStringsOfLengthN(desiredStringLength); 

	constexpr int N = 50; //max number of comparisons for seq. search is? 
	std::vector<std::string> randomNouns = getSomeRandomNouns(N);

	std::string wordToSearchFor = "responsibility"; //N.B. (nota bene) responsibility IS in the array 
	//std::cout << binarySearch(randomNouns, wordToSearchFor, 0, randomNouns.size() - 1) << "\n";		


	std::sort(randomNouns.begin(), randomNouns.end()); //robust 
	
	if (std::binary_search(randomNouns.begin(), randomNouns.end(), wordToSearchFor))
	{
		std::cout << "Found\n";
	}



	
}

