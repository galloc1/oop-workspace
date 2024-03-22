#include "Person.h"
#include <iostream>

using namespace std;

extern Person* createPersonArray(int n);

int main(){
    int numPpl;
    cin >> numPpl;
    Person* people = createPersonArray(numPpl);
    for(int i=0; i<numPpl; i++){
        cout << people[i].name << " Age " << people[i].age << endl;
    }
    return 0;
}