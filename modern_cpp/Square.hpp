#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square() = delete;
    Square(double x, Colors col);
    Square(const Square & other);

    virtual double getArea() const noexcept(true) override final ;
    virtual double getPerimeter() const noexcept override final ;
    virtual std::string getName() const override final;
    virtual void print() const override final;

    double getY() = delete; // should not have Y dimension


private:

//    Square();
};
