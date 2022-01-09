#include "complex0.h"

complex::complex()
{
	real = 0;
	imaginary = 0;
}

complex::complex(double r, double i)
{
	real = r;
	imaginary = i;
}

complex::~complex()
{
}

complex complex::operator+(const complex& c) const
{
	return complex(real + c.real, imaginary + c.imaginary);
}

complex complex::operator-(const complex& c) const
{
	return complex(real - c.real, imaginary - c.imaginary);
}

complex complex::operator~() const
{
	return complex(real, -imaginary);
}

complex complex::operator*(const complex& c) const
{
	return complex((real * c.real - imaginary * c.imaginary), (real * c.imaginary + c.real * imaginary));
}

complex complex::operator*(const double& d) const
{
	return complex(real * d, imaginary * d);
}

std::ostream& operator<<(std::ostream& os, const complex& c)
{
	os << '(' << c.real << ',' << c.imaginary << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, complex& c)
{
	std::cout << "real: ";
	is >> c.real;
	std::cout << "imaginary: ";
	is >> c.imaginary;
	return is;
}


