#include "Shape.hpp"
#include <iostream>

Shape::Shape(Colour c)
    : colour(c)
    {}

// can use 'default' keyword instead
// Shape::Shape() {}

void Shape::print() const
{
    std::cout << "Unknown Shape" << std::endl;
}

Colour Shape::getColour() const
{
    return colour;
}

void Shape::setColour(Colour col)
{
    colour = col;
}