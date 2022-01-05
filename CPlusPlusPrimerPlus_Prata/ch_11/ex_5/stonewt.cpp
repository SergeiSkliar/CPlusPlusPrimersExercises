// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"
// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode m)
{
	stone = int(lbs) / Lbs_per_stn; // integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = m;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode m)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = m;
}
Stonewt::Stonewt() // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
	mode = STONE;
}
Stonewt::~Stonewt() // destructor
{ 
}

void Stonewt::stone_mode()
{
	mode = STONE;
}

void Stonewt::int_p_mode()
{
	mode = INT_POUNDS;
}

void Stonewt::float_p_mode()
{
	mode = FLOAT_POUNDS;
}

Stonewt Stonewt::operator+(const Stonewt& st) const
{
	Stonewt temp;
	temp.stone = stone + st.stone;
	temp.pounds = pounds + st.pounds;
	temp.pds_left = pds_left + st.pds_left;
	return temp;
}

Stonewt Stonewt::operator-(const Stonewt& st) const
{
	Stonewt temp;
	temp.stone = stone - st.stone;
	temp.pounds = pounds - st.pounds;
	temp.pds_left = pds_left - st.pds_left;
	return temp;
}

Stonewt Stonewt::operator*(const Stonewt& st) const
{
	Stonewt temp;
	temp.stone = stone * st.stone;
	temp.pounds = pounds * st.pounds;
	temp.pds_left = pds_left * st.pds_left;
	return temp;
}


std::ostream& operator<<(std::ostream& os, const Stonewt& st)
{
	if (st.mode == Stonewt::STONE) {
		os << st.stone << " stones " << st.pds_left << " pounds\n";
	}
	else if (st.mode == Stonewt::FLOAT_POUNDS) {
		os << st.pounds << " pounds\n";
	}
	else if (st.mode == Stonewt::INT_POUNDS) {
		os << st.stone * Stonewt::Lbs_per_stn << " pounds\n";
	}
	else
		os << "Incorrect mode.\n";
	return os;
}
