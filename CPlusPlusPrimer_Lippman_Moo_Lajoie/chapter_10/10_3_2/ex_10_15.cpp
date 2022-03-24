//Exercise 10.15: Write a lambda that captures an int from its enclosing
//function and takes an int parameter.The lambda should return the sum of
//the captured int and the int parameter.

#include<iostream>


int main() {
	int x = 50;
	auto sum = [x](int a) { return a + x; };
	std::cout << sum(5);
}

