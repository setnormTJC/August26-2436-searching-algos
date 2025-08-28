#pragma once

#include<vector>

/*Let's just treat this fn as a "black box"*/
int generateRandomNumberBetwixt0AndN(int N);

std::vector<int> generateListOfNRandomNumbers(int N);

void printListOfNumbers(const std::vector<int>& listOfNumbers);