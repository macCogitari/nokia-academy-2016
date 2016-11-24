#include "Square.hpp"
#include <iostream>

Square::Square(double x, Colors col)
    :  Rectangle(x, x, col)
{}

Square::Square(const Square &other)
    : Rectangle(other.getX(), other.getX(), other.getColor())
{}

double Square::getArea() const noexcept
{
    return getX() * getX();
}

double Square::getPerimeter() const noexcept
{
    return 4 * getX();
}

std::string Square::getName() const
{
    return "Square";
}

void Square::print() const
{
    std::cout << getName() << ":    x: " << getX()
              << ", area: " << getArea()
              << ", perimeter: " << getPerimeter()  << std::endl;
}
