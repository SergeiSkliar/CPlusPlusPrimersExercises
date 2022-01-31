#include<iostream>
#include<string>

bool isCapital(const std::string& s);
void toLower(std::string&);

int main() {
	std::string str = "Hello, w";
	std::cout << isCapital(str) << isCapital("abs") << std::endl;
	std::cout << str << std::endl;
	toLower(str);
	std::cout << str << std::endl;
}

bool isCapital(const std::string& s) {
	for (auto& c : s)
		return ((c >= 'A' && c <= 'Z') ? true : false);
}

void toLower(std::string& s) {
	for (auto& c : s)
		if (c >= 'A' && c <= 'Z')
			c += 32;
}