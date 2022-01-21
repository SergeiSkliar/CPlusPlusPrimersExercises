#include <iostream>
#include "sales.h"

int main() {
	double values[4] = { 4, 5.5, 10, 5 };
	SALES::Sales S1;
	SALES::Sales S2(values, 4);

	S1.showSales();
	S2.showSales();
}