// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vect.h"
int main()
{
	using namespace std;
	int N; // N trials 
	int highest=0, lowest=0, total_steps=0; //number of steps in N trials
	cout << "Please enter the number of trials: ";
	cin >> N;
	using VECTOR::Vector;
	srand(time(0)); // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int i = 0;
	cout << "Enter target distance (q to quit): ";
	while (N > i++) {
		while (cin >> target)
		{
			cout << "Enter step length: ";
			if (!(cin >> dstep))
				break;
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			total_steps += steps;
			if (highest == 0) highest = steps;
			if (lowest == 0) lowest = steps;
			if (steps > highest) highest = steps;
			if (steps < lowest) lowest = steps;
			result.polar_mode();
			steps = 0;
			result.reset(0.0, 0.0);
			cout << "Enter target distance (q to quit): ";
		}
	}
	cout << "Average number of steps: " << total_steps / N
		<< ". Highest number of steps in " << N << " trials: " << highest << "; lowest: " << lowest << endl;
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}