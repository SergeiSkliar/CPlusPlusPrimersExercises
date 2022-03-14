#include <list>
#include <vector>
#include <iterator>
#include <iostream>

using namespace std;

int main() {
	list<int> lst = { 1,2,3 };
	vector<double> dbl_vec(lst.begin(), lst.end());
	for (const auto e : lst) {
		std::cout << e << std::endl;
	}
	for (const auto e : dbl_vec) {
		std::cout << e << std::endl;
	}

	vector<int> int_vec = { 1,2,3 };
	vector<double> dbl_vec2(int_vec.begin(), int_vec.end());
	for (const auto e : int_vec) {
		std::cout << e << std::endl;
	}
	for (const auto e : dbl_vec2) {
		std::cout << e << std::endl;
	}
}