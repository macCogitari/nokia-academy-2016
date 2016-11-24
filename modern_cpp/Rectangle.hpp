#pragma once

#include "Shape.hpp"


class Rectangle : public Shape
{
public:
    Rectangle() = delete;
    Rectangle(Colors col);
    Rectangle(double x, double y, Colors col);
    Rectangle(const Rectangle & other);

    virtual double getArea() const noexcept override;
    virtual double getPerimeter() const noexcept override;
    virtual double getX() const;
    virtual double getY() const;
    std::string getName() const;
    void print() const;

private:
//    Rectangle();

    double x_;
    double y_;
};
