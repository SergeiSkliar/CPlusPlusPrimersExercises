#include "sales.h"
#include <limits>

namespace SALES {
	void setSales(Sales& s, const double ar[], int n)
	{
		s.max = 0;
		s.min = std::numeric_limits<double>::max();
		long double sum = 0;
		for (int i = 0; i < n; ++i) {
			s.sales[i] = ar[i];
			if (s.max < s.sales[i])
				s.max = s.sales[i];
			if (s.min > s.sales[i])
				s.min = s.sales[i];
			sum += s.sales[i];
		}
		s.average = sum / n;
	}
	void setSales(Sales& s)
	{
		long double sum = 0;
		s.max = 0;
		s.min = std::numeric_limits<double>::max();
		for (int i = 0; i < QUARTERS; ++i) {
			std::cout << "Enter sales for " << i + 1 << " quarter: ";
			std::cin >> s.sales[i];
			if (s.max < s.sales[i])
				s.max = s.sales[i];
			if (s.min > s.sales[i])
				s.min = s.sales[i];
			sum += s.sales[i];
		}
		s.average = sum / QUARTERS;
	}
	void showSales(const Sales& s)
	{
		size_t size = (sizeof(s.sales) / sizeof(*s.sales));
		for (int i = 0; i < size; ++i) {
			std::cout << "Sales for " << i + 1 << " quarter: " << s.sales[i] << std::endl;
		}
		std::cout << "Average: " << s.average << " MAX: " << s.max << " MIN: " << s.min << std::endl;
	}
}