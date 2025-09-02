#pragma once


#include <string>
#include <vector>

/*
* @param thangs -> a list of stuff to search through
* @return -1 if NOT found, 0 through size of array if FOUND
*/
template <typename T> 
int sequentiallySearch(const std::vector <T>& thangs,
	const T& thangToSearchFor)
{
	for (int i = 0; i < thangs.size(); ++i)
	{
		if (thangs[i] == thangToSearchFor)
		{
			return i;
		}
	}
	return -1; //NOT an index that is legitimate in typical array indexing 
}



