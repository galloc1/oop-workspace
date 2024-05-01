#include "Person.h"
#include "Instructor.h"
#include "Student.h"
#include "Grade.h"
#include "Gradebook.h"
#include "Course.h"
#include "University.h"
#include <iostream>

using namespace std;

int main(){
    University university("Tulane University", "New Orleans, Louisiana");
    university.addCourse(1, "Chemistry");
    university.get_courses()[0].addPerson(new Student(1, "Geoffrey"));
    university.get_gradebook().addGrade(1, 1, "Volumetric Analysis Practical Report", 11);
    return 0;
}