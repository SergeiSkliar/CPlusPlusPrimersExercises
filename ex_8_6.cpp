// unfinished

#include<iostream>
#include <cstring>

template <typename T>
T maxn(const T*, const int s);
template <>
const char* maxn<const char*>(const char* arr, const int s);

template <typename P>
void print_array(const P*, const int s);


int main() {
	int arr1[6] = { 1,2,4,5,3,2 };
	double arr2[4] = { 1.7,1.5,1.8,1.4 };

	char one[] = "one";
	char two[] = "two";
	char three[] = "three";
	char four[] = "four";
	char five[] = "five";

	char* char_arr[5] = { one, two, three, four, five };

	std::cout << "The largest number in the array of ints ";
	print_array(arr1, 6);
	std::cout << "is " << maxn(arr1, 6) << std::endl;

	std::cout << "The largest number in the array of doubles ";
	print_array(arr2, 4);
	std::cout << "is " << maxn(arr2, 4) << std::endl;


}

template <typename T>
T maxn(const T* num_array, const int s) {
	T temp = 0;
	for (int i = 0; i != s; ++i) {
		if (temp < num_array[i])
			temp = num_array[i];
	}
	return temp;
}

template <>
const char* maxn<const char*>(const char* arr, const int s) {
	char* max_char = arr[0];
	for (int i = 0; i != s; ++i) {
		if (std::strlen(max_char) < std::strlen(arr[i]))
			max_char = arr[i];
	}
	return max_char;
}

template <typename P>
void print_array(const P* arr, const int s) {
	for (int i = 0; i != s; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

