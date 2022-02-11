#include <iostream>
#include "sales_data.h"

void print_SD(const Sales_data&);

int main()
{
	Sales_data total; // variable to hold data for the next transaction

	
	// read the first transaction and ensure that there are data to process
	if (read(std::cin, total)) {
		Sales_data trans; // variable to hold the running sum
		// read and process the remaining transactions
		while (read(std::cin, total)) {
			// if we're still processing the same book
			if (total.isbn() == trans.isbn())
				total.combine(trans); // update the running total
			else {
				// print results for the previous book
				print(std::cout, total);
				total = trans; // total now refers to the next book
			}
		}
		print_SD(total); // print the last transaction
	}
	else {
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1; // indicate failure
	}
}


void print_SD(const Sales_data& sd)
{
	std::cout << "ISBN: " << sd.bookNo << std::endl;
	std::cout << "Units sold: " << sd.units_sold << std::endl;
	std::cout << "Revenue: " << sd.revenue << std::endl;
}
