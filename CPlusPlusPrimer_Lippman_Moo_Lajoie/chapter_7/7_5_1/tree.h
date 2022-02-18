#pragma once
#include<string>
#include<iostream>

class Tree {
	std::string common_name;
	std::string scientific_name;
public:
	Tree(std::string cm = "", std::string sm = "") : common_name(cm), scientific_name(sm) {}
	Tree(std::istream& is) {
		std::cout << "Enter common name of the tree (e.g., Persian willow): ";
		is >> common_name;
		std::cout << "Enter scientific name of the tree (e.g., Salix aegyptiaca): ";
		is >> scientific_name;
	}
};