#include "Person.h"
#include <iostream>

using namespace std;

extern PersonList createPersonList(int n);

int main(){
    int n;
    cin >> n;
    PersonList personList = createPersonList(n);
    for(int i=0; i<n; i++){
        cout << personList.people[i].name << " Age " << personList.people[i].age << endl;
    }
}