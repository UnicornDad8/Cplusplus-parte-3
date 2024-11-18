//
//  TextBox.cpp
//
//  Created by Ceci Benitez on 11/15/24.
//

#include "TextBox.hpp"
#include <iostream>

using namespace std;

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this -> value = value;
}

TextBox::TextBox(const string& value) : value{value} {
    cout << "Constructing a TextBox" << endl;
}
