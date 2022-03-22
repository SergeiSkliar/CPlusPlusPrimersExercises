//Exercise 10.4: Assuming v is a vector<double>, what, if anything, is
//wrong with calling accumulate(v.cbegin(), v.cend(), 0) ?

#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<double> test_vec{ 1.2,2.2,3.3,4.4,5.5,6.6 };

	auto sum = std::accumulate(test_vec.cbegin(), test_vec.cend(), 0);
	std::cout << "Sum of the vector: " << sum;
}