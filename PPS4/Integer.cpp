/*
5 - Write a Program to read an odd number N. and overload the Prefix ++ increment operator 
and Prefix -- decrement operator..
*/

#include <iostream>
using namespace std;

class Integer {
    private:
        int i;
    
    public:
        // Parameterised constructor
        Integer(int i = 0)
        {
            this->i = i;
        }
    
        // Overloading the prefix operator
        Integer& operator++()
        {
            ++i;
            // returned value should be a reference to *this
            return *this;
        }
    
        // Function to display the value of i
        void display()
        {
            cout << "i = " << i << endl;
        }
};
 
// Driver function
int main()
{
    Integer i1(3);
 
    cout << "Before increment: ";
    i1.display();
 
    int x =10;
    ++x;
    double y = 200.333;
    ++y;
    

    // Using the pre-increment operator
    Integer i2 = ++i1;
 
    cout << "After pre increment: " << endl;
    cout << "i1: ";
    i1.display();
    cout << "i2: "; 
    i2.display();
}