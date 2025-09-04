#include <cmath>
#include <iostream>

using namespace std;

class Point
{
  private:
    int x{}, y{};

  public:
    double distance{};

    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void get_x() { cout << x << endl; }

    void get_y() { cout << y << endl; }

    void set_x(int a)
    {
        x = a;
        cout << x << endl;
    }

    void set_y(int b)
    {
        y = b;
        cout << y << endl;
    }

    void distanceTo(int a, int b)
    {
        distance = sqrt((pow(x - a, 2) + pow(y - b, 2)));
        cout << distance << endl;
    }
};

int main()
{
    Point point = Point(3, 7);
    point.get_x();
    point.get_y();
    point.set_x(6);
    point.set_y(4);
    point.distanceTo(9, 2);

    return 0;
}