#include "average.hpp"
#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "Welcome to the Dice Statistics Program!" << std::endl;

    auto [average, sum, minimum, maximum] = getAverage();

	std::cout << "Minimum: " << minimum << std::endl;
	std::cout << "Average: " << average << std::endl;
	std::cout << "Maximum: " << maximum << "\n" << std::endl;
	std::cout << "You rolled a " << sum << "!\n" << std::endl;
    
	std::cout << "Thank you for using the DSP!" << std::endl;

	return 0;
}