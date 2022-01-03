// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file

#include <iostream>
#include <fstream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	std::ofstream fout;
	fout.open("results.txt");
	std::cout << "Enter target distance (q to quit): ";
	while (std::cin >> target)
	{
		std::cout << "Enter step length: ";
		if (!(std::cin >> dstep))
			break;
		fout << "Target Distance: " << target << ", Step Size: " << dstep << std::endl;
		while (result.magval() < target)
		{
			fout << steps << ": (x,y) = (" << result << ")" << std::endl;
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		fout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		fout << result << endl;
		result.polar_mode();
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
	}
	fout.close();
	std::cout << "Bye!\n";
	std::cin.clear();
	while (std::cin.get() != '\n')
		continue;
	return 0;
}