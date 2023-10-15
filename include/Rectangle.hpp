#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_
#include "Shape.hpp"

namespace Shapes {

class Rectangle : public Shape {

private:

    const double length = 0;
    const double width = 0;

public:

    Rectangle();
    Rectangle(double l, double width);
    double area();

};


}

#endif // RECTANGLE_HPP_
