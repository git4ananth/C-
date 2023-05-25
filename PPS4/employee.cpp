#include <iostream>
#include <cstdlib>
using namespace std;

class Employee
{
    int emp_no;
    string emp_name;
    string designation;

public:
    Employee(int emp_no, string emp_name, string designation)
    {
        this->emp_no = emp_no;
        this->emp_name = emp_name;
        this->designation = designation;
    }
    virtual void print()
    {
        cout << "Emp number:" << emp_no << endl;
        cout << "Emp Name:" << emp_name << endl;
        cout << "Designation:" << designation << endl;
    }
};

class Salary : private Employee
{
    float hra, da, pf;

public:
    Salary(int emp_no, string emp_name, string designation,
           int hra, int da, int pf)
        : Employee(emp_no, emp_name, designation)
    {
        this->hra = hra;
        this->da = da;
        this->pf = pf;
    }
    virtual void print()
    {
        Employee ::print();
        cout << "hra" << hra << endl;
        cout << "da" << da << endl;
        cout << "pf" << pf << endl;
    }
};

class Bank_details : private Salary
{
    string bank_name;
    int acc_no;

public:
    Bank_details(int emp_no, string emp_name, string designation, int hra, int da, int pf,
    string bank_name, int acc_no)
    : Salary(emp_no, emp_name, designation, hra, da, pf)
    {
        this->acc_no = acc_no;
        this->bank_name = bank_name;
    }
    void print()
    {
        //anti-pattern -> defeats purpose of OOP
        Salary ::print();
        cout << "Bank Name: " << bank_name << endl;
        cout << "Account Number: " << acc_no << endl;
    }
};

int main()
{
    int emp_no;
    string emp_name;
    string designation;
    float hra, da, pf;
    string bank_name;
    int acc_no;

    cout << "enter employee no ";
    cin >> emp_no;
    cout << "enter employee name ";
    cin >> emp_name;
    cout << "enter designation ";
    cin >> designation;
    cout << "enter hra, da, pf";
    cin >> hra;
    cin >> da;
    cin >> pf;
    cout << "Enter bank name ";
    cin >> bank_name;
    cout << "Enter account number ";
    cin >> acc_no;

    // Employee e1(emp_no, emp_name, designation);
    // Salary s1(hra, da, pf);
    // Bank_details b1(bank_name, acc_no);
    // e1.printEmp();
    // s1.printSalary();
    // b1.printBank();

    Bank_details b1(emp_no, emp_name, designation, hra, da, pf, bank_name, acc_no);
    b1.print();

}