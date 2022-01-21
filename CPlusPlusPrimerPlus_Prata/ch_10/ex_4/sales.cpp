#include "sales.h"
#include<iostream>
#include <limits>

SALES::Sales::Sales()
{
	long double sum = 0;
	max = 0;
	min = std::numeric_limits<double>::max();
	for (int i = 0; i < SALES::QUARTERS; ++i) {
		std::cout << "Enter sales for " << i + 1 << " quarter: ";
		std::cin >> sales[i];
		if (max < sales[i])
			max = sales[i];
		if (min > sales[i])
			min = sales[i];
		sum += sales[i];
	}
	average = sum / SALES::QUARTERS;
}

SALES::Sales::Sales(const double ar[], int n)
{
	long double sum = 0;
	max = 0;
	min = std::numeric_limits<double>::max();
	for (int i = 0; i < n; ++i) {
		sales[i] = ar[i];
		if (max < sales[i])
			max = sales[i];
		if (min > sales[i])
			min = sales[i];
		sum += sales[i];
	}
	average = sum / n;
}

SALES::Sales::~Sales()
{
}

void SALES::Sales::showSales()
{
	size_t size = (sizeof(sales) / sizeof(*sales));
	for (int i = 0; i < size; ++i) {
		std::cout << "Sales for " << i + 1 << " quarter: " << sales[i] << std::endl;
	}
	std::cout << "Average: " << average << " MAX: " << max << " MIN: " << min << std::endl;
}

