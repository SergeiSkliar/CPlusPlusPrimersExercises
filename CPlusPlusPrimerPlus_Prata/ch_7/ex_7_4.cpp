#include <iostream>

long double probability(unsigned numbers, unsigned picks);
//long double mega_probability(unsigned numbers, unsigned picks);


int main()
{
	double total, choices, powerball_range;
	double powerball = 1.0;

	std::cout << std::fixed;
	std::cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((std::cin >> total >> choices) && choices <= total)
	{
		std::cout << "You have one chance in ";
		std::cout << probability(total, choices);
		std::cout << " of simple winning.\n";
		std::cout << "Please enter the powerball range (from 1 to ...): ";
		if ((std::cin >> powerball_range) && powerball <= powerball_range)
		{
			std::cout << (probability(total, choices) * probability(powerball_range, powerball)); // compute the odds
			std::cout << " of winning grand prize.\n";
			std::cout << "Next two numbers (q to quit): ";
		}
		else
			break;
	}
	std::cout << "bye\n";
	return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // here come some local variables
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}

