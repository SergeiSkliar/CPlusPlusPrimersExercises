#include <iostream>

int main() {
	double income, taxOwed;

	std::cout << "Please enter your income: ";
	while (std::cin >> income && income > 0) 
	{
		if (income < 5000)
		{
			taxOwed = 0;
		}
		else if (income > 5000 && income <= 15000) 
		{
			taxOwed = (income - 5000) * 0.10;
		}
		else if (income > 15000 && income <= 35000)
		{
			taxOwed = ((income - 15000) * 0.15) + (10000 * 0.10);
		}
		else if (income > 35000)
		{
			taxOwed = ((income - 35000) * 0.20) + (20000 * 0.15) + (10000 * 0.10);
		}
		std::cout << "Owed taxes: " << taxOwed << std::endl;
	}
}