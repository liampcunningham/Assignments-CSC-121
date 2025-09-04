#include <iostream>
#include <limits>

int main()
{
    double ozR,lb2,oz1;
    uint64_t lb1;
    int flag = false;
    std::cout << "Welcome to the Ounce Conversion Program!\n";
    while(flag == false)
    {
        std::cout << "How many ounces do you have?\n";
        std:: cin >> oz1;
        if(oz1 <= 0 || std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter an appropriate amount of ounces." << std::endl;
        }
        else
        {
            flag = true;
        }
    }
    std::cout << "Thank you! Converting ounces to pounds...\n";
    lb1 = static_cast<uint32_t>(oz1)/16;
    lb2 = oz1/16;
    ozR = static_cast<uint32_t>(oz1)%16; 
    if(lb1 == 1)
    {
        std::cout << oz1 << " oz is equivalent to " << lb1 << " lb and " << ozR << " oz.\n";
    }
    else
    {
        std::cout << oz1 << " oz is equivalent to " << lb1 << " lbs and " << ozR << " oz.\n";
    }
    std::cout << oz1 << " oz is equivalent to " << lb2 << " lbs.\n";
    std::cout << "Thank you for using the OCP!\n";
    return 0;
}