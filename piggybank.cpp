//Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more 
//amount to it. Create a class 'AddAmount' with a data member named 'amount' with
// an initial value of $50. Now make two functions of this class as follows:
//1 - without any parameter - no amount will be added to the Piggie Bank
//2 - having a parameter which is the amount that will be added to the Piggie Bank
//Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank


#include <iostream>

using namespace std;

class AddAmount {
    private:
        int amount = 50;
    
    public:
        void add(){}
        void add(int money) {
            amount += money;
        }
        int display() {
            cout << "Final amount: $" << amount << endl;
            return amount;
        }
};

int main() {
    AddAmount piggyBank;

    piggyBank.add(); // no amount added
    piggyBank.display(); // displays Final amount: $50

    piggyBank.add(100); // adding $100 to piggy bank
    piggyBank.display(); // displays Final amount: $150

    return 0;
}
