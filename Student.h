#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

//Class Student
class Student:public Person
{
private:
    int id; // The student's id
public:
    //Structors
    Student();  // Default constructor
    ~Student() {}

    Student(int id, std::string name);    // Creates a student with a new person

    //Getters
    int get_id() {return id;}

    //Setters
    void set_id() {this->id = id;}
};

#endif