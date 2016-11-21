//
// Created by bedla on 19.11.16.
//

#ifndef GOODCALCULATOR_NUMBER_H
#define GOODCALCULATOR_NUMBER_H

#include <memory>
#include <string>

struct Number
{
    virtual std::unique_ptr<Number> operator+ (const Number& rhs) const = 0;
    virtual std::unique_ptr<Number> operator- (const Number& rhs) const = 0;
    virtual std::unique_ptr<Number> operator* (const Number& rhs) const = 0;
    virtual std::unique_ptr<Number> operator/ (const Number& rhs) const = 0;

    virtual std::string toString() const = 0;

    virtual ~Number(){}
};

#endif //GOODCALCULATOR_NUMBER_H
