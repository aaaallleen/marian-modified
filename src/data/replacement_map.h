#pragma once 
#include <vector>
#include <string>
#include <unordered_map>
#include <random>
#include <algorithm>

class replacementMap {
    public:
    // Constructor
    replacementMap();

    // Function to shuffle and update the replacement map
    void shuffle_and_update();

    void reset_map();
    // Function to update the replacement map with a new map
    std::vector <std::string> tokens;
    std::unordered_map<std::string, std::string> Map;
};


