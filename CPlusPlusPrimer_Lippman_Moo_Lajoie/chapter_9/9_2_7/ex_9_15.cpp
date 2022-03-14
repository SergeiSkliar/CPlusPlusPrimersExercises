//Exercise 9.15: Write a program to determine whether two vector<int>s
//are equal.

#include <vector>
#include <iostream>

bool equal(const std::vector<int>&, const std::vector<int>&);
void print_equal(bool);

int main() {
	std::vector<int> vec1 = { 1,2,3 };
	std::vector<int> vec2 = { 1,2,3,4,5 };
	std::vector<int> vec3 = { 1,2,5 };
	std::vector<int> vec4 = { 1,2,3 };

	print_equal(equal(vec1, vec2));
	print_equal(equal(vec1, vec3));
	print_equal(equal(vec1, vec4));

}

bool equal(const std::vector<int>& a, const std::vector<int>& b) {
	return (a == b ? true : false);
}

void print_equal(bool e) {
	if (e)
		std::cout << "Equal" << std::endl;
	else
		std::cout << "Unequal" << std::endl;
}
