// write a program to find out the sum of five numbers
#include <iostream>
using namespace std;

class add
{

public:
    void addNumbers();
};

void add::addNumbers()
{
    int arr[10];

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter The " << i << " Number\n";
        cin >> arr[i];
        count = count + arr[i];
    }

    cout << "The Sum Is " << count << endl;
}

int main()
{

    add obj;
    obj.addNumbers();

    return 0;
}