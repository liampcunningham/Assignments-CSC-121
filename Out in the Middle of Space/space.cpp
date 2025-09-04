#include "cartesianCalc.hpp"
#include "sphericalCalc.hpp"
#include <iostream>
#include <cstdint>

int main() {
    uint32_t choice{};

    std::cout << "Welcome to the Point Conversion Program!" << std::endl;
    std::cout << "Do you want to enter a coordinate in:\n" << std::endl;
    std::cout << "(1) Spherical Coordinates" << std::endl;
    std::cout << "(2) Cartesian Coordinates\n" << std::endl;
    std::cin >> choice;
    if (choice == 1){
        auto [x, y, z, carR, carTheta, carPhi] = cartesianCalc();
        std::cout << "Spherical Coordinates: (" << x << ", " << y << ", " << z << ")" << std::endl;
        std::cout << "Cartesian Coordinates: (" << carR << ", " << carTheta << ", " << carPhi << ")" << std::endl;
    }
    else if (choice == 2){
        auto [r, theta, phi, sphX, sphY, sphZ] = sphericalCalc();
        std::cout << "Spherical Coordinates: (" << sphX << ", " << sphY << ", " << sphZ << ")" << std::endl;
        std::cout << "Cartesian Coordinates: (" << r << ", " << theta << ", " << phi << ")" << std::endl;
    }
    else{
        std::cout << "Not an option, please try again." << std::endl;
    }
    std::cout << "Thank you for using the Point Conversion Program!" << std::endl;
}