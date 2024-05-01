#include "University.h"

#include <string>

//Structors
University::University() : name("None"), location("None"), courses(new Course[0]), gradebook(Gradebook()) {}  // Default constructor
University::~University() {delete[] courses;}  // Destructor

University::University(std::string name, std::string location) : name(name), location(location), courses(new Course[0]) {} // Parameterised constructor

//Methods
void University::addCourse(int id, std::string name){
    int size = sizeof(courses)/sizeof(courses[0]);  // Gets the length of the array
    Course newCourse = Course(name, id);   // Creates a new course with the given parameters
    courses[size] = newCourse; // Adds the course to the courses array
}   // Adds a course to the university