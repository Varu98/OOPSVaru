#include <iostream>
using namespace std;

class vardaan
{
public:
    int goodBoy = 1;
    int isGoodBoy()
    {
        printf("good boy \n");
    }
};

int main()
{
    vardaan obj;
    printf("good boy \n%d", obj.goodBoy);

    obj.isGoodBoy();

    return 0;
}