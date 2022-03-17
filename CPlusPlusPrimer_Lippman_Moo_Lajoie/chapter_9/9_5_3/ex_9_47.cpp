//Exercise 9.47: Write a program that finds each numeric character and then
//each alphabetic character in the string "ab2c3d7R4E6".Write two
//versions of the program.The first should use find_first_of, and the second find_first_not_of.

#include <string>
#include <iostream>

void InString(const std::string& source, const std::string pattern, const std::string what);
void notInString(const std::string& source, const std::string pattern, const std::string what);

int main() {
	std::string test = "ab2c3d7R4E6";

	std::string numbers = "0123456789";
	std::string alphabet;
	for (char c = 'a'; c <= 'z'; ++c)
	{
		alphabet.push_back(c);
		alphabet.push_back(toupper(c));
	}

	InString(test, numbers, "number");
	std::cout << std::endl;
	InString(test, alphabet, "alphabetic");
	std::cout << std::endl;
	notInString(test, alphabet, "number");
	std::cout << std::endl;
	notInString(test, numbers, "alphabetic");
	std::cout << std::endl;
}

void InString(const std::string& source, const std::string pattern, const std::string what)
{
	std::string::size_type pos = 0;

	while ((pos = source.find_first_of(pattern, pos)) != std::string::npos) {
		std::cout << "found " << what << " at index : " << pos
			<< " element is " << source[pos] << std::endl;
		++pos; // move to the next character
	}
}

void notInString(const std::string& source, const std::string pattern, const std::string what)
{
	std::string::size_type pos = 0;
	while ((pos = source.find_first_not_of(pattern, pos)) != std::string::npos) {
		std::cout << "found " << what << " at index : " << pos
			<< " element is " << source[pos] << std::endl;
		++pos; // move to the next character
	}
}