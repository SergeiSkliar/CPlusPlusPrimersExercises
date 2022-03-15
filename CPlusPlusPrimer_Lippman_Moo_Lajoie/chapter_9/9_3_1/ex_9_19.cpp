//Exercise 9.19: Rewrite the program from the previous exercise to use a
//list.List the changes you needed to make.

#include <list>
#include <string>
#include <iostream>

int main() {
	// include list header and use std::list
	std::list<std::string> ex;
	std::string word;
	while (std::cin >> word)
	{
		ex.push_back(word);
	}

	for (auto b = ex.begin(); b != ex.end(); ++b)
	{
		std::cout << *b << std::endl;
	}
}