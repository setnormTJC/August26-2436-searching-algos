#include "demos.h"
#include"Timer.h"
#include"utils.h"

#include<random>
#include "RNGWrapper.h"


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

void benchmarkSequentialSearch_withTiming()
{
    /*ex: 100 random numbers, 1'000, 10'000, etc.*/
    std::vector<int> elementCounts =
    {
        10,
        100,
        1'000,
        10'000,
        100'000
    };

    RNGWrapper rng;
    constexpr int NUMBER_OF_EXPERIMENTS = 10;

    auto filename = getFilenameWithTimestamp();

    for (const auto& N : elementCounts)
    {
        auto listOfRandomNumbers = rng.randList(0, N, N);

        for (int i = 0; i < NUMBER_OF_EXPERIMENTS; ++i)
        {
            int randomNumberToSearchFor = rng.randRange(0, N);
            //etc.
            //std::cout << "Searching the following list: \n";
            //printListOfNumbers(listOfRandomNumbers, " ");
            //std::cout << "For the \"target\" value = " << randomNumberToSearchFor << "\n";

            Timer t;
            t.start();
            int loc = sequentiallySearch(listOfRandomNumbers, randomNumberToSearchFor); //loc as in "location" (index) 
            t.stop();

            //std::cout << "Wrote to filename: " << filename << "\n";
            t.writeNAndExecutionTimeToFile(N, filename);
        }
    }
}

void benchmarkSeqSearch_withComparisonCounts()
{
    RNGWrapper rng;

    auto randomNumbers = rng.randList(-10, 100, 110);
    //printListOfNumbers(randomNumbers, " ");

    for (int i = 0; i < 100; ++i)
    {
        int randNumberToSearchFor = rng.randRange(-10, 100);
        //std::cout << "\n\nSearching for target value: " << randNumberToSearchFor << "\n";
        sequentiallySearch(randomNumbers, randNumberToSearchFor);
    }
}

void benchmarkRandomSearch(const int N)
{
    RNGWrapper rng;

    auto randomNumbers = rng.randList(1, 100, N);
    printListOfNumbers(randomNumbers, "\n");

    auto target = rng.randRange(1, 100); 
    std::cout << "Looking for target " << target << "\n";

    randomSearch(randomNumbers, target);

}

std::vector<std::string> getSomeRandomNouns(const int N)
{
    std::vector<std::string> randomNouns; 

    std::ifstream inputFile("randomNouns.txt"); //"Relative" filepath 

    if (!inputFile.is_open())
    {
        std::cout << "CAUTION! - file name randomNouns.txt was NOT found\n";
        return { "-1" }; //empty vector (an "early return") 
    }
    
    std::string currentNoun; 
    
    while (std::getline(inputFile, currentNoun))
    {
        //std::cout << currentNoun << "\n";
        randomNouns.push_back(currentNoun);
    }

    return randomNouns; //auto-generated "stub" function definition 
}
