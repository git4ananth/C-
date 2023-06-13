#include <iostream>
using namespace std;

class Bitwise
{
    int a;

public:
    Bitwise(int a)
    {
        this->a = a;
    }
    Bitwise operator & (Bitwise const &obj){
        Bitwise result(a & obj.a);
        return result;
    }
    Bitwise operator | (Bitwise const &obj){
        Bitwise result(a | obj.a);
        return result;
    }
    Bitwise operator ^ (Bitwise const &obj){
        Bitwise result(a ^ obj.a);
        return result;
    }
    void display(){
        cout << a << endl;
    }
};

int main(){
    Bitwise b1(10);
    Bitwise b2(20);
    Bitwise b3 = b1 & b2;
    Bitwise b4 = b1 | b2;
    Bitwise b5 = b1 ^ b2;
    
    b3.display();
    b4.display();
    b5.display();

}