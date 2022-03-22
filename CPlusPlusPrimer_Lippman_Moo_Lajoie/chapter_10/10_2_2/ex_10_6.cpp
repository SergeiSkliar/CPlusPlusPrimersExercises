//Exercise 10.6: Using fill_n, write a program to set a sequence of int
//values to 0.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> vec{1,2,3,4,5,6,7,8,9};

	std::fill_n(vec.begin(), vec.size() / 2 + 1, 0);

	for (const auto& e : vec)
	{
		std::cout << e << ' ';
	}
}