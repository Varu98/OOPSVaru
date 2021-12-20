#include <iostream>
#include <string>
using namespace std;

class vehicle
{
private:
    int one = 1;
    int two = 2;
    string hi = "hi";
    string hello = " hello";

public:
    void add()
    {
        cout << one + two << endl;
    }

    void joinString()
    {
        cout << hi + hello << endl;
    }
};

int main()
{
    vehicle v1;

    v1.add();
    v1.joinString();

    return 0;
}