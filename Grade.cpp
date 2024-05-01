#include "Grade.h"

//Structors
//Grade::Grade();    //Default constructor
//~Grade();   //Destructor

Grade::Grade(std::string assignment, int value, int student, int course) : assignment(assignment), value(value), student(student), course(course) {}  //Parameterised constructor