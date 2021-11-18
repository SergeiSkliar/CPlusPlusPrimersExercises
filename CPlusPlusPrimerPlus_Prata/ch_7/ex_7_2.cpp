#include <iostream>

int input_scores(double arr[], int size);
void display_scores(const double arr[], int size);
double average_scores(const double arr[], int size);

const int ArSize = 10;

int main() {
	double scores[ArSize];

	std::cout << "Enter up to 10 golf scores (enter any letter to stop)." << std::endl;
	int size = input_scores(scores, ArSize);
	display_scores(scores, size);

	if (size > 0) {
		std::cout << "Average is " << average_scores(scores, size) << std::endl;
	}

	std::cout << "Done";

}

int input_scores(double arr[], int arr_size) {
	double temp;
	int i;
	for (i = 0; i != arr_size; ++i) 
	{
		std::cout << "Enter value #" << (i + 1) << ": ";
		std::cin >> temp;
		if (!std::cin.good()) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Terminating." << std::endl;
			break;
		}
		else arr[i] = temp;
	}
	return i;
}

void display_scores(const double arr[], int size) {
	for (int i = 0; i != size; ++i) 
	{
		std::cout << "Score #" << (i + 1) << ": " << arr[i] << '\t';
	}
}

double average_scores(const double arr[], int size) {
	double temp = 0;
	for (int i = 0; i != size; ++i)
	{
		temp += arr[i];
	}
	return (temp / size);
}