#include <iostream>
#include <cstdlib>
using namespace std;


struct emp_info{
    int no;
    string name;
    string designation;
};

class Employee
{

struct emp_info info;

public:
    Employee(struct emp_info info)
    {
        this->info = info;
    }
    virtual void print()
    {
        cout << "Emp number:" << info.no << endl;
        cout << "Emp Name:" << info.name << endl;
        cout << "Designation:" << info.designation << endl;
    }
};

struct salary_info{
    float hra;
    float da;
    float pf;
};

class Salary : private Employee
{
    struct salary_info info;
    float net_pay;

    float calculate_net_pay(){
        return info.da + info.hra + info.pf;    //PF is deducted not included
    } 

public:
    Salary(struct emp_info emp, struct salary_info salary)
        : Employee(emp)
    {
        this->info = salary;
    }

    virtual void print()
    {
        Employee ::print();
        cout << "hra" << info.hra << endl;
        cout << "da" << info.da << endl;
        cout << "pf" << info.pf << endl;
    }
};

struct bank_info{
    string name;
    int acc_no;
};

class Bank_details : private Salary
{
    struct bank_info info;    

public:
    Bank_details(struct emp_info emp, struct salary_info salary, struct bank_info bank)
    : Salary(emp, salary)
    {
        this->info = bank;
    }
    void print()
    {
        Salary::print();
        cout << "Bank Name: " << info.name << endl;
        cout << "Account Number: " << info.acc_no << endl;
    }
};

int main()
{
    struct emp_info emp;
    struct bank_info bank;
    struct salary_info salary;

    cout << "enter employee no ";
    cin >> emp.no;
    cout << "enter employee name ";
    cin >> emp.name;
    cout << "enter designation ";
    cin >> emp.designation;
    cout << "enter hra, da, pf";
    cin >> salary.hra;
    cin >> salary.da;
    cin >> salary.pf;
    cout << "Enter bank name ";
    cin >> bank.name;
    cout << "Enter account number ";
    cin >> bank.acc_no;

    Bank_details b1(emp, salary, bank);
    b1.print();
}