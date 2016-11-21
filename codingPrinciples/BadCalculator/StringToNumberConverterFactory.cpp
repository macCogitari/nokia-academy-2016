
#include "StringToNumberConverterFactory.h"
#include "Complex.h"
#include "Integer.h"
#include <algorithm>
#include <memory>


StringToNumberConverterFactory::StringToNumberConverterFactory(
        const NumberType &ct)
{

}


std::function<std::unique_ptr<Number>(const std::string&)>
StringToNumberConverterFactory::create(){
    std::function<std::unique_ptr<Number>(const std::string&)> returnFunction;

    switch (converterType) {
    case NumberType::Integer:
        returnFunction = [](const std::string& text){
            std::unique_ptr<Number> integerNumber(new Integer(std::stoi(text.c_str())));
            return integerNumber;
        };
        break;
    case NumberType::Complex:
        returnFunction = [](const std::string& text){
            auto splitPosition = std::find_if(text.rbegin(), text.rend(), [](char c){return c == '-' || c == '+';});
            auto splitPoint = text.begin() + std::distance(splitPosition, text.rend())-1;

            std::complex<double> value{std::stof(std::string(text.begin(), splitPoint)),
                                       std::stof(std::string(splitPoint, text.end()))    };
            std::unique_ptr<Number> complexNumber(new Complex(value));
            return complexNumber;
        };
        break;
    default:
        break;
    }
    return returnFunction;
}
