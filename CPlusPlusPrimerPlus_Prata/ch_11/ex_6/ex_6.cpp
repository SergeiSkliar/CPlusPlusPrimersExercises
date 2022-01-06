// ex_6.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt& st, int n);
int main()
{
	const int size = 6;
	Stonewt arr[size] = { Stonewt(285.7, Stonewt::FLOAT_POUNDS), Stonewt(21, 8, Stonewt::STONE), Stonewt(5, 6, Stonewt::INT_POUNDS)};

	for (int i = 3; i != size; ++i) {
		double p;
		cout << "Please enter value in pounds: ";
		std::cin >> p;
		arr[i] = Stonewt(p, Stonewt::FLOAT_POUNDS);
	}

	for (int i = 0; i != size; ++i) {
		cout << arr[i] << std::endl;
	}
	for (int i = 0; i != size; ++i) {
		arr[i].float_p_mode();
	}

	Stonewt min = arr[0];
	Stonewt max = arr[0];
	Stonewt eleven_stone(11, 0, Stonewt::STONE);
	int ElementsGreaterthanEleven = 0;

	for (size_t i = 0; i < size; ++i)
	{
		if (arr[i] >= eleven_stone) ++ElementsGreaterthanEleven;

		if (arr[i] > max) max = arr[i];
		else if (arr[i] < min) min = arr[i];
	}

	for (int i = 0; i != size; ++i) {

	}

	cout << "Greatest element in array: " << max << "\nSmallest element: " << min << "\n"
		<< ElementsGreaterthanEleven << " elements are greater or equal than 11 stones." << std::endl;

	return 0;
}