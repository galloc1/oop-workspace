#include "Gradebook.h"

//Structors
Gradebook::Gradebook() : grades(new Grade[0]) {}   // Default constructor
Gradebook::~Gradebook(){delete[] grades;}   //Destructor


//Methods
void Gradebook::addGrade(int stud_id, int course_id, std::string assignment, int value){
    int size = sizeof(grades)/sizeof(grades[0]);  // Gets the length of the array
    grades[size] = Grade(assignment, value, stud_id, course_id); // Adds the course to the courses array
}   // Adds a grade to the gradebook