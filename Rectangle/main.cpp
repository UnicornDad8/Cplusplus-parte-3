#include "Rectangle.hpp"
#include <iostream>

using namespace std;

int main() {
  Rectangle first{ 10, 20 };
  Rectangle second{ 10, 20 };

  cout << Rectangle::getObjectsCount() << endl;

  return 0;
}