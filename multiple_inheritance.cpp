#include <iostream>
#include <string>
using namespace std;

class Bank
{
    int account_no;
    string name;
    static int balance;

    public:
       
        void display(){
            cout << Bank::balance;
        }
        void withdraw(int amount){
            Bank::balance = Bank::balance - amount;
        }
};

int Bank::balance = 5000; // initialziation of static variable of a class
int main()
{
        Bank b1, b2;
        b1.withdraw(300);
        b1.display();
        b2.withdraw(500);
        b2.display();

}

class Publication{
    string title;
    float price;

    public:
        void getData(){
            cout << title << price << endl;
        }
        void putData(int title, float price){
            this->title = title;
            this->price = price;
        }
};

class Book : public Publication{
    int pageCount;

    public: 
        void getData(){
            cout << pageCount;
        }
        void putData(int title, float price, int pageCount){
            Publication :: putData(title, price);
            this->pageCount = pageCount;
        }
};

class Tape : public Publication{
    float playing_time;
    public:
        void getData(){
            cout << playing_time;
        }
        void putData(int title, float price, int playingTime){
            Publication :: putData(title, price);
            this->playing_time = playingTime;
        }
};

