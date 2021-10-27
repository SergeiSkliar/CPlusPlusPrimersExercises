//Exercise 5.19: Write a program that uses a do while loop to repetitively
//request two strings from the user and report which string is less than
//the other.

#include<iostream>
#include<string>

int main() {
	std::string str1, str2;

	do
	{
		std::cin >> str1 >> str2;
		std::cout << (str1.size() == str2.size() ? "The strings are equal\n" : 
			(str1.size() < str2.size() ? "First string is less than the second\n" : "Second string is less than the first\n"));
	} while (std::cin);
}