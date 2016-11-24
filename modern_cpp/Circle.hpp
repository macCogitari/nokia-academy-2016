#pragma once

#include "Shape.hpp"

class alignas(4) Circle final : public Shape
{
public:
    Circle() = delete;
    Circle(double r, Colors col);
    Circle(const Circle & other);

    virtual double getArea() const noexcept override final;
    virtual double getPerimeter() const noexcept override final;
    virtual double getRadius() const final;
    std::string getName() const;
    void print() const;


    [[deprecated("deprecated because I say so")]] double getPi() const;

private:
//    Circle(); // doesn't allow to call default constructor

    double r_;
};
