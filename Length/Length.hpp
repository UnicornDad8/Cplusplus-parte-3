//
//  Length.hpp
//
//  Created by Ceci Benitez on 11/30/24.
//

#ifndef Length_hpp
#define Length_hpp

#include <stdio.h>

class Length {
    public:
        explicit Length(int value);
        bool operator==(const Length& other) const;
        bool operator==(int other) const;
        bool operator!=(int other) const;
    private:
        int value;
};

#endif /* Length_hpp */