#include <iostream>
#include <string>
#include <sstream>

int main()
{
double r1,r2,rS,rP;
std::string input1, input2;
std::string unit1, unit2;
std::cout << "Welcome to the Resistance Calculator Program!\n\n";
std::cout << "Please enter your first resistance (with or without units): ";
std::getline(std::cin, input1);
std::stringstream ss(input1);
ss >> r1 >> unit1;
ss.str("");
ss.clear();
std::cout << "Please enter your second resistance (with or without units): ";
std::getline(std::cin, input2);
ss.str(input2);
ss >> r2 >> unit2;
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
