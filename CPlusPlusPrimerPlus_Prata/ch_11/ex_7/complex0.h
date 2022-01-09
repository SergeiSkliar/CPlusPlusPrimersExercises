#pragma once
#ifndef COMPLEX0
#define COMPLEX0
#include<iostream>

class complex
{
public:
	complex();
	complex(double r, double i);
	~complex();

	complex operator+(const complex& c) const;
	complex operator-(const complex& c) const;
	complex operator~() const;
	complex operator*(const complex& c) const;
	complex operator*(const double& d) const;

	friend std::ostream& operator<<(std::ostream& os, const complex& c);
	friend std::istream& operator>>(std::istream& is, complex& c);
	friend complex operator*(const double& n, const complex& c) { return c * n; };

private:
	double real;
	double imaginary;
};
#endif // !COMPLEX0


