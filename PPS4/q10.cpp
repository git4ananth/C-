/*
q10:
Write a C++ program showing runtime behaviour of virtual functions with following conditions
i. Virtual functions cannot be static.
ii. A virtual function can be a friend function of another class.
iii. Virtual functions should be accessed using pointer or reference of base class type to 
achieve runtime polymorphism.
iv. The prototype of virtual functions should be the same in the base as well as derived class.
v. They are always defined in the base class and overridden in a derived class. 
It is not mandatory for the derived class to override (or re-define the virtual function), 
in that case, the base class version of the function is used.
A class may have virtual destructor but it cannot have a virtual constructor.
*/

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
         cout<<"Constructing base \n";
      }
    virtual ~Base() {
         cout<<"Destructing base \n";
    }
    virtual void display() {
        cout << "This is the display function in the Base class." << endl;
    }
    virtual void print(){
        cout << "This is the print function in the Base class." << endl;
    }

    virtual void func(){
       cout << "func() called from class A"; 
    }
};

class Another {
    public:
        friend void Base:: func();
};

class Derived : public Base {
public:
     Derived() {
         cout<<"Constructing derived \n";
      }
      ~Derived() {
         cout<<"Destructing derived \n";
      }
    void display() {
        cout << "This is the display function in the Derived class." << endl;
    }
};

int main() {
    Base* ptr;
    Base obj1;
    Derived obj2;

    ptr = &obj1;
    ptr -> display();  // Base version of the function is called

    ptr = &obj2;
    ptr -> display();  // Derived version of the function is called
    ptr ->print();  //Calls the base class print method as it is NOT overridden in Derived

    Derived *derived = new Derived();
    Base *bptr = derived;
    delete bptr;

    //A virtual function can be a friend function of another class.
    obj1.func();
    return 0;
}
