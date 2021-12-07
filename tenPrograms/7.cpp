//write a program in C++ to find out the area of a rectangle

#include <iostream>
using namespace std;

class area
{
public:
    void findarea();
};

void area::findarea()
{
    float area;
    int l, b;
    cout << "Enter The Length Of The Rectangle" << endl;
    cin >> l;
    cout << "Enter The Breadth Of The Rectangle" << endl;
    cin >> b;

    area = l * b;
    cout << "The Area Is " << area;
}

int main()
{
    area obj;
    obj.findarea();
    return 0;
}
