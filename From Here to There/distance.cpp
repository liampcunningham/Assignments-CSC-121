#include <iostream>
#include <cmath>

int main()
{
    double x1{0},x2{0},y1{0},y2{0},d{0};
    std::cout << "Welcome to the 2D Distance Program\n\n";
    std::cout << "What is the first point in the plane?\n";
    std::cin >> x1 >> y1;
    std::cout << "What is the second point in the plane?\n";
    std::cin >> x2 >> y2;
    std::cout << "Calculating the distance now…\n\n";
    d = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));
    std::cout << "The distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << d << ".\n";
    std::cout << "Thank you for using the 2D Distance Program!\n";

    return 0;
}
