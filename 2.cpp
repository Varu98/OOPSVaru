// write a program in C++ using classes to find out the average of 5 numbers

#include <iostream>
using namespace std;

class average
{
public:
    void calculateAverage();
};

void average::calculateAverage()
{
    int arr[10];
    int count;

    for (int i = 0; i < 5; i++)
    {
        cout << "Input No. " << i + 1 << endl;
        cin >> arr[i];
        count += arr[i];
    }
    count /= 5;

    cout << "The Average Is " << count << endl;
}

int main()
{
    average obj;
    obj.calculateAverage();
    return 0;
}