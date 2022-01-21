#include "person.h"
#include <iostream>

Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const
{
	std::cout << "First name: " << fname << ", last name: " << lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << lname << ", " << fname << std::endl;
}
