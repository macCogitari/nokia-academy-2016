#ifndef INTEGER_H
#define INTEGER_H

#include "Number.h"
#include <string>


class Integer : public Number
{
private:
    int _value;

public:
    Integer();
    Integer(int value);
    ~Integer();

    std::unique_ptr<Number> operator+ (const Number& rhs) const override;
    std::unique_ptr<Number> operator- (const Number& rhs) const override;
    std::unique_ptr<Number> operator* (const Number& rhs) const override;
    std::unique_ptr<Number> operator/ (const Number& rhs) const override;

    std::string toString() const;

    int get_value(){return _value;}
    void set_value(int value){ _value = value; }

};

#endif // INTEGER_H
