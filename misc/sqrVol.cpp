#include <iostream>
using namespace std;

void volumeSquare(int a)
{
    int sum = a * a * a;
    cout << sum;
}

int main()
{
    volumeSquare(9);
    return 0;
}