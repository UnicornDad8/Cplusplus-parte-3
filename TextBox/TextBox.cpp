//
//  TextBox.cpp
//  Rectangle
//
//  Created by Ceci Benitez on 11/15/24.
//

#include "TextBox.hpp"

string TextBox::getValue() {
    return value;
}

void TextBox::setValue(const string& value) {
    this -> value = value;
}