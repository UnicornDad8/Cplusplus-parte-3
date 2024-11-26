// C++ Advanced Concepts - Classes
// -------------------------------------------------
// Array of objects

#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main() {
    Rectangle rectangles[] = {
        {},
        { 10, 20 },
        { 10, 20, "blue" }
    };
    
    for(Rectangle& rect: rectangles)
        rect.draw();
    
    return 0;
}