#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    using Shape::Shape; // constructor inheritance ?
    Rectangle() = delete;
    Rectangle(double x, double y);
    Rectangle(const Rectangle & other) = default;

    double getArea() const override;
    double getPerimeter() const override;
    double getX() const;
    double getY() const;
    void print() const override;

private:

    double x_ = 0.0; // in-class initialisation
    double y_ = 0.0; // in-class initialisation
};
