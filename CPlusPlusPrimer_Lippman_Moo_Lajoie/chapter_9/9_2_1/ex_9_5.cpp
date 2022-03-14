//Exercise 9.5: Rewrite the previous program to return an iterator to the
//requested element.Note that the program must handle the case where the
//element is not found.

#include <vector>
#include <iterator>
#include <iostream>

std::vector<int>::const_iterator exist(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int v);

int main() {
	std::vector<int> test_vec{ 1,2,3,4,5,6,7,8,9,0 };
	auto iter1 = test_vec.begin();
	auto iter2 = test_vec.end();
	std::cout << "Please enter a number: ";
	int n;
	while (std::cin >> n) 
	{
		auto it = exist(iter1, iter2, n);
		if (it != iter2)
			std::cout << "Exist." << std::endl;
		else 
			std::cout << "Doesn't exist." << std::endl;
		std::cout << "Please enter a number: ";
	}
}

std::vector<int>::const_iterator exist(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int v)
{
	for (auto it = b; it != e; ++it)
	{
		if (v == *it)
			return it;
	}
	return e;

}