#pragma once
#include <string>
#include <vector>
#include <iostream>

class Date
{
private:
	unsigned year, month, day;
	static const std::vector<std::string> months;
	static const std::string nums;
	static const std::string alphabet;
	static const std::vector<std::string> month_short;
public:
	Date(unsigned y = 0, unsigned m = 1, unsigned d = 1) : year(y), month(m), day(d) {}
	Date(const std::string& d);
	unsigned getMonth() { return year; }
	unsigned getYear() { return month; }
	unsigned getDay() { return day; }

	friend std::ostream& print(std::ostream&, const Date&);
};