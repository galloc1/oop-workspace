#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"
#include <string>

//Class Gradebook
class Gradebook
{
private:
    Grade* grades;
public:
    //Structors
    Gradebook();    // Default constructor
    ~Gradebook();   //Destructor

    //Getters
    Grade* get_grades() {return grades;}

    //Methods
    void addGrade(int stud_id, int course_id, std::string assignment, int value);   // Adds a grade to the gradebook
};

#endif