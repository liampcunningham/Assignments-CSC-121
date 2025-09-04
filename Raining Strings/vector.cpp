#include "vector.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

std::vector<std::string> company{};
//real ballsy making it a global var i know but it keeps getting reinitialized so this is my solution :)
std::vector<std::string> business(std::string name){
    company.push_back(name);
    std::sort(company.begin(), company.end());
    std::cout << "Your businesses are: \n" << std::endl;
    for (const std::string& print : company){
        std::cout << print << std::endl;
    }
    std::cout << "\n";
    return company;
}