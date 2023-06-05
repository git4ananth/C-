// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    //(a + ib) (c + id) = (ac - bd) + i(ad + bc)
    Complex operator*(Complex const &obj){
        Complex res;
        res.real = (real * obj.real) - (imag * obj.imag);
        res.imag = (real * obj.imag) - (imag * obj.real);
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
    void print(string message){
        cout << message;
    }
};


// Driver code
int main()
{
    Complex c1(10, 5), c2(2, 4);
    int a = 10, b = 20;

    // An example call to "operator+"
    Complex c3 = c1 + c2;
    c3.print();

    cout << a + b;

    Complex c4 = c1 * c2;
    c4.print();
    c4.print("hello");
}
