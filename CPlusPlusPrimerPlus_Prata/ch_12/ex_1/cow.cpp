#include"cow.h"
#include <iostream>

Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho)+1];
	strcpy(hobby, ho);
	if (wt > 0) weight = wt;
	else weight = 0;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	if (nullptr == c.hobby)
		hobby = nullptr;
	else {
		hobby = new char[strlen(c.hobby) + 1];
		strcpy(hobby, c.hobby);
	}
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c) return *this;

	delete[] hobby;
	strcpy(name, c.name);
	if (nullptr == c.hobby)
		hobby = nullptr;
	else {
		hobby = new char[strlen(c.hobby) + 1];
		strcpy(hobby, c.hobby);
	}
	weight = c.weight;
	return *this;
	// TODO: insert return statement here
}

void Cow::ShowCow() const
{
	std::cout << "Name: " << name << " Hobby: " << hobby << " Weight: " << weight << std::endl;
}
