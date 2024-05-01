#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <string>

//Class Instructor
class Instructor:public Person
{
private:
    
public:
    //Structors
    Instructor();   // Default constructor
    ~Instructor() {}

    Instructor(std::string name);
};

#endif