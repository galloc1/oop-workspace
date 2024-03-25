#include "Musician.h"

using namespace std;

Musician::Musician(){
    instrument = "null";
    yearsPlayed = 0;
}

Musician::Musician(string instrument, int experience){
    this->instrument = instrument;
    yearsPlayed = experience;
}

string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience(){
    return yearsPlayed;
}
