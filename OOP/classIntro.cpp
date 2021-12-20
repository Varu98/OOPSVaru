#include <iostream>
using namespace std;

class vardaan
{
public:
    int goodBoy = 1;
    int isGoodBoy()
    {
        cout << "Good Boy" << endl;
    }
};

int main()
{
    vardaan obj;

    cout << obj.goodBoy << endl;

    obj.isGoodBoy();

    return 0;
}