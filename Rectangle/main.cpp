// C++ Advanced Concepts - Classes
// -------------------------------------------------
// Pointers to objects

#include "Rectangle.hpp"
#include <iostream>
#include <memory>

using namespace std;

int main() {
    unique_ptr<Rectangle> rectangle = make_unique<Rectangle>(10, 20);
    
    rectangle -> draw();
    
    return 0;
}