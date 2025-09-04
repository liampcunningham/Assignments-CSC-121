#include "sphericalCalc.hpp"
#include <iostream>
#include <cstdint>
#include <cmath>
#include <tuple>

std::tuple<double, double, double, double, double, double>sphericalCalc(){
    double r{}, theta{}, phi{}, sphX{}, sphY{}, sphZ{};
    std::cout << "please enter your coordinates seperated by spaces." << std::endl;
    std::cin >> r >> theta >> phi;
    std::cout << "your point is as follows. Angles are in radians:\n" << std::endl;
    sphX = r * cos(theta) * sin(phi);
    sphY = r * sin(theta) * cos(phi);
    sphZ = r * cos(phi);
    return std::make_tuple(r, theta, phi, sphX, sphY, sphZ);
}