#ifndef COMPLEXNUM_H
#define COMPLEXNUM_H

#include <QPair>

class ComplexNum
{
public:
    ComplexNum();
    ComplexNum(const ComplexNum& n);
    ComplexNum(double real, double imaginary = 0);

    double getReal() const,
    getImaginary() const;
    //returns QPair of real and imag. parts of the number
    QPair<double, double> getNumber() const;

    void setReal(double real),
    setImaginary(double imaginary),
    setNumber(double real, double imaginary);

    ComplexNum operator+(const ComplexNum& n) const;
    ComplexNum operator-(const ComplexNum& n) const;
    ComplexNum operator*(const ComplexNum& n) const;
    ComplexNum operator/(const ComplexNum& n) const;

private:
    double real, imaginary;
};

#endif // COMPLEXNUM_H
