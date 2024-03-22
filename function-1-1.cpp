#include "Person.h"

Person* createPersonArray(int n) {
    Person* people = new Person[n];
    for(int i=0; i<n; i++){
        Person person;
        person.name = "John Doe";
        person.age = 0;
        people[i] = person;
    }
    return people;
}