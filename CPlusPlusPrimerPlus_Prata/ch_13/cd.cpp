#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(char* s1, char* s2, int n, double x) : selections(n), playtime(x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
}

Cd::Cd(const Cd& d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() : performers(""), label(""), playtime(0.0), selections(0)
{
}

Cd::~Cd()
{
	/*delete[] performers;
	delete[] label;*/
}

void Cd::Report() const
{
	std::cout << "Performer(s): " << performers << std::endl;
	std::cout << "Label: " << label << std::endl;
	std::cout << "Selections: " << selections << std::endl;
	std::cout << "Playtime: " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
		return *this;
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return* this;
}
