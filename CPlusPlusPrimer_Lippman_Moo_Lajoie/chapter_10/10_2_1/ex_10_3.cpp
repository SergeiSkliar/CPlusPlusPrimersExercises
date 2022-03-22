//Exercise 10.3: Use accumulate to sum the elements in a vector<int>.

#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<int> test_vec{1,2,3,4,5,6};

	auto sum = std::accumulate(test_vec.cbegin(), test_vec.cend(), 0);
	std::cout << "Sum of the vector: " << sum;
}