// C++ Advanced Concepts - Classes
// -------------------------------------------------
// Constructors - explicit keyword

#include "Person.hpp"
#include <iostream>

using namespace std;

void showPerson(Person person) {
    
}

int main() {
    Person person{20};
    showPerson(person);
   
    return 0;
}
