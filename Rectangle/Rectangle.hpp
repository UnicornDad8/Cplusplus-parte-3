#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
  public:
    Rectangle() = default;
    Rectangle(const Rectangle& source) = delete;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);

  private:
    int width = 0;
    int height = 0;
    string color;
};

#endif