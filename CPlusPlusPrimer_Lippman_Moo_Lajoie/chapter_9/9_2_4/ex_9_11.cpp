#include <vector>
#include <iterator>

int main() {
	std::vector<int> vec1; // empty vector, value-initialized
	std::vector<int> vec2(10); // vector of 10 value-initialized ints
	std::vector<int> vec3(10, 2); // vector of 10 ints each initialized to 2
	std::vector<int> vec4(vec2); // copy vec2 into vec4
	std::vector<int> vec5 = {1,2,3,4,5,6}; // list initialized vector
	std::vector<int> vec6(vec5.begin() + 2, vec5.end()); // copy the range of elements into vec6
}