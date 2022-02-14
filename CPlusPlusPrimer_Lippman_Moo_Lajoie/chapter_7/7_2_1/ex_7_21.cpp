#include <iostream>
#include "sales_data.h"

int main()
{
	Sales_data total(std::cin); // variable to hold data for the next transaction

	
	// read the first transaction and ensure that there are data to process
	if (std::cin) {
		Sales_data trans; // variable to hold the running sum
		// read and process the remaining transactions
		//while (read(std::cin, trans)) {
		while (read(std::cin, trans)) {
			// if we're still processing the same book
			if (total.isbn() == trans.isbn())
				total = add(total, trans); // update the running total
			else {
				// print results for the previous book
				print(std::cout, total);
				total = trans; // total now refers to the next book
			}
		}
		print(std::cout, total) << std::endl; // print the last transaction
	}
	else {
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1; // indicate failure
	}
}


