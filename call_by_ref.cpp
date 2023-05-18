#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    int x, y;
};

class B
{
public:
    int u, v;
};

void add( A &a, B &b)
{
    a.x = 40;
    a.y = 50;
    b.u = 140;
    b.v = 150;
}

int main()
{
    A a;
    a.x = 10;
    a.y = 20;
    B b;
    b.u = 30;
    b.v = 40;
    add(a, b);
    cout << a.x << a.y << endl;
    cout << b.u << b.v << endl;

}