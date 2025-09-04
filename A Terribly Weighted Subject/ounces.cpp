#include <iostream>

int main()
{
    double ozR,lb2;
    uint64_t oz1, lb1;
    std::cout << "Welcome to the Ounce Conversion Program!\n";
    std::cout << "How many ounces do you have?\n";
    std:: cin >> oz1;
    std::cout << "Thank you! Converting ounces to pounds...\n";
    lb1 = oz1/16;
    lb2 = static_cast<double>(oz1)/16;
    ozR = oz1%16; 
    std::cout << oz1 << " oz is equivalent to " << lb1 << " lbs and " << ozR << " oz.\n";
    std::cout << oz1 << " oz is equivalent to " << lb2 << " lbs.\n";
    std::cout << "Thank you for using the OCP!\n";
    return 0;
}