#include <iostream>
using namespace std;

void volumeCone(int radius, int height)
{
    float pi = 3.14;
    int volumeOfCone = pi * radius * radius * (height / 3);
    cout << volumeOfCone;
}

int main()
{
    volumeCone(3, 7);
    return 0;
}