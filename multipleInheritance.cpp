#include <iostream>

using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout << "this is a vehicle" << endl;
    }
};

class car
{
public:
    car()
    {
        cout << "this is a car" << endl;
    }
};

class scooty : public vehicle, public car
{
};

int main()
{
    scooty s;
    return 0;
}