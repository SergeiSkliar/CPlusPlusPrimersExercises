//Exercise 9.50: Write a program to process a vector<string>s whose
//elements represent integral values.Produce the sum of all the elements in
//that vector.Change the program so that it sums of strings that represent
//floating - point values.

#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> vec{ "123", "45", "22" };
	std::cout << "vector of strings: ";
	for (const auto& e : vec)
	{
		std::cout << e << ' ';
	}
	std::cout << std::endl;

	int ans = stoi(vec[0]) + stoi(vec[1]) + stoi(vec[2]);
	std::cout << "Integer sum of strings in vector: " << ans << std::endl;

	std::vector<std::string> vec2{ "123.5", "45.23", "22.4" };

	std::cout << "vector of strings: ";
	for (const auto& e : vec2)
	{
		std::cout << e << ' ';
	}
	std::cout << std::endl;

	double and_d = stod(vec2[0]) + stod(vec2[1]) + stod(vec2[2]);
	std::cout << "Floating point sum of strings in vector: " << and_d << std::endl;
}