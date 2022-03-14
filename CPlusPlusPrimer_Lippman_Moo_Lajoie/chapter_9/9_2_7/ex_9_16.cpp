//Exercise 9.16: Repeat the previous program, but compare elements in a
//list<int> to a vector<int>.

#include <vector>
#include <iostream>
#include <list>

bool equal(const std::vector<int>&, const std::vector<int>&);
void print_equal(bool);

int main() {
	std::list<int> lst = { 1,2,3 };
	std::vector<int> vec1 = { 1,2,3 };
	std::vector<int> vec2 = { 1,2,3,4,5 };
	std::vector<int> vec3 = { 1,2,5 };

	// We can't compare two different containers
	// But we can create another container of appropriate type and initialize it with values of one of the original containers
	print_equal(equal(std::vector<int>(lst.begin(), lst.end()), vec1));
	print_equal(equal(std::vector<int>(lst.begin(), lst.end()), vec2));
	print_equal(equal(std::vector<int>(lst.begin(), lst.end()), vec3));

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