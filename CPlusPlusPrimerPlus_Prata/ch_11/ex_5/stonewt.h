#pragma once
// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
	enum Mode {STONE, INT_POUNDS, FLOAT_POUNDS};
	Stonewt(double lbs, Mode m = STONE); // constructor for double pounds
	Stonewt(int stn, double lbs, Mode m = STONE); // constructor for stone, lbs
	Stonewt(); // default constructor
	~Stonewt();

	void stone_mode();
	void int_p_mode();
	void float_p_mode();

	Stonewt operator+(const Stonewt & st) const;
	Stonewt operator-(const Stonewt& st) const;
	Stonewt operator*(const Stonewt& st) const;
	friend std::ostream& operator<<(std::ostream& os, const Stonewt& st);
private:
	enum { Lbs_per_stn = 14 }; // pounds per stone
	int stone; // whole stones
	double pds_left; // fractional pounds
	double pounds; // entire weight in pounds
	Mode mode;
};
#endif