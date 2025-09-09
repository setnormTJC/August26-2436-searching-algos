#include <algorithm> //for std::replace()
#include<iostream>

#include "utils.h"




void printListOfNumbers(const std::vector<int>& listOfNumbers, 
	const std::string& separator)
{
	//back to our friend the "range-based" for loop: 
	for (const auto& num : listOfNumbers)
		std::cout << num << separator;
}

const std::string getFilenameWithTimestamp()
{
	std::string timeString = std::string(__TIME__); //__TIME__ is a convenient, built-in "macro"  
	std::replace(timeString.begin(), timeString.end(), ':', '-'); 
	const std::string filename = "timingResults" + timeString + ".csv";

	return filename; 

}
