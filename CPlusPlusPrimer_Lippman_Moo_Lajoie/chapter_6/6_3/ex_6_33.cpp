//Exercise 6.33: Write a recursive function to print the contents of a vector.

#include<iostream>
#include<vector>

void vec_print(const std::vector<int>&);

int main() {
	std::vector<int> vec = { 1,2,3,4,5 };
	vec_print(vec);
}

void vec_print(const std::vector<int>& v) {
	for (const auto &e : v)
		std::cout << e << std::endl;
}