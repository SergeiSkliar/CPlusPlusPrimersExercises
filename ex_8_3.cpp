#include<iostream>
#include<string>

void stringUpper(std::string &);

int main() {
	std::string string;

	std::cout << "Enter a string (q to quit): ";
	while ((std::getline(std::cin, string)) && (string != "q")) {
		stringUpper(string);
		std::cout << string << std::endl;
		std::cout << "Next string (q to quit): ";
	}


	std::cout << "Bye" << std::endl;
}

void stringUpper(std::string& str) {
	for (auto& c : str)
		c = toupper(c);
}