#include <iostream>
#include "sales_data.h"

void combine(Sales_data&, const Sales_data&);
void print_SD(const Sales_data&);

int main()
{
	Sales_data total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if (std::cin >> total.bookNo >> total.revenue >> total.units_sold) {
		Sales_data trans; // variable to hold the running sum
		// read and process the remaining transactions
		while (std::cin >> trans.bookNo >> trans.revenue >> trans.units_sold) {
			// if we're still processing the same book
			if (total.bookNo == trans.bookNo)
				combine(total, trans); // update the running total
			else {
				// print results for the previous book
				print_SD(total);
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

	void combine(Sales_data& a, const Sales_data& b)
	{
		a.units_sold += b.units_sold;
		a.revenue += b.revenue;
	}

	void print_SD(const Sales_data& sd)
	{
		std::cout << "ISBN: " << sd.bookNo << std::endl;
		std::cout << "Units sold: " << sd.units_sold << std::endl;
		std::cout << "Revenue: " << sd.revenue << std::endl;
	}
