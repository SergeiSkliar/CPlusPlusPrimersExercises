// 1. Write a program that requests the user to enter two integers.The program should
// then calculate and report the sum of all the integers between and including the two
// integers.At this point, assume that the smaller integer is entered first.For example, if
// the user enters 2 and 9, the program should report that the sum of all the integers
// from 2 through 9 is 44.

#include <iostream>
#include <vector>

int main() {
	int first, second;
	std::vector<int> store;

	std::cout << "Enter two integers, smaller first: " << std::endl;
	std::cin >> first >> second;
	//store.push_back(first);
	for (int i = first; i != second; ++i) {
		store.push_back(i);
	}
	store.push_back(second);

	int sum = 0;
	for (auto i : store) {
		sum += i;
	}
	std::cout << "The sum is: " << sum;
}