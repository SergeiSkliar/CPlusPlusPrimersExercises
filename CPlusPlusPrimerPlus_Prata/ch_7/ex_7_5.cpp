#include <iostream>

//prototype
int factorial(int);

int main() {
	int num;

	std::cout << "Enter number for factorial: ";
	while (std::cin >> num) {
		std::cout << factorial(num) << std::endl;
		std::cout << "Enter number (or q for exit): ";
	}
	std::cout << "Bye" << std::endl;
}

int factorial(int num) {
	int fact = 0;
	if (num == 0)
		return 1;
	else
	{
		for (int i = num; i != 0; --i)
		{
			fact += i * factorial(i - 1);
		}
	}

}