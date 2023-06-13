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
    Increment& operator ++(int){
        a++;
        b++;
        return *this;
    }
    Increment & operator --(int){
        a--;
        b--;
        return *this;
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

    Increment i2(20, 40);
    Increment Y2 = i2++;
    Y2.display();

}