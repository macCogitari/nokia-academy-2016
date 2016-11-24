#pragma once

#include <string>

enum class Colors : unsigned char
{
    RED = 1,
    BLUE,
    GREEN
};

class Shape
{
    Colors color;
public:
    Shape(Colors col): Shape()
    {
        color = col;
    }
    Shape():color{Colors::GREEN}{}
    Shape(const Shape& shapeToCopy){
        color = shapeToCopy.getColor();
    }
    virtual ~Shape() {}

    virtual double getArea() const noexcept = 0;
    virtual double getPerimeter() const noexcept = 0;
    virtual std::string getName() const;

    Colors getColor() const{
        return color;
    }

    virtual void print() const;
};
