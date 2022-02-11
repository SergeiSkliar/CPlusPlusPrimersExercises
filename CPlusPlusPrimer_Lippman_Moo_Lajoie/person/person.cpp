#include"person.h"

std::ostream& print(std::ostream& os, const Person& p)
{
	os << p.fullname() << " " << p.p_address() << std::endl;
	return os;
}

std::istream& read(std::istream& is, Person& p)
{
	is >> p.name >> p.address;
	return is;
}
