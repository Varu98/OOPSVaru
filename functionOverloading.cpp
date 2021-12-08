//Run time polymorphism

//function overloading

#include <iostream>

using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }

    void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base
{
public:
    void print() //print() is already virtual function in derived class, we could also declare it as virtual void print() explicitly.
    {
        cout << "print derived class" << endl;
    }
    void show()
    {
        cout << "show derived class" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime
    bptr->print();

    //non-virtual function, binded at compile time
    bptr->show();
}
/* unit 1
unit 2 
unit 3 */