#include <iostream>
#include "sales.h"

int main() {
	double values[4] = {4, 5.5, 10, 5};
	SALES::Sales S1, S2;
	SALES::setSales(S1, values, 4);
	SALES::setSales(S2);

	SALES::showSales(S1);
	SALES::showSales(S2);
}