#include "splitNum.hpp"
#include <iostream>
#include <cstdint>
#include <vector>
#include <cmath>
#include <cstring>
// create a vector that breaks the arabic number into hundreds, tens, ones, etc.
// using each of those values, sort them so the highest number goes first and is matched with
// its respective roman numeral

int main(){
    uint32_t arNum{};
    std::vector<std::string> roNum{};
    std::vector<std::string> roThous{"M", "MM", "MMM"}, roHund{"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}, roTens{"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"}, roOnes{"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::cout << "give me an arabic number that will turn into a roman numeral" << std::endl;
    std::cin >> arNum;
    if (arNum <= 0){
        std::cout << "Your value does not exist as a roman numeral, please input a positive integer." << std::endl;
    } else if (arNum > 3999) {
        std::cout << "Your value is too large to be turned into a roman numeral, please enter a number equal to or smaller than 3999." << std::endl;
    } else {
        std::vector<int> places = splitNum(arNum);
        std::cout << "Split numbers: ";
        for(int place : places){
        std::cout << place << " ";
        }
        std::cout << std::endl;
    // place[0] is the ones place, place[3] is the thousandths
        int value = places[3];
        if (value >= 1000 && value <= 3000 && value % 1000 == 0) {
            roNum.push_back(roThous[(value / 1000) - 1]);
        }
        value = places[2];
        if (value >= 100 && value <= 900 && value % 100 == 0) {
            roNum.push_back(roHund[(value / 100) - 1]);
        }
        value = places[1];
        if (value >= 10 && value <= 90 && value % 10 == 0) {
            roNum.push_back(roTens[(value / 10) - 1]);
        }
        value = places[0];
        if (value >= 1 && value <= 9) {
            roNum.push_back(roOnes[value - 1]);
        }
        std::cout << "Roman Numeral Equivalent: ";
        for(std::string roPlace : roNum){
        std::cout << roPlace;
        }
        std::cout << std::endl;
    }
    return 0;
}