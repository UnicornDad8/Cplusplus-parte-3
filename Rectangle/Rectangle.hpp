#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
  public:
    Rectangle(int width, int height);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);

  private:
    int width = 0;
    int height = 0;
};

#endif