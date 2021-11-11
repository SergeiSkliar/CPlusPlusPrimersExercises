#include <iostream>

// prototype of harmonic mean function
double harmonic_mean(double x, double y);

int main()
{
	double first, second;
	std::cout << "Enter pair of numpers (enter 0 to terminate program): " << std::endl;

	std::cin >> first >> second;
	while (std::cin)
	{
		if (first == 0 || second == 0) break;
		std::cout << "harmonic mean of " << first << " and " << second << " is " << harmonic_mean(first, second) << std::endl;
		std::cin >> first >> second;
	}
}

// harmonic mean function
double harmonic_mean(double x, double y)
{
	return (2.0 * x * y / (x + y));
}