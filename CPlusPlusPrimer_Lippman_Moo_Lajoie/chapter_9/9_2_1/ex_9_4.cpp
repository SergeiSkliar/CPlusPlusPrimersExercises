//Exercise 9.4: Write a function that takes a pair of iterators to a
//vector<int> and an int value.Look for that value in the range and return
//a bool indicating whether it was found.

#include <vector>
#include <iterator>
#include <iostream>

bool exist(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int v);

int main() {
	std::vector<int> test_vec{ 1,2,3,4,5 };
	auto iter1 = test_vec.begin();
	auto iter2 = test_vec.end();
	std::cout << exist(iter1, iter2, 3) << std::endl;
	std::cout << exist(iter1, iter2, 6) << std::endl;
}

bool exist(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e, int v) 
{
	for (; b != e; ++b) 
	{
		if (v == *b)
			return true;
	}
	return false;

}