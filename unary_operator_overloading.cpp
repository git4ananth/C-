#include <iostream>
using namespace std;

class Increment
{
    int a;
    int b;

public:
    Increment(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Increment& operator++() // unary prefix operator
    {
        ++a;
        ++b;
        return *this;
    }
    Increment& operator--() // unary prefix operator
    {
        --a;
        --b;
        return *this;
    }
    void operator ++(int){
        cout << "inside post increment";
        a++;
        b++;
    }
    void display()
    {
        cout << a << b << endl;
    }
};
int main()
{
    Increment i(5,10);
    Increment Y = ++i;
    Y.display();

    i++;
}