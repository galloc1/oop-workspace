#ifndef GRADE_H
#define GRADE_H

#include <string>

//Class Grade
class Grade
{
private:
    std::string assignment; // The name of the assignment the grade is for
    int value;  //The grade value
    int student;
    int course;
public:
    //Structors
    Grade() : assignment("None"), value(0), student(-1), course(-1) {}    //Default constructor
    ~Grade() {}   //Destructor

    Grade(std::string assignment, int value, int student, int course);   //Parameterised constructor

    //Getters
    std::string get_assignment() {return assignment;}
    int get_value() {return value;}
    int get_student() {return student;}

    //Setters
    void set_assignment(std::string assignment) {this->assignment = assignment;}
    void set_value(int value) {this->value = value;}
};

#endif