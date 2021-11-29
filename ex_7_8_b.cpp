#include <iostream>

// constant data
const int Seasons = 4;
const char* Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };

struct Expences {
	double value[Seasons];
};

// function to modify array object
void fill(Expences* arr, int size);

// function that uses array object without modifying it
void show(const Expences arr, int size);

int main()
{
	Expences expenses;
	fill(&expenses, Seasons);
	show(expenses, Seasons);
	return 0;
}
void fill(Expences* arr, int size)
{
	using namespace std;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> arr->value[i];
	}
}
void show(const Expences arr, int size)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < size; i++)
	{
		cout << Snames[i] << ": $" << arr.value[i] << endl;
		total += arr.value[i];
	}
	cout << "Total Expenses: $" << total << endl;
}