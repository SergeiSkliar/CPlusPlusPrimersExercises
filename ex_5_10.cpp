//	10. Write a program using nested loops that asks the user to enter a value for the
//	number of rows to display.It should then display that many rows of asterisks, with
//	one asterisk in the first row, two in the second row, and so on.For each row, the
//	asterisks are preceded by the number of periods needed to make all the rows
//	display a total number of characters equal to the number of rows.A sample run
//	would look like this:
//	Enter number of rows : 5
//	....*
//	...**
//	..***
//	.****
//	*****

// simple solution
//#include <iostream>
//#include <string>
//
//int main() {
//	int rows;
//	std::cout << "Enter number of rows: ";
//	std::cin >> rows;
//	std::cin.get();
//
//	for (int i = rows; i != 0; --i) {
//		std::cout << std::string(i-1, '.') << std::string(rows - i + 1, '*') << std::endl;
//	}
//}

// nested loop solution

#include <iostream>
#include <string>

int main() {
	int rows;
	std::cout << "Enter number of rows: ";
	std::cin >> rows;
	std::cin.get();

	for (size_t i = rows; i != 0; --i) {
		for (size_t j = i - 1; j != 0; --j) {
			std::cout << '.';
		}
		for (size_t j = rows - i + 1; j != 0; --j) {
			
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}