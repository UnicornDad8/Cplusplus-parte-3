//
//  Point.cpp
//
//  Created by Ceci Benitez on 11/30/24.
//

#include "Point.hpp"

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    Point::x = x;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point(int x, int y) : x(x), y(y) {
    
}

bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}
