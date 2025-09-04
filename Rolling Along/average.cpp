#include "average.hpp"
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <ctime>

std::tuple<double, uint32_t, uint32_t, uint32_t> getAverage()
{
    uint32_t numDice{}, sideDice{}, minimum{}, maximum{}, roll{}, sum{};
    double average{};

    std::cout << "How many dice are in your roll?" << std::endl;
	std::cin >> numDice;
	std::cout << "How many sides are on a dice in your roll?" << std::endl;
	std::cin >> sideDice;
    std::cout << "Thank you! When rolling a " << numDice << "d" << sideDice << ", your statistics will be:\n" << std::endl;

    minimum = numDice;
	maximum = numDice * sideDice;

    srand(static_cast<uint32_t>(time(0)));
	uint32_t i = 0;
	for (i = 0; i < numDice; ++i) {
		roll = rand() % (sideDice) + 1;
		sum += roll;
    }

    average = static_cast<double>(sum) / numDice;
    return std::make_tuple(average, sum, minimum, maximum);
}