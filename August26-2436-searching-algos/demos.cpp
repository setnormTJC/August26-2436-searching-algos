#include "demos.h"
#include"Timer.h"
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


void demoTimerFunctionality()
{
    Timer timer;

    timer.start(); 

    /*insert algo to benchmark*/
    constexpr int iterCount = 1'000'000'000; //BEWARE of integer overflow!

    for (int i = 0; i < iterCount; ++i)
    {
        //do nuthin' but "count" 
    }

    timer.stop(); 

    //timer.writeNAndExecutionTimeToFile()
}
