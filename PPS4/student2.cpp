/* 
6. Write a Program to perform the following scenario. 
Define a class Student with rollno as member and getdata() and putdata() as member functions. 
Define another class Test that inherit the class student, 
this class test has data members as marks in the subject 1 and subject 2 with member functions 
getmark() and putmark(). 
Define a class Grade with data member grade and a member function to display the grade. 
Define another class result that inherit the classes test and Grade with 
data member total and member function to compute the total marks along with the grade.
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student{
    int roll_no;

    public:
        int get_data(){
            return roll_no;
        }
        void put_data(int roll_no){
            this->roll_no = roll_no;
        }
};

struct sub_info {
    int subject1;
    int subject2;
};

class Test : public Student {

    struct sub_info info;

    public:
        Test(int roll_no){
            Student::put_data(roll_no);
        }
        struct sub_info get_marks(){
            return info;
        }
        void put_marks(struct sub_info info){
            this->info = info;
        }
};

class Grade {
    string grade;

    public:
        virtual void display(){
            cout << grade;
        }
        string get_grade(){
            return grade;
        }
        string put_grade(string Grade){
            this->grade = grade;
        }
};


class Result : public Test, public Grade{

    float total;

    void calculate_total(){
        total = get_marks().subject1 + get_marks().subject2;
    }
    public:
        Result(int roll_no, struct sub_info marks, string grade) : Test(roll_no), Grade(){
            Test::put_marks(marks);
            Grade::put_grade(grade);
        }
        void display(){
            calculate_total();
            cout << "Roll No:" << get_data() << endl;
            cout << "Mark1:" << get_marks().subject1 << endl;
            cout << "Mark2:" << get_marks().subject2 << endl;  
            cout << "Grade:"<< get_grade() << endl;
            cout << "Total:" << total;
        }
};

int main(){

int roll_no;
string grade;
struct sub_info marks;
cout << "Enter roll no:";
cin >> roll_no;
cout << "Enter marks1:";
cin >> marks.subject1;
cout << "Enter marks1:";
cin >> marks.subject2;
cout << "Enter Grade:";
cin >> grade;

Result r(roll_no, marks,grade);
r.display();
}