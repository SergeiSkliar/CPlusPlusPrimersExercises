// 3. Write a program that asks the user to type in numbers.
// After each entry, the program should report the cumulative sum of the entries to date.
// The program should terminate when the user enters 0


#include <iostream>


int main()
{
	int sum = 0, num;
	std::cout << "Enter numbers (0 to terminate): " << std::endl;

	do {
		std::cin >> num;
		sum += num;
	} while (num != 0);

	std::cout << sum;

	return 0;
}