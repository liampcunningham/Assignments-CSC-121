#include <iostream>

int main()
{

    double hours{},children{},gross{},socsec{},fedtax{},sttax{},insurance{}, uni{10.00}, rate{16.78}, net{};

    std::cout << "Welcome to the payroll program!\n" << std::endl;
    std::cout << "How many hours did you work this week?" << std::endl;
    std::cin >> hours;
    std::cout << "How many kids do you have?" << std::endl;
    std::cin >> children;
    if(children <= 0)
    {
        children = 0;
    }
    std::cout << "Payroll Stub:\n" << std::endl;
    std::cout << "Hours: " << hours << std::endl;
    std::cout << "Rate: " << rate << " $/hr" << std::endl;
    if (hours > 40)
    {
        double OT{};
        OT = hours - 40;
        gross = (hours * rate) + (OT * (1.5 * rate));
    }
    else
    {
        gross = hours * rate;
    }
    std::cout << "Gross: $ " << gross << "\n" << std::endl;

    socsec = .06 * gross;
    std::cout << "SocSec: $ " << socsec << std::endl;
    fedtax = .14 * gross;
    std::cout << "FedTax: $ " << fedtax << std::endl;
    sttax = .05 * gross;
    std::cout << "StTax: $ " << sttax << std::endl;
    std::cout << "Union: $ " << uni << std::endl;
    if (children >= 3)
    {
        insurance = 35;
    }
    else
    {
        insurance = 15;
    }
    std::cout << "Ins: $ " << insurance << "\n" << std::endl;
    net = gross - (socsec + fedtax + sttax + uni + insurance);
    std::cout << "Net: $ " << net << "\n" << std::endl;

    std::cout << "Thank you for using the payroll program!" << std::endl;

    return 0;
}