//5. You sell the book C++ for Fools.Write a program that has you enter a year’s worth
//of monthly sales(in terms of number of books, not of money).The program should
//use a loop to prompt you by month, using an array of char* (or an array of
//	string objects, if you prefer) initialized to the month strings and storing the input
//	data in an array of int.Then, the program should find the sum of the array contents and report the total sales for the year.

#include <iostream>
#include <string>

int main() {
	const int months = 12;
	std::string year[months] =
	{
		"January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December"
	};

	int num_sales[months];
	int sum = 0;
	
	for (size_t i = 0; i != months; ++i) {
		std::cout << "Enter monthly sales in " << year[i] << " in term of number of books: " << std::endl;
		std::cin >> num_sales[i];
		sum += num_sales[i];
	}

	std::cout << "Total sales for the year " << sum;
}