//Exercise 10.1: The algorithm header defines a function named count
//that, like find, takes a pair of iterators and a value.count returns a count
//of how often that value appears.Read a sequence of ints into a vector
//and print the count of how many elements have a given value.

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

void readVector(std::vector<int>& v);
void readVector(std::vector<int>& v, std::string f);


int main() {
	std::vector<int> test_vec;
	//std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_10\\10_1\\10_1_in.txt";
	std::cout << "Please enter values: ";
	readVector(test_vec);

	std::cout << "Please enter value to count: ";
	int val;
	std::cin >> val;
	auto c = std::count(test_vec.begin(), test_vec.end(), val);
	std::cout << "The value of " << val << " have " << c << " elements.";
}

void readVector(std::vector<int>& v) 
{
	int i;
	while (std::cin >> i && i != 9999)
	{
		v.push_back(i);
	}
}

void readVector(std::vector<int>& v, std::string f)
{
	std::ifstream input(f);
	int i;
	while (input.good())
	{
		v.push_back(i);
	}
	input.close();
}