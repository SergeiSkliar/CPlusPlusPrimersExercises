//Exercise 10.12: Write a function named compareIsbn that compares the
//isbn() members of two Sales_data objects.Use that function to sort a
//vector that holds Sales_data objects.

#include <iostream>
#include <vector>
#include "sales_data.h"
#include <algorithm>
#include <string>

using namespace std;

bool compareIsbn(const Sales_data& o1, const Sales_data& o2);

int main() {
	vector<Sales_data> books{ {"1-1111-1111-1"}, {"3-3333-3333-3"},{"5-5555-5555-5"},{"2-2222-2222-2"} };

	sort(books.begin(), books.end(), compareIsbn);

	for (const auto& e : books)
	{
		print(cout, e);
	}
}

bool compareIsbn(const Sales_data& o1, const Sales_data& o2)
{
	return o1.isbn() < o2.isbn();
}