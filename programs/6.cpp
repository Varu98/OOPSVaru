//write a program in C++ to find out the perimeter of a circle
#include <iostream>
using namespace std;

class perimeter
{
public:
    void findPerimeter();
};

void perimeter::findPerimeter()
{
    float pi = 3.14, area;
    int r;
    cout << "Enter The Radius Of The Circle" << endl;
    cin >> r;
    area = 2 * pi * r;
    cout << "The Perimeter Is " << area;
}

int main()
{
    perimeter obj;
    obj.findPerimeter();
}