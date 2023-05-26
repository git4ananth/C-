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
#include <string>
using namespace std;

struct Marks{
    int mark1;
    int mark2;
    int mark3;
};

struct std_info{
    int ID;
    string name;
};

class Student
{
    struct std_info info;  

    public:
        struct std_info get_student(){
            return info;
        }

        void put_student(struct std_info info)
        {
            this->info = info;
        }
};

class Mark : public Student {
    
    struct Marks marks;

    public:
    
    struct Marks get_marks(){
        return marks;
    }
    void put_marks(struct Marks marks){
        this->marks = marks;
    }

};

class Result : public Mark{
    int total;
    float average;

    void calculate_total(){
        struct Marks m = get_marks();
        total = m.mark1 + m.mark2 +m.mark3;
        average = total / 3;
    }
    public:

        Result(struct std_info info, struct Marks marks) :  Mark(){
            Student::put_student(info);
            Mark::put_marks(marks);
        } 
        void show(){
            calculate_total();
            cout << "ID" << get_student().ID <<endl;
            cout << "Name" << get_student().name <<endl;
            cout << "Mark1:" << get_marks().mark1 <<endl;
            cout << "Mark2:" << get_marks().mark2 <<endl;
            cout << "Mark3:" << get_marks().mark3 <<endl;
            cout << "The total is:" << total <<endl;
            cout << "The average is:" << average <<endl;
        }
};

int main()
{
    struct std_info info;
    cout << "Enter ID : ";
    cin >> info.ID;
    cout << "Enter Name :";
    cin >> info.name;
    struct Marks m;
    cout << "Enter M1 :";
    cin >> m.mark1;
    cout << "Enter M2 :";
    cin >> m.mark2;
    cout << "Enter M3 :";
    cin >> m.mark3;

    Result r(info, m);
    r.show();
    return 0;
};