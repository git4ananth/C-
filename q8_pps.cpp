/*
8. In a school, there is a hierarchy of classes for the 
students with a base class of student and they had split 
the students into Junior Student and Senior Student. 
Senior Student has an additional class inheritance from a Grade class.
The Grade class reflects the grade a student earns in the exams. 
Create a C++ code snippet for the above scenario that demonstrates inheritance.                                                                                          (MODULE 6  - HARD)
*/

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Student {
    int id;
    string tag;
    public:
        int get_id(){
            return id;
        }
        virtual string get_tag();   //Pure virtual function
};

class JuniorStudent : public Student{
    
    public:
        string get_tag(){
            return "Junior";
        }

};

class Grade{
    string grade;

    public:
        Grade(string grade){
            this->grade = grade;
        }      
        string get_grade(){
            return grade;
        }
};

class SeniorStudent : public Grade, public Student{
    public:
        SeniorStudent(string grade): Grade(grade), Student(){
            //does nothing
        }
        string get_tag(){
            return "Senior";
        }
};

int main(){
    SeniorStudent ss("A");
    cout << ss.get_grade() << ss.get_id();
    return 0;
}