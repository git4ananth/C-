// Create a class called "Rectangle" that has private attributes
//"length" and "width" and public methods "getArea" and "getPerimeter"
//  that return the area and perimeter of the rectangle. Write
//  a program that creates an object of the class and tests the methods.
// Sample input: length = 4, width = 5
// Sample Output : 20

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(){};
    Rectangle(int len, int bread)
    {
        this->length = len;
        this->breadth = bread;
    }

    int getArea()
    {
        int area = length * breadth;
        return area;
    }

    int getPerimeter()
    {
        int perimeter = 2 * (length + breadth);
        return perimeter;
    }
};

int main()
{
    int l, b;
    cin >> l;
    cin >> b;
    if (l > 0 && b > 0)
    {
        Rectangle r1(l, b);
        cout << r1.getArea() << endl;
    }
    else
    {
        cout << "INVALID";
    }
}