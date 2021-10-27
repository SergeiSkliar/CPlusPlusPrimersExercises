//Exercise 5.17: Given two vectors of ints, write a program to determine
//whether one vector is a prefix of the other.For vectors of unequal
//length, compare the number of elements of the smaller vector.For
//example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5,
//8, respectively your program should return true.

#include<iostream>
#include<vector>

int main() {
	//std::vector<int> v1 = { 0,1,1,2 };
	//std::vector<int> v2 = { 0,1,1,2,3,5,8 };

	std::vector<int> v1 = { 0, 1, 1, 2, 3, 5, 8 };
	std::vector<int> v2 = { 0,2,1,2 };

	bool is_prefix = true;

	auto iter1 = v1.cbegin(), iter2 = v2.cbegin();
	for (; iter1 != v1.cend() && iter2 != v2.cend(); ++iter1, ++iter2) {
		if (*iter1 != *iter2) 
		{
			is_prefix = false;
		} 
	}
	std::cout << "Is one of the vectors prefix to the other? Answer: " << is_prefix;

}