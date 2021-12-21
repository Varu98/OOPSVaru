#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void displayNumber()
    {
        cout << "Your numbers are " << a << " and " << b << endl;
    }

    friend Complex sumNumbers(Complex c1, Complex c2);
};

Complex sumNumbers(Complex c1, Complex c2)
{
    Complex c3;

    c3.setNumber((c1.a + c2.a), (c1.b + c2.b));

    return c3;
};

int main()
{
    Complex c1, c2, sum;

    c1.setNumber(1, 2);
    c2.setNumber(3, 4);

    c1.displayNumber();
    c2.displayNumber();

    sum = sumNumbers(c1, c2);
    sum.displayNumber();

    return 0;
}