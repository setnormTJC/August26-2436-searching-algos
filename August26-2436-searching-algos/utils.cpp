#include "utils.h"

#include<iostream>



void printListOfNumbers(const std::vector<int>& listOfNumbers, 
	const std::string& separator)
{
	//back to our friend the "range-based" for loop: 
	for (const auto& num : listOfNumbers)
		std::cout << num << separator;
}
