#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b);
    void getArea();
    void getPerimeter();
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

void Rectangle::getArea()
{
    if (length != 0 || breadth != 0)
    {
        //cout << breadth;
        float area = length * breadth;
        cout << area << endl;
    }
    else
    {
        printf("Invalid\n");
    }
}

void Rectangle::getPerimeter()
{
    float perimeter = 2 * (length + breadth);
    cout << perimeter << endl;
}

int main()
{
    int len, bread;
    // cin >> len;
    // cin >> bread;
    // Rectangle r1(len, bread);
    // r1.getArea();
    //test cases
    Rectangle r2(3, 8);
    r2.getArea();
    Rectangle r3(0, 1);
    r3.getArea();
    Rectangle r4(56, INFINITY);
    r4.getArea();
}