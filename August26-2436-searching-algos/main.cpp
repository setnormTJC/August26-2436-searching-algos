// August26-2436-searching-algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include<string>
#include <vector>

#include"demos.h"
#include"utils.h"

int main()
{
	//demoStringSearch();
	// 
	auto listOfRandomNumbers = generateListOfNRandomNumbers(100); 
	printListOfNumbers(listOfRandomNumbers);
	
	demoNumberSearch(); 
}

