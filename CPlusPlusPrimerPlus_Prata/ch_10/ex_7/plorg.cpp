#include"plorg.h"
#include<iostream>

Plorg::Plorg()
{
	strcpy(name, "Plorga");
	contentment_index = 50;
}

Plorg::Plorg(const char* name_)
{
	strcpy(name, name_);
	contentment_index = 50;
}

void Plorg::report() const
{
	std::cout << "Name: " << name << " Index: " << contentment_index << std::endl;
}

void Plorg::change_index(int n)
{
	set_index(n);
}
