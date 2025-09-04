#include <cassert>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

class Student
{
  private:
    std::string id{};
    uint32_t credits{0};

  public:
    std::string first_name{""}, last_name{""};
    Student(std::string first, std::string last)
    {
        first_name = first;
        last_name = last;
        srand(static_cast<uint32_t>(time(0)));
        for (uint32_t i = 0; i < 6; i++)
        {
            id += std::to_string(rand() % 10);
        }
        credits = 0;
    }

    void get_name() const{
      std::cout << first_name << " " << last_name;
    }

    void get_id() {
      std::cout << id << std::endl;
    }

    void add_credits(int x) {
      credits = credits + x;
    }

    void reset_credits() {
      credits = 0;
    }

    void get_credits() {
      std::cout << credits << std::endl;
    }

};

class Class
{
  private:
    std::vector<Student> students{};
  public:

    void addStudent(const Student& student){
      students.push_back(student);
    }
    void printRoster() const{
      for(const auto &student : students){
          student.get_name();
      }
    }
};

int main()
{
    Class myClass{};
    double numClass{};
    std::string f{}, s{};

    std::cout << "How many students are in your class?" << std::endl;
    std::cin >> numClass;
    for(uint8_t i{0}; i < numClass; ++i){
        std::cout << "What is their first name?" << std::endl;
        std::cin >> f;
        std::cout << "What is their surname?" << std::endl;
        std::cin >> s;
        Student student = Student(f,s);
        std::cout << student.first_name << " " << student.last_name << std::endl;
        student.get_id();
        myClass.addStudent(student);
        student.reset_credits();
    }
    myClass.printRoster();

    return 0;
}