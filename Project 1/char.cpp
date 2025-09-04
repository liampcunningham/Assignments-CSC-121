#include <iostream>
#include <cctype>
#include <cstdint>
#include <algorithm>

// ./a.out | tee -a output.txt

int main()
{
    std::string phrase{""}, word{""};
    std::cout << "Enter a phrase:" << std::endl;
    std::cin >> word;
    while(std::cin.peek() != '\n')
    {
        phrase += word + " ";
        std::cin >> word;
    }
    std::cin.ignore();
    phrase = phrase + word + "\n";
    std::cout << "you typed in: " << phrase << std::endl;

    uint32_t i{0}, digitCount{0}, upperCount{0}, lowerCount{0}, specialCount{0};

    for(i = 0; i < phrase.size(); i++)
    {
        if(isdigit(phrase[i]) == true)
        {
            digitCount++;
        }
        else if(isupper(phrase[i]) == true)
        {
            upperCount++;
        }
        else if(islower(phrase[i]) == true)
        {
            lowerCount++;
        }
        else
        {
            specialCount++;
        }
    }
    specialCount = specialCount - 1; //removes final space that's added at the end
    std::cout << "number of words: " << i << std::endl;
    std::cout << "number of digits: " << digitCount << std::endl;
    std::cout << "number of uppercase: " << upperCount << std::endl;
    std::cout << "number of lowercase: " << lowerCount << std::endl;
    std::cout << "number of special char: " << specialCount << "\n" << std::endl;
    for(i = 0; i < phrase.size(); i++)
    {
        if(isupper(phrase[i]) == true)
        {
            phrase[i] = static_cast<char>(tolower(phrase[i]));
        }
        else if(islower(phrase[i]) == true)
        {
            phrase[i] = static_cast<char>(toupper(phrase[i]));
        }
    }
    std::cout << phrase << std::endl;
    for(i = 'A'; i <= 'Z'; i++)
    {
       uint32_t upperFreq{0}, lowerFreq{0};
       for(char ch : phrase)
       {
          if(static_cast<uint32_t>(ch) == i)
          {
            upperFreq++;
          }
          if(static_cast<uint32_t>(ch) == i + 32)
          {
            lowerFreq++;
          }
       }
    std::cout << static_cast<char>(i) << ": " << upperFreq << std::endl;
    std::cout << static_cast<char>(i+32) << ": " << lowerFreq << std::endl;
    }
    return 0;
}