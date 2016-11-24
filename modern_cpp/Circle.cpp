#include "Circle.hpp"
#include <math.h>
#include <iostream>

Circle::Circle(double r, Colors col)
    : Shape(col), r_(r)
{}

Circle::Circle(const Circle & other)
    :
      Shape(other)
{
    r_ = other.getRadius();
}

double Circle::getArea() const noexcept
{
    return M_PI * r_ * r_;
}

double Circle::getPerimeter() const noexcept
{
    return 2 * M_PI * r_;
}

double Circle::getRadius() const
{
    return r_;
}

std::string Circle::getName() const
{
    return "Circle";
}

void Circle::print() const
{
    std::cout << getName() << ":    radius: " << getRadius()
              << ", area: " << getArea()
              << ", perimeter: " << getPerimeter() << std::endl;
}

[[deprecated("deprecated because I say so")]] double
Circle::getPi() const
{
    return 3.14592;
}
