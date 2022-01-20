#include "golf.h"
#include <iostream>

void setgolf(golf& g, std::string name, int hc)
{
	g.fullname = name;
	g.handicap = hc;
}

int setgolf(golf& g)
{
	std::cout << "Enter full name: ";
	std::cin >> g.fullname;
	std::cout << "Enter handicap: ";
	std::cin >> g.handicap;
	return 0;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	std::cout << "Name: " << g.fullname << "\nHandicap: " << g.handicap;
}