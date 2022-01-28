#include"Chapter6.h"
#include<iostream>;

int fact(int i) {
    if (i == 0) return 1;
    else {
        int temp = 1;
        while (i > 1) {
            temp *= i;
            --i;
        }
        return temp;
    }
}
void fact() {
    int i;
    int fact = 1;
    std::cout << "Enter a number: ";
    std::cin >> i;
    if (i == 0) {
        std::cout << "factorial of " << i << " is " << '1' << std::endl;
    }
    else {
        fact *= i;
        --i;
        std::cout << "factorial of " << i << " is " << fact << std::endl;
    }
}
int absolute(int i) {
    if (i < 0) return -i;
    else return i;
}
size_t count_calls() {
	static size_t ctr = -1; // value will persist across calls
	return ++ctr;
}