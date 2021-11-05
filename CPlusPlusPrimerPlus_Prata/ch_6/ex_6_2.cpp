#include <iostream>
#include <array>
#include <cctype>
#include <cstdlib>

int main() {
	const int ArSize = 10;
	std::array<double, ArSize> donations;
	double donate;
	double average = 0.0, total_sum = 0.0;
	int greater_than_average_cnt = 0;

	for (int i = 0; i != donations.size(); ++i)
	{
		std::cout << "Enter numeric value of donation #" << i + 1 << ": ";
		std::cin >> donate;
		if (std::cin.good())
		{
			donations[i] = donate;
			total_sum += donate;
		}
		else
		{
			std::cerr << "Error" << std::endl;
			exit(EXIT_FAILURE);
		}

	}

	average = total_sum / 10.0;
	std::cout << "Average of donations: " << average << std::endl;

	for (int i = 0; i != donations.size(); ++i)
	{
		if (donations[i] > average) ++greater_than_average_cnt;
	}
	std::cout << greater_than_average_cnt << " donations are greater than average" << std::endl;
}