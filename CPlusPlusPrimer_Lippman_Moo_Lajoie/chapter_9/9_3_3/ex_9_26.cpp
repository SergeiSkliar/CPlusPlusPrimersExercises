//Exercise 9.26: Using the following definition of ia, copy ia into a vector
//and into a list.Use the single - iterator form of erase to remove the
//elements with odd values from your list and the even values from your
//vector.

#include <iostream>
#include <list>
#include <vector>
#include <iterator>

int main() {
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	size_t size = sizeof(ia) / sizeof(ia[0]);

	std::vector<int> even_vec(ia, ia + size);
	std::list<int> odd_list(ia, ia + size);
	std::cout << "Original vector and list: " << std::endl;
	for (const auto& e : even_vec)
	{
		std::cout << e << ' ';
	}
	std::cout << std::endl;

	for (const auto& e : odd_list)
	{
		std::cout << e << ' ';
	}
	std::cout << std::endl;
	std::cout << "vector with even values: " << std::endl;
	auto it_even = even_vec.begin();
	while (it_even != even_vec.end())
	{
		if (*it_even % 2)
			it_even = even_vec.erase(it_even);
		else
			++it_even;
	}
	for (const auto& e : even_vec)
	{
		std::cout << e << ' ';
	}
	std::cout << std::endl;

	std::cout << "list with odd values: " << std::endl;
	auto it_odd = odd_list.begin();
	while (it_odd != odd_list.end())
	{
		if (*it_odd % 2)
			++it_odd;
		else
			it_odd = odd_list.erase(it_odd);
	}
	for (const auto& e : odd_list)
	{
		std::cout << e << ' ';
	}
	std::cout << std::endl;
}