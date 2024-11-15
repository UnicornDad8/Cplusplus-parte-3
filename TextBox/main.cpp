//
//  main.cpp
//  Rectangle
//
//  Created by Ceci Benitez on 11/14/24.
//
// Exercise with getters and setters

#include <iostream>
#include "TextBox.hpp"

using namespace std;

int main() {
    TextBox box;
    
    box.setValue("Hello world");
    
    cout << box.getValue() << endl;
    
    return 0;
}