//write a program in C++ to find out the perimeter of a rectangle

#include <iostream>
using namespace std;

class perimeter
{
public:
    void findPerimeter();
};

void perimeter::findPerimeter()
{
    float area;
    int l, b;
    cout << "Enter The Length Of The Rectangle" << endl;
    cin >> l;
    cout << "Enter The Breadth Of The Rectangle" << endl;
    cin >> b;

    area = 2 * (l + b);
    cout << "The Perimeter Is " << area;
}

int main()
{
    perimeter obj;
    obj.findPerimeter();
}