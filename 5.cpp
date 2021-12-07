// write a program in C++ to find out the area of circle

#include <iostream>
using namespace std;

class area
{
public:
    void areaOfCircle();
};

void area::areaOfCircle()
{
    float pi = 3.14;
    float area;
    int r;

    cout << "Enter The Value Of Radius" << endl;
    cin >> r;

    area = pi * r * r;
    cout << "The Area Of Circle Is " << area;
}

int main()
{
    area obj;
    obj.areaOfCircle();
    return 0;
}