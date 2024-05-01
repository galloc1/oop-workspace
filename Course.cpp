#include "Course.h"

#include <string>

//Structors
Course::Course() : name("None"), id(-1), people(new Person*[0]), grades(new Grade*[0]) {} // Default constructor
Course::~Course(){delete[] people;}  // Destructor

Course::Course(std::string name, int id) : name(name), id(id), people(new Person*[0]), grades(new Grade*[0]) {}   // Creates a new course

//Methods
void Course::addPerson(Person* p){
    int size = sizeof(people)/sizeof(people[0]);  // Gets the length of the array
    people[size] = p; // Adds the course to the courses array
}   // Adds a person to the course

void Course::addGrade(Grade* g){
    int size = sizeof(grades)/sizeof(grades[0]);
    grades[size] = g;
}