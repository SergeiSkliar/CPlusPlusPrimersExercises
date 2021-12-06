#include <iostream>

// constant data
const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
//const std::array<std::string, Seasons> Snames =
//{ "Spring", "Summer", "Fall", "Winter" };

// function to modify array object
void fill(double* arr, int size);

// function that uses array object without modifying it
void show(const double* arr, int size);

int main()
{
	double expenses[Seasons];
	fill(expenses, Seasons);
	show(expenses, Seasons);
	return 0;
}
void fill(double* arr, int size)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> arr[i];
	}
}
void show(const double* arr, int size)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}