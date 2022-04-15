#include "classic.h"
#include <cstring>
#include <iostream>


Classic::Classic(char* s1, char* s2, char* s3, int n, double x) :
	Cd(s2, s3, n, x)
{
	strcpy(prime_work, s1);	
}

Classic::Classic(const Classic& c) : Cd(c)
{
	strcpy(prime_work, c.prime_work);
}
Classic::Classic() : Cd(), prime_work("")
{
}

Classic::~Classic()
{
	//delete[] prime_work;
}

void Classic::Report() const
{
	std::cout << "Prime work: " << prime_work << std::endl;
	Cd::Report();
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
		return *this;
	Cd::operator=(c);
	strcpy(prime_work, c.prime_work);
	return *this;
}
