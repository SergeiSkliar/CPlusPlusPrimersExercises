#pragma once
#include <string>
#include<iostream>

struct Person {
private:
	friend std::ostream& print(std::ostream&, const Person&);
	friend std::istream& read(std::istream&, Person&);

	//data members
	std::string name;
	std::string address;

public:
	Person() = default;
	Person(const std::string& n) : name(n) {}
	Person(const std::string& n, const std::string& a) : name(n), address(a) {}
	Person(std::istream& is);

	//member functions
	std::string fullname() const { return name; }
	std::string p_address() const { return address; }

};

std::ostream& print(std::ostream&, const Person&);
std::istream& read(std::istream&, Person&);