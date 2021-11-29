//#include <iostream>
//
////prototypes
//int Fill_array(double [], int ar_size); // returns the actual array size
//void Show_array(double[], int ar_size);
//void Reverse_array(double[], int ar_size);
//
//const int ArSize = 10;
//
//int main() {
//	double numbers[ArSize];
//
//	std::cout << "Please enter 10 numbers (use characters to stop): " << std::endl;
//	int size = Fill_array(numbers, ArSize);
//	Show_array(numbers, size);
//	Reverse_array(numbers, size);
//
//	if (size > 0) {
//		std::cout << "Reversed array is: " << std::endl;
//		Show_array(numbers, size);
//		Reverse_array(numbers + 1, size - 1);
//		std::cout << "Reversed array but the first and last elements: " << std::endl;
//		Show_array(numbers + 1, size - 1);
//	}
//	else
//		std::cout << "Zero elements" << std::endl;
//
//
//
//	std::cout << "Done" << std::endl;
//}
//
//int Fill_array(double ar[], int ar_size) {
//	double temp;
//	int i;
//	for (i = 0; i != ar_size; ++i)
//	{
//		std::cout << "Enter value #" << (i + 1) << ": ";
//		std::cin >> temp;
//		if (!std::cin.good()) {
//			std::cin.clear();
//			while (std::cin.get() != '\n')
//				continue;
//			std::cout << "Terminating..." << std::endl;
//			break;
//		}
//		ar[i] = temp;
//	}
//	return i;
//}
//
//void Show_array(double ar[], int ar_size) {
//	for (int i = 0; i != ar_size; ++i)
//	{
//		std::cout << "Element #" << (i + 1) << ": " << ar[i] << std::endl;
//	}
//}
//
//void Reverse_array(double ar[], int ar_size) {
//	double temp[ar_size];
//
//	for (int i = 0; i != ar_size; ++i) 
//	{
//		temp[i - 1 - i] = ar[i];
//	}
//	for (int i = 0; i != ar_size; ++i)
//	{
//		ar[i] = temp[i];
//	}
//}