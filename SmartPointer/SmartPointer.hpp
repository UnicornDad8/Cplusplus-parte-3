//
//  SmartPointer.hpp
//
//  Created by Ceci Benitez on 11/26/24.
//

#ifndef SmartPointer_hpp
#define SmartPointer_hpp

#include <stdio.h>

class SmartPointer {
    public:
        explicit SmartPointer(int* ptr);
        ~SmartPointer();
    private:
        int* ptr;
};

#endif /* SmartPointer_hpp */