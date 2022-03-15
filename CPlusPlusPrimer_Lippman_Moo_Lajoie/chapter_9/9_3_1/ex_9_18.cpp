//Exercise 9.18: Write a program to read a sequence of strings from the
//standard input into a deque.Use iterators to write a loop to print the
//elements in the deque.

#include <deque>
#include <string>
#include <iostream>

int main() {
	std::deque<std::string> ex;
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