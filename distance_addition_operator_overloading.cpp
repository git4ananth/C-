#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    float x;
    float y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
    double operator +(const Point &obj){
        return sqrt(pow(x - obj.x, 2) + pow(y - obj.y, 2));
    }

};

int main(){
    Point p1(2, 3);
    Point p2(5, 6);
    double dist = p1 + p2;
    cout << dist;
}
