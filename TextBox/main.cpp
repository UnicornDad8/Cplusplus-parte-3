// C++ Advanced Concepts - Classes
// -------------------------------------------------
// Constructors - explicit keyword

#include "TextBox.hpp"
#include <iostream>

using namespace std;

int main() {
    TextBox box{"Hello world"};
    
    cout << box.getValue() << endl;
   
    return 0;
}