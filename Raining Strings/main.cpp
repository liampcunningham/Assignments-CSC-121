#include "vector.hpp"
#include <iostream>
#include <vector>
#include <string>

int main(){
    std::string busiName{};
    bool flag = false;
    std::string answer{};
    std::cout << "Welcome to the business sorting program" << std::endl;
    do{
        std::cout << "Please enter the name of a business: " << std::endl;
        std::cin >> busiName;
        business(busiName);
        std::cout << "Another business?\n" << std::endl;
        std::cin >> answer;
        std::cout << "\n";
        if (answer != "y" && answer != "yes" && answer != "Y" && answer != "YES"){
            flag = true;
        }
    } while (flag == false);
    std:: cout << "Thank you for using the business sorting program!" << std::endl;
    return 0;
}