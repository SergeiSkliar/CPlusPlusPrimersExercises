#pragma once
#include <string>

struct Person {
	std::string name;
	std::string address;

	//member functions ex 7 5
	std::string fullname() const { return name; }
	std::string p_address() const { return address; }
	/*these methods should be const because this pointer by default points 
	to non const version of class/struct type. i.e. this cannot be bound 
	to a const object. Also intention of these functions is NOT to change an object. */

};