#include "Orchestra.h"
#include <string>

using namespace std;

Orchestra::Orchestra(){
    maximumSize = 0;
    musicians = new Musician[0];
    currentSize = 0;
}

Orchestra::Orchestra(int size){
    maximumSize = size;
    musicians = new Musician[size];
    currentSize = 0;
}

int Orchestra::get_current_number_of_members(){
    return currentSize;
}

bool Orchestra::has_instrument(string instrument){
    for(int i=0; i<currentSize; i++){
        if(musicians[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members(){
    Musician* members = new Musician[currentSize];
    for(int i=0; i<currentSize; i++){
        members[i] = musicians[i];
    }
    return members;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    if(currentSize<maximumSize){
        musicians[currentSize] = new_musician;
        currentSize++;
        return true;
    }
    else{
        return false;
    }
}

Orchestra::~Orchestra(){
    delete[] musicians;
}