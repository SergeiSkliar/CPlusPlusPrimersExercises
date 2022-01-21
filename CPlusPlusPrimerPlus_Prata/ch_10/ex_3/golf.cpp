#include "golf.h"
#include <iostream>

golf::golf()
{
	std::cout << "Enter full name: ";
	std::cin >> this->fullname;
	std::cout << "Enter handicap: ";
	std::cin >> this->handicap;
}

golf::golf(const char* name, int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

golf::~golf()
{
}



void golf::new_handicap(int hc)
{
	handicap = hc;
}

void golf::showgolf()
{
	std::cout << "Name: " << fullname << "\nHandicap: " << handicap << std::endl;
}
