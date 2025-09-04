#include "calculation.hpp"
#include <iostream>
#include <cstdint>
#include <iomanip>

int main()
{
    std::cout << "Welcome to the The Time Interval Calculation Program!" << std::endl;
    auto [minT, hr, min, hrT] = calculation();
    std::cout << "* " << minT << " minutes" << std::endl;
    std::cout << "* " << hr << " hours and " << min << " minutes" << std::endl;
    std::cout << "* " << std::setprecision(2) << hrT << " hours\n" << std::endl;
    std::cout << "Thank you for using the Time Interval Calculation Program." << std::endl;
    return 0;
}