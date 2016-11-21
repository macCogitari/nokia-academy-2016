#include "Integer.h"
#include <memory>

Integer::Integer()
{

}

Integer::Integer(int value)
    :
    _value{value}
{
}


Integer::~Integer()
{

}

std::unique_ptr<Number>
Integer::operator+ (const Number& rhs) const{
    auto intRhs = dynamic_cast<const Integer&>(rhs);
    return std::unique_ptr<Number>(new Integer(_value + intRhs.get_value()));
}

std::unique_ptr<Number>
Integer::operator- (const Number& rhs) const{
    auto intRhs = dynamic_cast<const Integer&>(rhs);
    return std::unique_ptr<Number>(new Integer(_value - intRhs.get_value()));

}
std::unique_ptr<Number>
Integer::operator* (const Number& rhs) const{
    auto intRhs = dynamic_cast<const Integer&>(rhs);
    return std::unique_ptr<Number>(new Integer(_value * intRhs.get_value()));

}

std::unique_ptr<Number>
Integer::operator/ (const Number& rhs) const{
    auto intRhs = dynamic_cast<const Integer&>(rhs);
    return std::unique_ptr<Number>(new Integer(_value / intRhs.get_value()));

}

std::string
Integer::toString() const{
    return std::to_string(_value);
}
