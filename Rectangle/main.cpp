#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main() {
  // Immutable
  const Rectangle rectangle;

  cout << Rectangle::getObjectsCount() << endl;

  return 0;
}