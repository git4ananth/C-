#include <iostream>
#include <cstdlib>
using namespace std;

class Employee
{
    int emp_no;
    string emp_name;
    string designation;

public:
    Employee() {}
    Employee(int emp_no, string emp_name, string designation)
    {
        this->emp_no = emp_no;
        this->emp_name = emp_name;
        this->designation = designation;
    }
    void printEmp()
    {
        cout << "empno" << emp_no << endl;
        cout << "emp_name" << emp_name << endl;
        cout << "designation" << designation << endl;
    }
};

class Salary : private Employee
{
    float hra, da, pf;

public:
    Salary(int hra, int da, int pf)
    {
        this->hra = hra;
        this->da = da;
        this->pf = pf;
    }
    void printSalary()
    {
        cout << "hra" << hra << endl;
        cout << "da" << da << endl;
        cout << "pf" << pf << endl;
    }
};

class Bank_details
{
    string bank_name;
    int acc_no;

public:
    Bank_details(string bank_name, int acc_no)
    {
        this->acc_no = acc_no;
        this->bank_name = bank_name;
    }
    void printBank()
    {
        cout << "acc_no" << acc_no << endl;
        cout << "bank_name" << bank_name << endl;
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

    Employee e1(emp_no, emp_name, designation);
    Salary s1(hra, da, pf);
    Bank_details b1(bank_name, acc_no);
    e1.printEmp();
    s1.printSalary();
    b1.printBank();
}