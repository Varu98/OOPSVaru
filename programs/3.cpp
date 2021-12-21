// write a program to find out the Division of two numbers
#include <iostream>
using namespace std;

class divide
{

public:
    void divideNumbers();
};

void divide::divideNumbers()
{
    int arr[2];
    int count = 0;
    for (int i = 0; i <= 1; i++)
    {
        cout << "Enter The " << i << " Number\n";
        cin >> arr[i];
    }
    count = arr[0] / arr[1];
    cout << "The Sum Is " << count << endl;
}

int main()
{

    divide obj;
    obj.divideNumbers();

    return 0;
}