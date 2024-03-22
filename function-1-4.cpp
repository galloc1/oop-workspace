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

PersonList shallowCopyPersonList(PersonList pl){
    Person* people = pl.people;
    PersonList personList;
    personList.people = people;
    personList.numPeople = pl.numPeople;
    return personList;
}