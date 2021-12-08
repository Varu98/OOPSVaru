#include <iostream>

using namespace std;

class a
{
public:
    a()
    {
        int sum1, sum2;
    }
};

class b : public a
{
};

int main()
{
    b multiply;
    return 0;
}