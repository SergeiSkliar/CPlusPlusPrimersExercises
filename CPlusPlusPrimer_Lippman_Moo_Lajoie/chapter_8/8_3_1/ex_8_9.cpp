#include<iostream>
#include<string>
#include <sstream>

std::istream& read(std::istream& is) {
	is.clear();
	std::string s;
	while (std::getline(is, s)) {
		std::cout << s << std::endl;
	}
	is.clear();
	return is;
}

int main() {
	std::string line;
	while (std::getline(std::cin, line)) {
		std::istringstream input(line);
		read(input);
	}
}