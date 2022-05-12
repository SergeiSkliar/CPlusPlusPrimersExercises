#pragma once

#include <valarray>
#include <string>

using ArrayInt = std::valarray<int>;
using PairArray = std::pair<ArrayInt, ArrayInt>;

class Wine {
private:
	std::string label;
	PairArray YearsAndBottles;
	int years;
public:
	// initialize label to l, number of years to y,
	// vintage years to yr[], bottles to bot[]
	Wine(const char* l, int y, const int yr[], const int bot[]);
	// initialize label to l, number of years to y,
	// create array objects of length y
	Wine(const char* l, int y);
	~Wine();

	void GetBottles();
	void Show();
	const std::string& Label() const;
	int sum() const;
};