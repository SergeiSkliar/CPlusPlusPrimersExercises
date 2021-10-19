//6. Do Programming Exercise 5 but use a two - dimensional array to store input for 3
//years of monthly sales.Report the total sales for each individual year and for the
//combined years.

#include <iostream>
#include <string>

int main() {

	std::string months[12] =
	{
		"January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December"
	};
	std::string years[3]{ "2019","2020","2021" };


	int num_sales[3][12];
	int sum = 0;

	for (size_t row = 0; row != 3; ++row) {
		int year_sales = 0;
		std::cout << "Enter monthly sales in " << years[row] << " in term of number of books: " << std::endl;
		for (size_t col = 0; col != 12; ++col) {
			std::cout << "Enter sales in " << months[col] << ": ";
			std::cin >> num_sales[row][col];
			year_sales += num_sales[row][col];
		}
		std::cout << "Sales for " << years[row] << " are " << year_sales << std::endl;
		sum += year_sales;
	}

	std::cout << "Total sales for 3 years: " << sum;
}