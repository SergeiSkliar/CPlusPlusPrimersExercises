#include<iostream>
#include<vector>

int add(int, int);
int sub(int, int);
int mult(int, int);
int divis(int, int);

int main() {
	using func_ps = int(*)(int, int);
	std::vector<func_ps> vec_p{ add, sub, mult, divis };

	std::cout << vec_p[0](2, 3) << std::endl;
	std::cout << vec_p[1](10, 4) << std::endl;
	std::cout << vec_p[2](5, 5) << std::endl;
	std::cout << vec_p[3](10, 5) << std::endl;
}

int add(int a, int b)
{
	std::cout << "Addition: ";
	return a + b;
}

int sub(int a, int b)
{
	std::cout << "Subtraction: ";
	return a - b;
}

int mult(int a, int b)
{
	std::cout << "Multiplication: ";
	return a * b;
}

int divis(int a, int b)
{
	if (b != 0) {
		std::cout << "Division: ";
		return a / b;
	}
	else {
		std::cout << "error" << std::endl;
		return -1;
	}
}
