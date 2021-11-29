#include <iostream>

const int Max = 5;

// function prototypes
double* fill_array(double* begin, double* end);
void show_array(const double* begin, const double* end);
void revalue(double r, double* begin, const double* end);
int main()
{
	using namespace std;
	double properties[Max];
	//double* arr_end = (double*)(&properties + 1) - 1;
	double* arr_end = fill_array(properties, &properties[Max]);
	show_array(properties, arr_end);
	if (properties < arr_end)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, arr_end);
		show_array(properties, arr_end);
	}
	cout << "Done.\n";
	//cin.get();
	//cin.get();
	return 0;
}
double* fill_array(double* begin, double* end)
{
	using namespace std;
	double temp;
	auto pt = begin;
	for (pt; pt != end; pt++)
	{
		cout << "Enter value #" << (pt - begin) + 1 << ": ";
		cin >> temp;
		if (!cin) // bad input
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) // signal to terminate
			break;
		*pt = temp;
	}
	return pt;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double* begin, const double* end)
{
	using namespace std;
	for (auto pt = begin; pt != end; pt++)
	{
		cout << "Property #" << (pt - begin) + 1 << ": $";
		cout << *pt << endl;
	}
}
// multiplies each element of ar[] by r
void revalue(double r, double* begin, const double* end)
{
	for (auto pt = begin; pt != end; pt++)
		*pt *= r;
}