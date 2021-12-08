#include <iostream>

using namespace std;

class father
{
public:
    father()
    {
        cout << "\nfather here\n";
    }
};

class son : public father
{
};

int main()
{
    son s;

    return 0;
}