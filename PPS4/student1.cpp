/*1. **Student Class**
   Write a code with Student as a base class, Mark as intermediate class and Result as a derived class.
   •The base class named Student with data members id, and name and getstu() and
   putstu() are the methods to read and display the id and name.
   •The intermediate class named Marks with data members m1, m2, m3 and getmarks()
   and putmarks() are the methods to read and display the marks.
   •The derived class named Result with total, average as a data members and show() as
   the method to display the total and average of marks.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
    int ID;
    string name;
    int m1;
    int m2;
    int m3;

public:
    Student(){};
    Student(int ID, string name, int m1, int m2, int m3)
    {
        this->ID = ID;
        this->name = name;
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    void getInfo()
    {
        cout << "ID : " << ID << endl;
        cout << "Name : " << name << endl;
        cout << "M1: " << m1 << endl;
        cout << "M2 : " << m2 << endl;
        cout << "M3 : " << m3 << endl;
    }
};

int main()
{
    int id, m1, m2, m3;
    string name;
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter Name :";
    cin >> name;
    cout << "Enter M1 :";
    cin >> m1;
    cout << "Enter M2 :";
    cin >> m2;
    cout << "Enter M3 :";
    cin >> m3;
    Student s1(id, name, m1, m2, m3);
    s1.getInfo();
}