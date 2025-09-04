#include "splitNum.hpp"
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> splitNum(int num){
    int placeVal{1};
    std::vector<int> places{};
    while(num > 0){
        int digit = (num%10) * placeVal;
        places.push_back(digit);
        num /= 10;
        placeVal *= 10;
    }
    return places;
}
