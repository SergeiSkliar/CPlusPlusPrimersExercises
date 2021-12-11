#include<iostream>

template <typename T>
T max5(const T*);
const int size = 5;

template <typename T>
void print_array(const T*);

int main() {
	int arr1[size] = {1,2,4,5,3};
	double arr2[size] = { 1.7,1.5,1.8,1.9,1.4 };

	int largest_int = max5(arr1);
	std::cout << "The largest number in the array of ints ";
	print_array(arr1);
	std::cout << "is " << max5(arr1) << std::endl;

	double largest_double = max5(arr2);
	std::cout << "The largest number in the array of doubles ";
	print_array(arr2);
	std::cout << "is " << max5(arr2) << std::endl;
}

template <typename T>
T max5(const T* num_array) {
	T temp = 0;
	for (int i = 0; i != size; ++i) {
		if (temp < num_array[i])
			temp = num_array[i];
	}
	return temp;
}

template <typename T>
void print_array(const T* arr) {
	for (int i = 0; i != size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}