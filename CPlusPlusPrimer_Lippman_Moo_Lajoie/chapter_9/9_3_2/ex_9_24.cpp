//Exercise 9.24: Write a program that fetches the first element in a vector
//using at, the subscript operator, front, and begin.Test your program on
//an empty vector.

#include <vector>
#include <iostream>

int main() {

	//Empty vector
	//std::vector<int> vec;

	// NB: with empty vector all of them abort the program in VS2019
	// 
	//auto v1 = vec.at(0);
	//auto v2 = vec[0];
	//auto v3 = *vec.begin();
	//auto v4 = vec.front();

	//std::cout << "vec.at(0): " << vec.at(0) << std::endl;
	//std::cout << "vec[0]: " << vec[0] << std::endl;
	//std::cout << "*vec.begin(): " << *vec.begin() << std::endl;
	//std::cout << "vec.front(): " << vec.front() << std::endl;

	//vector with some elements
	std::vector<int> vec = {101,2,3,4};
	 
	auto v1 = vec.at(0);
	auto v2 = vec[0];
	auto v3 = *vec.begin();
	auto v4 = vec.front();

	std::cout << "vec.at(0): " << v1 << std::endl;
	std::cout << "vec[0]: " << v2 << std::endl;
	std::cout << "*vec.begin(): " << v3 << std::endl;
	std::cout << "vec.front(): " << v4 << std::endl;
}