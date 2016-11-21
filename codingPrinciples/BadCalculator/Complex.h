#ifndef COMPLEX_H
#define COMPLEX_H
#include "Number.h"
#include "complex"


class Complex : public Number
{
private:
    std::complex<double> _value;

public:
    Complex();
    Complex(std::complex<double> value);
    ~Complex();

    std::unique_ptr<Number> operator+ (const Number& rhs) const override;
    std::unique_ptr<Number> operator- (const Number& rhs) const override;
    std::unique_ptr<Number> operator* (const Number& rhs) const override;
    std::unique_ptr<Number> operator/ (const Number& rhs) const override;

    std::string toString() const;

    std::complex<double> get_value(){return _value;}
    void set_value(std::complex<double> value){ _value = value; }

};

#endif // COMPLEX_H
