//
//  TextBox.hpp
//  Rectangle
//
//  Created by Ceci Benitez on 11/15/24.
//

#ifndef TextBox_hpp
#define TextBox_hpp

#include <stdio.h>
#include <string>

using namespace std;

class TextBox {
    public:
        string getValue();
        void setValue(const string& value);
    
    private:
        string value;
};

#endif /* TextBox_hpp */