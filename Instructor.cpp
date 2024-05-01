#include "Instructor.h"

//Structors
Instructor::Instructor() : Person(Person("None")) {}  // Default constructor

Instructor::Instructor(std::string name) : Person(Person(name)) {}