#include "complexnum.h"

ComplexNum::ComplexNum()
{
    this->real = 0;
    this->imaginary = 0;
}

ComplexNum::ComplexNum(const ComplexNum& n)
{
    this->setNumber(n.real, n.imaginary);
}

ComplexNum::ComplexNum(double real, double imaginary)
{
    this->setNumber(real, imaginary);
}

double ComplexNum::getReal() const
{
    return this->real;
}

double ComplexNum::getImaginary() const
{
    return this->imaginary;
}

QPair<double, double> ComplexNum::getNumber() const
{
    return QPair<double, double>(this->real, this->imaginary);
}

void ComplexNum::setReal(double real)
{
    this->real = real;
}

void ComplexNum::setImaginary(double imaginary)
{
    this->imaginary = imaginary;
}

void ComplexNum::setNumber(double real, double imaginary)
{
    this->setReal(real);
    this->setImaginary(imaginary);
}

ComplexNum ComplexNum::operator*(const ComplexNum& n) const
{
    return ComplexNum(this->real * n.real - this->imaginary * n.imaginary,
                      this->real * n.imaginary + this->imaginary * n.real);
}

ComplexNum ComplexNum::operator/(const ComplexNum& n) const
{
    ComplexNum n1 = ComplexNum(n.real, -n.imaginary);
    auto u = *this * n1;
    auto d = n * n1;

    return ComplexNum(u.real / d.real, u.imaginary / d.real);
}

ComplexNum ComplexNum::operator+(const ComplexNum &n) const
{
    return ComplexNum(this->real + n.real, this->imaginary + n.imaginary);
}

ComplexNum ComplexNum::operator-(const ComplexNum &n) const
{
    return ComplexNum(this->real - n.real, this->imaginary - n.imaginary);
}
