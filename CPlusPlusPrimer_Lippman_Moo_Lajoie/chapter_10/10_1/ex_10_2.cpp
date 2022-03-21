//Exercise 10.2: Repeat the previous program, but read values into a list of
//strings.

#include <algorithm>
#include <list>
#include <iostream>
#include <string>
#include <fstream>

void readVector(std::list<std::string>& v);
void readVector(std::list<std::string>& v, std::string f);


int main() {
	std::list<std::string> test_list;
	//std::string ifile = "G:\\source\\CPlusPlusPrimersExercises\\CPlusPlusPrimer_Lippman_Moo_Lajoie\\chapter_10\\10_1\\10_1_in.txt";
	std::cout << "Please enter values: ";
	readVector(test_list);

	std::cout << "Please enter value to count: ";
	std::string val;
	std::cin >> val;
	auto c = std::count(test_list.begin(), test_list.end(), val);
	std::cout << "The value of " << val << " have " << c << " elements.";
}

void readVector(std::list<std::string>& v)
{
	std::string i;
	while (std::cin >> i && i != "q")
	{
		v.push_back(i);
	}
}

void readVector(std::list<std::string>& v, std::string f)
{
	std::ifstream input(f);
	std::string i;
	while (input.good())
	{
		v.push_back(i);
	}
	input.close();
}