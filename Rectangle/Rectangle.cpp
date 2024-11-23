#include "Rectangle.hpp"
#include <iostream>

using namespace std;

void Rectangle::draw() {
  cout << "Drawing a rectangle" << endl;
  cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() {
  return width * height;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if(width < 0)
        throw invalid_argument("width");
    
    this -> width = width;
}

Rectangle::Rectangle(int width, int height) {
  cout << "Constructing a rectangle" << endl;
  
  setWidth(width);
  setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
  cout << "Constructing a rectangle with color" << endl;

  this -> color = color;
}