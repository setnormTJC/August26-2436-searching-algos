#pragma once
#include <vector>
#include <string>
#include "searchAlgos.h"
#include <iostream>

#include<fstream>


void demoStringSearch(); //function declaration (not a definition) (AKA: prototype) 


void demoTimerFunctionality(); 


void benchmarkSequentialSearch_withTiming(); 

void benchmarkSeqSearch_withComparisonCounts(); 

void benchmarkRandomSearch(const int N); 

std::vector<std::string> getSomeRandomNouns(const int N); 

