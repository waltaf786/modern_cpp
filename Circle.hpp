#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    using Shape::Shape; // constructor inheritance ?
    Circle() = delete;
    Circle(double r);
    Circle(const Circle & other) = default;

    double getArea() const override;
    double getPerimeter() const override;
    double getRadius() const;
    void print() const override;

private:
    // Circle(); // doesn't allow to call default constructor

    double r_ = 0.0; // in-class initialisation
};
