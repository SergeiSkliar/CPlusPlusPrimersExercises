//Exercise 9.41: Write a program that initializes a string from a
//vector<char>.

#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<char> vec = { 'h', 'i', ' ', 't', 'h', 'e', 'r', 'e'};
	std::string s(vec.begin(), vec.end());
	std::cout << s;
}