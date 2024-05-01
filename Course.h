#ifndef COURSE_H
#define COURSE_H

#include "Person.h"
#include "Grade.h"
#include <string>

//Class Course
class Course
{
private:
    std::string name;   // The name of the course
    int id; // Course ID
    Person** people;
    Grade** grades;
public:
    //Structors
    Course();   // Default constructor
    ~Course();  // Destructor

    Course(std::string name, int id);   // Creates a new course

    //Getters
    std::string get_name() {return name;}
    int get_id() {return id;}
    Person** get_people() {return people;}
    Grade** get_grades() {return grades;}

    //Setters
    void set_name(std::string name) {this->name = name;}
    void set_id(int id) {this->id = id;}

    //Methods
    void addPerson(Person* p);   // Adds a person to the course
    void addGrade(Grade* g);
};

#endif