//Can you swap two variables without using a third one?

#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 5;

    cout << "Before : " << a << b << endl;
    b = b + a;
    a = b - a;
    b = b - a;
    cout << "After : " << a << b << endl;
    
}
