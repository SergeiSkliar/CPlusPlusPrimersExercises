#pragma once
#include<string>
#include<iostream>

class Tree {
	friend std::istream& read(std::istream&, Tree&);

	std::string common_name;
	std::string scientific_name;
public:
	Tree(std::string cm = "", std::string sm = "") : common_name(cm), scientific_name(sm) {}
	Tree() : Tree("", "") {}
	Tree(std::istream& is) : Tree("", "") {
		read(is, *this);
	}
};

std::istream& read(std::istream& is, Tree& t) {
	is >> t.common_name >> t.scientific_name;
	return is;
}