#include "calculation.hpp"
#include <cstdint>
#include <iostream>

std::tuple<uint32_t, uint32_t, uint32_t, double> calculation()
{
    uint32_t hr1{}, min1{}, hr2{}, min2{}, minT{}, hr{}, min{};
    double hrT{};
    std::cout << "What is your first time?" << std::endl;
    std::cin >> hr1 >> min1;
    std::cout << "What is your second time?" << std::endl;
    std::cin >> hr2 >> min2;
    std::cout << "The time interval can be written as:\n" << std::endl;
    minT = abs((hr1 - hr2) * 60) + abs(min1 - min2);
    hrT = abs((min1 - min2) / 60) + abs(hr1 - hr2);
    hr = abs(hr1 - hr2);
    min = abs(min1 - min2);
    return std::make_tuple(minT, hr, min, hrT);
}