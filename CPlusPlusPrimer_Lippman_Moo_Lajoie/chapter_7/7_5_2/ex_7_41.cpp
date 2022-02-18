#include <iostream>
#include"sales_data.h"


int main() {
	Sales_data book1;
	Sales_data book2("one arg data");
	Sales_data book3("three arg data", 12, 3);
	Sales_data book4(std::cin);

	print(std::cout, book1);
	std::cout << std::endl;
	print(std::cout, book2);
	std::cout << std::endl;
	print(std::cout, book3);
	std::cout << std::endl;
	print(std::cout, book4);
	std::cout << std::endl;
}