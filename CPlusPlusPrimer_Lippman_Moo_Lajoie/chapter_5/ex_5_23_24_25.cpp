#include<iostream>
#include <stdexcept>

int main() {
	int first, second, result;

	std::cout << "Enter two numbers: " << std::endl;

	while (true) 
	{
		std::cout << "First: ";
		std::cin >> first;
		std::cout << "Second: ";
		while (std::cin >> second) {
			try
			{
				if (second == 0)
					throw std::runtime_error("Division by zero! Please enter another second number: ");
				else {
					std::cout << "Division of first by second: " << first / second << std::endl;
					break;
				}
			}
			catch (std::runtime_error err)
			{
				std::cout << err.what();
				continue;
			}
	}

	}

	
}