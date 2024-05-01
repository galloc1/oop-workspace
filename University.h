#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Course.h"
#include "Gradebook.h"
#include <string>

//Class University
class University
{
private:
    std::string name;   // The name of the university
    std::string location;   // The location of the university, as a string

    Course* courses; // The courses available at the university
    Gradebook gradebook;   // The gradebook associated with the university
public:
    //Structors
    University();   // Default constructor
    ~University();  // Destructor

    University(std::string name, std::string location); // Creates a university with an empty course list

    //Getters
    std::string get_name() {return name;}
    std::string get_location() {return location;}
    Course* get_courses() {return courses;}
    Gradebook get_gradebook() {return gradebook;}

    //Setters
    void set_name(std::string name) {this->name = name;}
    void set_location(std::string location) {this->location = location;}

    //Methods
    void addCourse(int id, std::string name);   // Adds a course to the university
};

#endif
