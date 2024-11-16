#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main() {
  Rectangle rectangle{ 10, 20 };

  cout << rectangle.getWidth() << endl;

  return 0;
}