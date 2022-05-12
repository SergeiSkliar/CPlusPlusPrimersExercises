#include "wine.h"
#include <iostream>

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : label(l), years(y)
{
	YearsAndBottles.first.resize(years);
	YearsAndBottles.second.resize(years);
		for (int i = 0; i < years; i++)
	{
		YearsAndBottles.first[i] = yr[i];
		YearsAndBottles.second[i] = bot[i];
	}
}

Wine::Wine(const char* l, int y) : label(l), years(y) {
	YearsAndBottles.first.resize(years);
	YearsAndBottles.second.resize(years);
}

Wine::~Wine()
{
}

void Wine::GetBottles()
{
	std::cout << "Enter " << label << " for " << years << " year(s): " << std::endl;
	int in = 0;
	for (int i = 0; i < years; ++i)
	{
		std::cout << "Enter year: ";
		std::cin >> in;
		YearsAndBottles.first[i] = in;
		std::cout << "Enter bottles for " << YearsAndBottles.first[i] << " year: ";
		std::cin >> in;
		YearsAndBottles.second[i] = in;
		std::cout << std::endl;
	}
}

void Wine::Show()
{
	std::cout << "Wine: " << label << std::endl;
	std::cout << "\tYear\tBottles" << std::endl;

	for (int i = 0; i < years; i++)
	{
		std::cout << "\t" << YearsAndBottles.first[i] << "\t";
		std::cout << YearsAndBottles.second[i] << std::endl;
	}
}

const std::string& Wine::Label() const
{
	return label;
}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; ++i)
	{
		sum += YearsAndBottles.second[i];
	}
	return sum;
}

