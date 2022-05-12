#include "wine_inh.h"
#include <iostream>

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : PairArray(ArrayInt(y), ArrayInt(y)), std::string(l), years(y)
{
	for (int i = 0; i < years; i++)
	{
		PairArray::first()[i] = yr[i];
		PairArray::second()[i] = bot[i];
	}
}

Wine::Wine(const char* l, int y) : PairArray(ArrayInt(y), ArrayInt(y)), std::string(l), years(y) {

}

Wine::~Wine()
{
}

void Wine::GetBottles()
{
	std::cout << "Enter " << Label() << " for " << years << " year(s): " << std::endl;
	int in = 0;
	for (int i = 0; i < years; ++i)
	{
		std::cout << "Enter year: ";
		std::cin >> in;
		PairArray::first()[i] = in;
		std::cout << "Enter bottles for " << PairArray::first()[i] << " year: ";
		std::cin >> in;
		PairArray::second()[i] = in;
		std::cout << std::endl;
	}
}

void Wine::Show()
{
	std::cout << "Wine: " << Label() << std::endl;
	std::cout << "\tYear\tBottles" << std::endl;

	for (int i = 0; i < years; i++)
	{
		std::cout << "\t" << PairArray::first()[i] << "\t";
		std::cout << PairArray::second()[i] << std::endl;
	}
}

const std::string& Wine::Label() const
{
	return (const std::string&)(*this);
}

int Wine::sum() const
{
	int sum = 0;
	for (int i = 0; i < years; ++i)
	{
		sum += PairArray::second()[i];
	}
	return sum;
}

