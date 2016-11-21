#include "Complex.h"

#include <string>
#include <memory>

Complex::Complex()
{
}

Complex::Complex(std::complex<double> value): _value{value}
{
}

Complex::~Complex()
{
}

std::unique_ptr<Number> Complex::operator+(const Number &rhs) const
{
    auto complexRhs = dynamic_cast<const Complex&>(rhs);

    return std::unique_ptr<Number>(new Complex(_value + complexRhs.get_value()));
}

std::unique_ptr<Number> Complex::operator-(const Number &rhs) const
{
    auto complexRhs = dynamic_cast<const Complex&>(rhs);

    return std::unique_ptr<Number>(new Complex(_value - complexRhs.get_value()));
}

std::unique_ptr<Number> Complex::operator*(const Number &rhs) const
{
    auto complexRhs = dynamic_cast<const Complex&>(rhs);

    return std::unique_ptr<Number>(new Complex(_value * complexRhs.get_value()));
}

std::unique_ptr<Number> Complex::operator/( const Number &rhs) const
{
    auto complexRhs = dynamic_cast<const Complex&>(rhs);

    return std::unique_ptr<Number>(new Complex(_value / complexRhs.get_value()));
}


std::string
Complex::toString() const
{
    return std::to_string( _value.real()) + " + " + std::to_string(_value.imag()) + "i";
}
