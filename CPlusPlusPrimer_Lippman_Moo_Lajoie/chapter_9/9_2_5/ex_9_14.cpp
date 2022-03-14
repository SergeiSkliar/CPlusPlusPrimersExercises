//Exercise 9.14: Write a program to assign the elements from a list of
//char* pointers to C - style character strings to a vector of strings.

#include <list>
#include <vector>
#include <string>
#include <iostream>

int main() {
	std::list<char*> lst = {"hi", "there"};
	std::vector<std::string> vec;

	vec.assign(lst.begin(), lst.end());

	for (const auto e : vec) {
		std::cout << e << std::endl;
	}
}