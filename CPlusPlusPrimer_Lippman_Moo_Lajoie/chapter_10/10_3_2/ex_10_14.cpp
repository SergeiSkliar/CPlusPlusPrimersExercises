//Exercise 10.14: Write a lambda that takes two ints and returns their sum.

#include <iostream>

int main() {
	auto sum = [](int a, int b) { return a + b; };
	std::cout << sum(4, 5);
}