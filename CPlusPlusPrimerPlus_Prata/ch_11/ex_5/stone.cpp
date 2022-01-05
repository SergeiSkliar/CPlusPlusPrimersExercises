// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt& st, int n);
int main()
{
	Stonewt incognito = 275; // uses constructor to initialize
	Stonewt wolfe(285.7, Stonewt::STONE); // same as Stonewt wolfe = 285.7;
	Stonewt taft(21, 8, Stonewt::STONE);

	cout << "The celebrity weighed " << incognito << std::endl;
	cout << "The detective weighed " << wolfe << std::endl;
	cout << "The President weighed " << taft << std::endl;

	cout << "celebrity + detective = " << incognito + wolfe << std::endl;
	cout << "detective - President = " << wolfe - taft << std::endl;
	cout << "celebrity * President = " << incognito * taft << std::endl;

	incognito.float_p_mode();
	wolfe.int_p_mode();
	taft.int_p_mode();
	cout << "The celebrity weighed " << incognito << std::endl;
	cout << "The detective weighed " << wolfe << std::endl;
	cout << "The President weighed " << taft << std::endl;

	return 0;
}
