// NB: unfinished?

#include<iostream>

double add(double, double);
double add(double, double, double (*)(double, double));
double plusProduct(double, double);
double plusDiv(double, double);
double calculate(double, double, double (*)(double, double));

int main() {
	double first, second;
	const int arSize = 3;
	double (*pf[arSize])(double, double) = {add, plusProduct, plusDiv};

	std::cout << "Enter two values (any char to quit): " << std::endl;
	while (std::cin >> first >> second) {
		for (int i = 0; i != arSize; ++i) {
			std::cout << "Result of calculation: " << calculate(first, second, pf[i]) << std::endl;
		}
		std::cout << "Enter two values (any char to quit): ";
	}
	std::cout << "Done." << std::endl;
}

double add(double x, double y) {
	return x + y;
}

double add(double x, double y, double (*func)(double, double)) {
	double result = x + y + func(x, y);
	return result;
}

double plusProduct(double x, double y) {
	return x*y;
}

double plusDiv(double first, double second) {
	if (second == 0) {
		std::cout << "Division by zero!!!" << std::endl;
	}
	else return first / second;
}

double calculate(double x, double y, double (*func)(double, double)) {
	double result = func(x, y);
	return result;
}