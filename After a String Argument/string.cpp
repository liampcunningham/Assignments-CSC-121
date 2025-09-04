#include <iostream>
#include <string>

void pass_by_reference(std::string &my_string){
    std::string addOn = "This is the new part!";
    my_string.append(addOn);
}

void pass_by_value(std::string my_string){
    std::string addOn = "This is the new part!";
    my_string.append(addOn);
}

int main()
{
  std::string my_string = "This is a string";
  std::cout << my_string << std::endl;
  pass_by_value(my_string);
  std::cout << my_string << std::endl;
  pass_by_reference(my_string);
  std::cout << my_string << std::endl;
  return 0;
}