#include "Person.h"
#include <iostream>

using namespace std;

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    PersonList pl1 = createPersonList(5);
    PersonList pl2 = deepCopyPersonList(pl1);
    pl2.people[0].age = 2;
    for(int i=0; i<5; i++){
        cout<<pl1.people[i].name << " " << pl1.people[i].age<<" vs ";
        cout<< pl2.people[i].name << " " << pl2.people[i].age << endl;
    }
    return 0;
}