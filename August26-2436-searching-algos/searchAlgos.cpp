#include "searchAlgos.h"

int sequentiallySearch(const std::vector<std::string>& thangs, const std::string& thangToSearchFor)
{
	for (int i = 0; i < thangs.size(); ++i)
	{
		if (thangs[i] == thangToSearchFor)
		{
			return i;
		}
	}
	return -1;
}
