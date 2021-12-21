// write a program to find out the multiplication of 5 numbers

#include <iostream>
using namespace std;

class multiplicate
{
public:
    void multiplication();
};

//scope resolution operator"::"

void multiplicate::multiplication()
{
    int arr[5];

    int count = 1;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The " << i + 1 << "th Element Of Array\n";
        cin >> arr[i];
        count *= arr[i];
    }
    cout << "The Multiplication is " << count;
}

int main()
{

    multiplicate obj;

    obj.multiplication();

    return 0;
}
