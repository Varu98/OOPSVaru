//write a program in C++ to find out the perimeter of a Square

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
    cout << "Enter The Length Of The Square" << endl;
    cin >> l;
    cout << "Enter The Breadth Of The Square" << endl;
    cin >> b;

    area = 4 * l;
    cout << "The Perimeter Is " << area;
}

int main()
{
    perimeter obj;
    obj.findPerimeter();
}