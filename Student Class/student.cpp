#include <cassert>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Student
{
  private:
    string id{};
    uint32_t credits{};

  public:
    string first_name{""}, last_name{""};
    Student(string first, string last)
    {
        first_name = first;
        last_name = last;
        srand(static_cast<uint32_t>(time(0)));
        for (uint32_t i = 0; i < 6; i++)
        {
            id += to_string(rand() % 10);
        }
        credits = 0;
    }

    void get_id() {
      cout << id << endl;
    }

    void add_credits(int x) {
      credits = credits + x;
    }

    void reset_credits() {
      credits = 0;
    }

    void get_credits() {
      cout << credits << endl;
    }


};

int main()
{
    Student student = Student("Bob", "Bobberson");
    cout << student.first_name << " " << student.last_name << endl;
    student.first_name = "Liam";
    student.last_name = "Cunningham";
    cout << student.first_name << " " << student.last_name << endl;
    student.get_id();

    // assert(student.first_name == "Bob");
    // assert(student.number_of_credits == 0);

       student.add_credits(6);
       student.get_credits();
       student.add_credits(2);
       student.get_credits();

    //   assert(student.number_of_credits == 8);

       student.reset_credits();
       student.get_credits();

    //   assert(student.number_of_credits == 0);

    return 0;
}