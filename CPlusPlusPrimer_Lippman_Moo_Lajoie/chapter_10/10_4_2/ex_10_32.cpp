//Exercise 10.32: Rewrite the bookstore problem from § 1.6 (p. 24) using a
//vector to hold the transactionsand various algorithms to do the processing.
//Use sort with your compareIsbn function from § 10.3.1 (p. 387) to
//arrange the transactions in order, and then use findand accumulate to
//do the sum.

//Unfinished

#include <iostream>
#include <iterator>
#include <algorithm>
#include "sales_data.h"
#include <vector>
#include <string>
#include <numeric>

using namespace std;

bool compareIsbn(const Sales_data& o1, const Sales_data& o2);

int main() {
	istream_iterator<Sales_data> inputSalesData(cin), eof;
	ostream_iterator<Sales_data> outputSalesData(cout, "\n");

	vector<Sales_data> total(inputSalesData, eof);
	if (inputSalesData == eof)
	{
		cerr << "No input" << endl;
		return -1;
	}

	sort(total.begin(), total.end(), compareIsbn);
	vector<Sales_data> transactions;
	unique_copy(total.cbegin(), total.end(), back_inserter(transactions), [](const Sales_data& o1, const Slaes_data& o2) {
		return o1.isbn() == o2.isbn();
		});


	Sales_item total; 
	if (std::cin >> total) {
		Sales_item trans; 
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans; 
			else {
				std::cout << total << std::endl;
				total = trans; 
			}
		}
		std::cout << total << std::endl; 
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1; 
	}

}

bool compareIsbn(const Sales_data& o1, const Sales_data& o2)
{
	return o1.isbn() < o2.isbn();
}