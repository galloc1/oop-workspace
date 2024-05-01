#ifndef PERSON_H
#define PERSON_H

#include <string>

//Class Person
class Person
{
private:
    std::string name;   // The name of the person
public:
    //Structors
    Person();   // Default constructor
    ~Person() {}

    Person(std::string name);   // Parameterised constructor

    //Getters
    std::string get_name() {return name;}

    //Setters
    void set_name(std::string name) {this->name = name;}
};

#endif