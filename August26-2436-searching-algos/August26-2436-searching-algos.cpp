// August26-2436-searching-algos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <vector>


//#include"mySPECIALHeaderFile.h"

//typedef int INTEGER;


/*
* @param stuffInMyRoom -> a list of Stuff in your room
* @return -1 if NOT found, 0 through size of array if FOUND
*/
int searchMyRoom(const std::vector<std::string>& stuffInMyRoom, 
    const std::string& thingToSearchFor)
{
    for (int index = 0; index < stuffInMyRoom.size(); ++index)
    {
        //comparison operation: 
        if (stuffInMyRoom.at(index) == thingToSearchFor)
        {
            return index;
        }
    }

    return -1; 


}

int main()
{

    //std::print("Herro?");

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

    int indexOfItem = searchMyRoom(stuffInMyRoom, thingToSearchFor);

    //int indexOfItem = searchMyRoom(thingToSearchFor, stuffInMyRoom);


    if (indexOfItem != -1)
    {
        std::cout << thingToSearchFor << " was found at index = "
            << indexOfItem << "\n";
        //std::print("Value was found at index", indexOfItem);
    }

    else //index IS equal to -1
    {
        std::cout << thingToSearchFor << " was NOT found :[\n";
    }

}

