// C++ program for function overriding
#include <iostream>
using namespace std;

class base
{
public:
    void print()
    {
        cout << "print base class" << endl;
    }

    void show() { cout << "show base class" << endl; }
};

class derived : public base
{
public:
    // print () is already virtual function in
    // derived class, we could also declared as
    // virtual void print () explicitly
    void print() { cout << "print derived class" << endl; }

    void show() { cout << "show derived class" << endl; }
};

// Driver code
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    // vehicle v1, car
    // Vehicle v1, Car c1
    // v1 = &c1;
    // is this true?
    // c1 = &v1;

    // Virtual function, binded at
    // runtime (Runtime polymorphism)
    bptr->print();

    // Non-virtual function, binded
    // at compile time
    bptr->show();

    return 0;
}
