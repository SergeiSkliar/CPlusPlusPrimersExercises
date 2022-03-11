// Edit command line arguments in properties of CPlusPlusPrimersExercises

#include <iostream>
#include <fstream>

#include "sales_data.h"

void combine(Sales_data&, const Sales_data&);

int main(int argc, char** argv)
{
	//std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_8\\8_2_1\\8_6.txt";
	std::ifstream input(argv[1]);
	std::ofstream output(argv[2], std::ofstream::app);
	Sales_data total; // variable to hold data for the next transaction
	// read the first transaction and ensure that there are data to process
	if (input >> total.bookNo >> total.revenue >> total.units_sold) {
		Sales_data trans; // variable to hold the running sum
		// read and process the remaining transactions
		while (input >> trans.bookNo >> trans.revenue >> trans.units_sold) {
			// if we're still processing the same book
			if (total.bookNo == trans.bookNo)
				combine(total, trans); // update the running total
			else {
				// write to file
				output << "ISBN: " << total.bookNo << std::endl;
				output << "Units sold: " << total.units_sold << std::endl;
				output << "Revenue: " << total.revenue << std::endl;
				total = trans; // total now refers to the next book
			}
		}
		output << "ISBN: " << total.bookNo << std::endl;
		output << "Units sold: " << total.units_sold << std::endl;
		output << "Revenue: " << total.revenue << std::endl;
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
