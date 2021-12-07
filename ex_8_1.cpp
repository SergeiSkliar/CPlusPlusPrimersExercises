#include <iostream>

void print_str(const std::string&, int repeat = 0);
int count = 0;

int main() {
	std::string str = "Testing\n";
	std::cout << "First call:\n";
	print_str(str);
	std::cout << "Second call:\n";
	print_str(str);
	std::cout << "Third call:\n";
	print_str(str, -13);
	std::cout << "Fourth call:\n";
	print_str(str, 4);
	std::cout << "Fifth call:\n";
	print_str(str, 0);
}

void print_str(const std::string& str, int repeat) {
	++count;
	if (repeat != 0)
	{
		for (int i = 0; i != count; ++i) 
		{
			std::cout << str << std::endl;
		}
	}
	else
		std::cout << str << std::endl;
}

