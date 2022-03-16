#include<iostream>
#include <vector>

int main() {
	std::vector<int> v = { 1,2,3,4 };

	auto begin = v.begin();

	while (begin != v.end()) 
	{
		++begin; 
		begin = v.insert(begin, 42); 
		//v.insert(begin, 42);
		++begin; 
	}

	for (const auto& e : v)
	{
		std::cout << e << ' ';
	}
}