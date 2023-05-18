#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

int main(){
    Dog d1;
    d1.bark();
    d1.eat();
    // We observe that the derived class can access hte functions of base class.
}