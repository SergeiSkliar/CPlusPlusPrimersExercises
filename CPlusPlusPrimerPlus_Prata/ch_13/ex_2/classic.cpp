#include "classic.h"
#include <cstring>
#include <iostream>


Classic::Classic(char* s1, char* s2, char* s3, int n, double x) :
	Cd(s2, s3, n, x)
{
	prime_work = new char[strlen(s1) + 1];
	strcpy(prime_work, s1);	
}

Classic::Classic(const Classic& c) : Cd(c)
{
	prime_work = new char[strlen(c.prime_work) + 1];
	strcpy(prime_work, c.prime_work);
}
Classic::Classic() : Cd()
{
	prime_work = new char[1];
	prime_work = '\0';
}

Classic::~Classic()
{
	delete[] prime_work;
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
	delete [] prime_work;
	prime_work = new char[strlen(c.prime_work) + 1];
	strcpy(prime_work, c.prime_work);
	return *this;
}
