//
//  Length.cpp
//
//  Created by Ceci Benitez on 11/30/24.
//

#include "Length.hpp"

Length::Length(int value) : value(value) {
    
}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

bool Length::operator!=(int other) const {
    return !(value == other);
}