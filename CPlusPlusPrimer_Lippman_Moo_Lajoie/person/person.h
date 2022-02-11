#pragma once
#include <string>
#include<iostream>

struct Person {
	Person() = default;
	Person(const std::string& n) : name(n) {}
	Person(const std::string& n, const std::string& a) : name(n), address(a) {}
	Person(std::istream& is);

	std::string name;
	std::string address;

	//member functions ex 7 5
	std::string fullname() const { return name; }
	std::string p_address() const { return address; }
	/*these methods should be const because this pointer by default points 
	to non const version of class/struct type. i.e. this cannot be bound 
	to a const object. Also intention of these functions is NOT to change an object. */
};

//ex 7 9
std::ostream& print(std::ostream&, const Person&);
std::istream& read(std::istream&, Person&);