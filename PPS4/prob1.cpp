#include <iostream>
#include <cstdlib>
using namespace std;

class Student
{
    int rollno;

public:
    void getData()
    {
    }
    void putData(int rollno)
    {
        this->rollno = rollno;
    }
};

class Test : public Student
{
    int subject1;
    int subject2;

public:
    int getMarks()
    {
        return subject1 + subject2;
    }
    void putMarks(int marks1, int marks2)
    {
        this->subject1 = marks1;
        this->subject2 = marks2;
    }
};

class Grade
{
    int grade;
public:
    void putGrade(char grade)
    {
        this->grade = grade;
    }
    void display_grade()
    {
        cout << grade;
    }
};

class Result : public Grade, public Test
{
    int total;
    void total()
    {
        cout << "Total : " << getMarks() << endl;
    }
};

int main(){
    Student s1;
    int r, m1,m2;
    char g;
    cout << "Enter rollno:";
    cin >> r;
    s1.putData(r);
    cout << "enter marks1 and marks2:";
    cin >> m1 >> m2;
    s1.
}