#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_
#include "Shape.hpp"

namespace Shapes {

class Circle : public Shape {

private:

    const double radius = 0;

public:

    Circle();
    Circle(double r);
    double area();

};


}

#endif // CIRCLE_HPP_
