//
//  Point.hpp
//
//  Created by Ceci Benitez on 11/30/24.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

class Point {
    public:
        Point(int x, int y);
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
        bool operator==(const Point& other) const;
    private:
        int x;
        int y;
};

#endif /* Point_hpp */