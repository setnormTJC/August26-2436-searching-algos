#include "demos.h"
#include"utils.h"
#include<random>

void demoStringSearch()
{
    std::vector<std::string> stuffInMyRoom =
    {
        "socks",
        "keys",
        "lamp",
        "chair",
        "dust bunny",
        "half-empty coffee mug",
        "laptop",
        "mysterious book with no title", //ooooh!
        "plant that may or may not be alive"
    };

    const std::string thingToSearchFor = "cheese"; //like a RAT in a maze!
    //because maze traversal algorithms are NEAT!

    int indexOfItem = sequentiallySearch(stuffInMyRoom, thingToSearchFor);

    if (indexOfItem != -1)
    {
        std::cout << thingToSearchFor << " was found at index = "
            << indexOfItem << "\n";
    }

    else //index IS equal to -1
    {
        std::cout << thingToSearchFor << " was NOT found :[\n";
    }
}

int demoNumberSearch()
{

    return 0; //for now! change later  
}
