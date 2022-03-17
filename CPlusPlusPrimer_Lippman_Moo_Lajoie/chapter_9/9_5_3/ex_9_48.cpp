//Exercise 9.48: Given the definitions of name and numbers on page 365,
//what does numbers.find(name) return ?

#include <string>
#include <iostream>

int main() {
	//std::string name("AnnaBelle");
	std::string numbers("0123456789"), name("r2d2");
	auto pos = numbers.find(name);
	std::cout << pos;
}