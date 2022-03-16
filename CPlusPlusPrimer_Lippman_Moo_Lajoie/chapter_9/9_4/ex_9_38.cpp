//Exercise 9.38: Write a program to explore how vectors grow in the library
//you use.

#include <iostream>
#include <vector>

void print_size_and_capacity(const std::vector<int>&);

int main() {
	std::vector<int> vec;
	print_size_and_capacity(vec);

	std::vector<int> vec2 = { 1,2,3,4,5,6,7,8,9,0 };
	print_size_and_capacity(vec2);

	for (std::vector<int>::size_type ix = 0; ix != 15; ++ix)
	{
		vec.push_back(ix);
	}
	print_size_and_capacity(vec);

	vec.reserve(26);
	vec2.reserve(30);
	print_size_and_capacity(vec);
	print_size_and_capacity(vec2);

	while (vec.size() != vec.capacity())
	{
		vec.push_back(0);
	}
	print_size_and_capacity(vec);
	vec.push_back(42);
	print_size_and_capacity(vec);
	vec.shrink_to_fit();
	print_size_and_capacity(vec);
}

void print_size_and_capacity(const std::vector<int>& v)
{
	std::cout << "Size: " << v.size() << " " << "Capacity: " << v.capacity() << std::endl;
}