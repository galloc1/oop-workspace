#include "Person.h"

PersonList createPersonList(int n){
    Person* people = new Person[n];
    for(int i=0; i<n; i++){
        Person person;
        person.name = "Jane Doe";
        person.age = 1;
        people[i] = person;
    }
    PersonList personList;
    personList.people = people;
    personList.numPeople = n;
    return personList;
}

PersonList deepCopyPersonList(PersonList pl){
    Person* people = new Person[pl.numPeople];
    for(int i=0; i<pl.numPeople; i++){
        Person person;
        person.name = pl.people[i].name;
        person.age = pl.people[i].age;
        people[i] = person;
    }
    PersonList personList;
    personList.people = people;
    personList.numPeople = pl.numPeople;
    return personList;
}