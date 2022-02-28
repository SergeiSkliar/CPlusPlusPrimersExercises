#include<iostream>
#include<string>

std::istream& read(std::istream& is) {
	std::string s;
	while (std::getline(is, s)) {
		std::cout << s << std::endl;
	}
	s.clear();
	return is;
}

int main() {
	read(std::cin);
}