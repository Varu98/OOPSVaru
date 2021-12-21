//write a program in C++ to find out the Area of a rectangle

#include <iostream>
using namespace std;

class Area
{
public:
    void findArea();
};

void Area::findArea()
{
    float area;
    int l, b;
    cout << "Enter The Length Of The Square" << endl;
    cin >> l;

    area = l * l;
    cout << "The Area Is " << area;
}

int main()
{
    Area obj;
    obj.findArea();
    return 0;
}
