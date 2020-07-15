#pragma once

enum class Colour : unsigned char
{
    RED = 0x01, GREEN, BLUE
};

class Shape
{
public:
    // Shape() : colour(Colour::RED) {}; use in-class initialisation instead vv
    Shape (Colour c); // once defined - need to also define default
    Shape() = default;
    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;
    virtual Colour getColour() const;
    virtual void setColour(Colour);

private:
    Colour colour = Colour::RED; // since C++ 11
};
