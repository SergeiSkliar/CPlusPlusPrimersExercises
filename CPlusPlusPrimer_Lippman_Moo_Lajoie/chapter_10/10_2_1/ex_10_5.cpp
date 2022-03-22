//Exercise 10.5: In the call to equal on rosters, what would happen if both
//rosters held C - style strings, rather than library strings ?

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

int main() {
	std::vector<const char*> roster1{ "hello", "there" };
	std::vector<const char*> roster2{ "hello", "there" };
	std::vector<std::string> roster3{ "hello", "there" };

	if (std::equal(roster1.begin(), roster1.end(), roster2.begin())) // not equal - addresses compared
		std::cout << "Equal";
	else
		std::cout << "Not equal";
	std::cout << std::endl;
	if (std::equal(roster1.begin(), roster1.end(), roster3.begin())) // equal
		std::cout << "Equal";
	else
		std::cout << "Not equal";
	std::cout << std::endl;

	"hello\0" == "hello\0" ? std::cout << "equal" : std::cout << "not equal"; // not equal - addresses compared.
}