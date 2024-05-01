#include "Student.h"
//Structors
Student::Student() : id(-1), Person(Person("None")) {}  // Default constructor

Student::Student(int id, std::string name) : id(id), Person(Person(name)) {}    // Creates a student with a new person
