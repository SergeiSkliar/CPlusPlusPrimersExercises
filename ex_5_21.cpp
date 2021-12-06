#include <iostream>
#include <string>

int main() {
	std::string str1, str2;

	std::cout << "Enter a one word at a time (program terminates if one word occurs twice in succession): " << std::endl;
	while (std::cin >> str1 >> str2) {
		if ((str1 == str2) && (isupper(str1[0]) && isupper(str2[0])))
		{
			std::cout << str1 << " and " << str2 << " are repeated." << std::endl;
		}
		else
			continue;
	}
}