//Exercise 10.17: Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a
//lambda in the call to sort instead of the compareIsbn function.

#include <iostream>
#include <vector>
#include "sales_data.h"
#include <algorithm>
#include <string>

using namespace std;


int main() {
	vector<Sales_data> books{ {"1-1111-1111-1"}, {"3-3333-3333-3"},{"5-5555-5555-5"},{"2-2222-2222-2"} };

	sort(books.begin(), books.end(), [books](const Sales_data& o1, const Sales_data& o2) {return o1.isbn() < o2.isbn(); });

	for (const auto& e : books)
	{
		print(cout, e);
	}
}

