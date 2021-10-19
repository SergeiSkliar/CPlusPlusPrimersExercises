//	9. Write a program that matches the description of the program in Programming
//	Exercise 8, but use a string class object instead of an array.Include the string
//	header fileand use a relational operator to make the comparison test.

#include <iostream>
#include <string>

int main() {

	std::string word = "";
	int cnt = 0;
	std::cout << "Enter words(to stop, type the word done) : " << std::endl;
	std::cin >> word;
	while (word != "done") {
		++cnt;
		std::cin >> word;

	}

	std::cout << "You entered a total of " << cnt << " words";
	std::cin.get();
}