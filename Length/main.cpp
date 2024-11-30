// C++ Advanced Concepts - Classes
// -------------------------------------------------
// Overloading the equality operator

#include <iostream>
#include "Length.hpp"

using namespace std;

int main() {
    Length first{10};
    Length second{10};
    
    if(first == second)
        cout << "Equal" << endl;
    
    return 0;
}
