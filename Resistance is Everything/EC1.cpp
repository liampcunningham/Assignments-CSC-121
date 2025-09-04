#include <iostream>

int main()
{
double r1,r2,rS,rP;
std::cout << "Welcome to the Resistance Calculator Program!\n\n";
std::cout << "Please enter your two resistances: ";
std::cin >> r1 >> r2;
if (r1 < 0 || r2 < 0)
{
    std::cout << "Please enter a postive value\n";
}
else
{
    std::cout << "Thank you! You have entered " << r1 << " ohms and " << r2 << " ohms!\n\n";
    rS = r1 + r2;
    rP = (r1*r2)/(r1+r2);
    std::cout << "If your resistors are placed in series, they will total to " << rS << " ohms.\n";
    std::cout << "If your resistors are placed in parallel, they will total to " << rP << " ohms.\n\n";
    std::cout << "Thank you for using the RCP!\n";
}
return 0;
}