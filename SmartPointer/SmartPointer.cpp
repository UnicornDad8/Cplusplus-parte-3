//
//  SmartPointer.cpp
//
//  Created by Ceci Benitez on 11/26/24.
//

#include <iostream>
#include "SmartPointer.hpp"

using namespace std;

SmartPointer::SmartPointer(int *ptr) : ptr{ptr} {
    cout << "Pointer constructor" << endl;
}

SmartPointer::~SmartPointer() {
    delete ptr;
    ptr = nullptr;
}
