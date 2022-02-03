#include<initializer_list>
#include<iostream>

int sum(std::initializer_list<int> i);

int main() {
	std::cout << sum({ 1,2,3,4,5 }) << std::endl;
	std::cout << sum({ 1,2,3,4,5,6,7 }) << std::endl;

}

int sum(std::initializer_list<int> i) {
	int sum = 0;
	for (const auto& n : i) {
		sum += n;
	}
	return sum;
}