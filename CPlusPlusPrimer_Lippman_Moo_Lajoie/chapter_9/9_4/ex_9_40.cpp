//Exercise 9.38: Write a program to explore how vectors grow in the library
//you use.

#include <iostream>
#include <vector>
#include <string>

void print_size_and_capacity(const std::vector<std::string>&);

int main() {
	std::vector<std::string> svec;
	const int a = 256, b = 512, c = 1000, d = 1048;
	svec.reserve(1024);
	print_size_and_capacity(svec);
	std::string word = "Abc";
	for (std::vector<std::string>::size_type ix = 0; ix != d; ++ix)
	{
		svec.push_back(word);
	}
	print_size_and_capacity(svec);

	svec.resize(svec.size() + svec.size() / 2);

	print_size_and_capacity(svec);

	
}

void print_size_and_capacity(const std::vector<std::string>& v)
{
	std::cout << "Size: " << v.size() << " " << "Capacity: " << v.capacity() << std::endl;
}