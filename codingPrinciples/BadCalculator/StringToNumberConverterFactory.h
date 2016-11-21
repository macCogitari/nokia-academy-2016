//
// Created by bedla on 19.11.16.
//

#ifndef GOODCALCULATOR_STRINGTONUMBERCONVERTERFACTORY_H
#define GOODCALCULATOR_STRINGTONUMBERCONVERTERFACTORY_H

#include <string>
#include <functional>
#include <algorithm>
#include <memory>

#include "Number.h"

#include "Complex.h"
#include "Integer.h"


enum class NumberType {Integer, Complex};

class StringToNumberConverterFactory {
public:
    StringToNumberConverterFactory(const NumberType& ct);
    std::function<std::unique_ptr<Number>(const std::string&)> create();

private:
    NumberType converterType;
};


#endif //GOODCALCULATOR_STRINGTONUMBERCONVERTERFACTORY_H
