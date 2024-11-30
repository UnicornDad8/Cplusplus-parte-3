// C++ Advanced Concepts - Classes
// -----------------------------------------------------
// Overloading the equality operator - exercise
// -----------------------------------------------------
// Create the Point class with x and y coordinates
// after declaring all public and private members
// add a getter and a setter for both coordinates and
// a proper Constructor initialization, finally
// overload the constructor with the equality operator.
// -----------------------------------------------------
// in the main function create two points first and
// second, compare them using the boolalpha keyword
// hint: the precedence of << is higher than ==
// so you can wrap the expression in parenthesis:
// (first == second)

#include <iostream>
#include "Point.hpp"

using namespace std;

int main() {
    Point first{10, 20};
    Point second{10, 20};
    
    cout << boolalpha << (first == second) << endl;
    
    return 0;
}