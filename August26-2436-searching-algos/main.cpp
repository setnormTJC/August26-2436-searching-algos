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

	constexpr int N = 50; 
	std::vector<std::string> randomNouns = getSomeRandomNouns(N); 

	std::sort(randomNouns.begin(), randomNouns.end()); //robust 
	
	std::cout << "Did the SORT work?!\n";
	for (const auto& noun : randomNouns)
	{
		std::cout << noun << "\n";
	}

	
	std::string wordToSearchFor = "tooth"; //N.B. tooth IS in the array 

	binarySearch(randomNouns, wordToSearchFor, 0, randomNouns.size() - 1);


}

